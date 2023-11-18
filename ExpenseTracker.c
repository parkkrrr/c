#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct Expense
{
  int day;
  int month;
  int year;
  float amount;
  char description[50];
  struct Expense *next;
};

struct HashTable
{
  int size;
  struct Expense **table;
};

int hashFunction(int day, int month, int year, int size)
{
  return (day + month + year) % size;
}

void addExpense(struct Expense **head, struct HashTable *table, int day, int month, int year, float amount, char *description)
{
  struct Expense *newExpense = (struct Expense *)malloc(sizeof(struct Expense));
  newExpense->day = day;
  newExpense->month = month;
  newExpense->year = year;
  newExpense->amount = amount;
  strcpy(newExpense->description, description);
  newExpense->next = *head;
  *head = newExpense;

  int hash = hashFunction(day, month, year, table->size);
  newExpense->next = table->table[hash];
  table->table[hash] = newExpense;
}

void viewExpenses(struct HashTable *table, int startDay, int startMonth, int startYear, int endDay, int endMonth, int endYear)
{
  int hash;
  struct Expense *current;
  for (int day = startDay; day <= endDay; day++)
  {
    for (int month = startMonth; month <= endMonth; month++)
    {
      for (int year = startYear; year <= endYear; year++)
      {
        hash = hashFunction(day, month, year, table->size);
        current = table->table[hash];
        while (current != NULL)
        {
          if (current->day == day && current->month == month && current->year == year)
          {
            printf("%d/%d/%d: $%.2f - %s\n", current->day, current->month, current->year, current->amount, current->description);
          }
          current = current->next;
        }
      }
    }
  }
}

void generateReport(struct Expense *head, int month, int year)
{
  float total = 0;
  struct Expense *current = head;
  while (current != NULL)
  {
    if (current->month == month && current->year == year)
    {
      total += current->amount;
    }
    current = current->next;
  }
  printf("Total expenses for %d/%d: $%.2f\n", month, year, total);
}

void saveExpensesToCSV(struct Expense *head)
{
  FILE *file = fopen("expenses.csv", "w");
  if (file == NULL)
  {
    printf("Error opening file.\n");
    return;
  }

  // Write header row
  fprintf(file, "Day,Month,Year,Amount,Description\n");

  // Loop through expenses and write to file
  struct Expense *current = head;
  while (current != NULL)
  {
    fprintf(file, "%d,%d,%d,%.2f,%s\n", current->day, current->month, current->year, current->amount, current->description);
    current = current->next;
  }

  fclose(file);
  printf("Expenses saved to expenses.csv\n");
}

int main()
{
  struct Expense *head = NULL;
  struct HashTable table;
  table.size = 100;
  table.table = (struct Expense **)calloc(table.size, sizeof(struct Expense *));

  // Add some sample expenses
  addExpense(&head, &table, 1, 1, 2022, 20.0, "Coffee");
  addExpense(&head, &table, 1, 1, 2022, 50.0, "Dinner");
  addExpense(&head, &table, 2, 1, 2022, 30.0, "Lunch");
  addExpense(&head, &table, 3, 1, 2022, 10.0, "Snacks");
  addExpense(&head, &table, 5, 1, 2022, 15.0, "Bus fare");

  int option;
  do
  {
    printf("\n1. Add new expense\n");
    printf("2. View expenses for a specific date or date range\n");
    printf("3. Generate report of total expenses for a specific month\n");
    printf("4. Save expenses to CSV file\n");
    printf("5. Exit\n");
    printf("Enter an option: ");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
      printf("\nEnter expense details:\n");
      int day, month, year;
      float amount;
      char description[50];
      printf("Day (1-31): ");
      scanf("%d", &day);
      printf("Month (1-12): ");
      scanf("%d", &month);
      printf("Year: ");
      scanf("%d", &year);
      printf("Amount: $");
      scanf("%f", &amount);
      printf("Description: ");
      scanf("%s", description);
      addExpense(&head, &table, day, month, year, amount, description);
      printf("Expense added successfully.\n");
      break;
    case 2:
      printf("\nEnter date range:\n");
      int startDay, startMonth, startYear, endDay, endMonth, endYear;
      printf("Start date (DD/MM/YYYY): ");
      scanf("%d/%d/%d", &startDay, &startMonth, &startYear);
      printf("End date (DD/MM/YYYY): ");
      scanf("%d/%d/%d", &endDay, &endMonth, &endYear);
      viewExpenses(&table, startDay, startMonth, startYear, endDay, endMonth, endYear);
      break;
    case 3:
      printf("\nEnter month and year:\n");
      int reportMonth, reportYear;
      printf("Month (1-12): ");
      scanf("%d", &reportMonth);
      printf("Year: ");
      scanf("%d", &reportYear);
      generateReport(head, reportMonth, reportYear);
      break;
    case 4:
      saveExpensesToCSV(head);
      break;
    case 5:
      printf("\nGoodbye!\n");
      break;
    default:
      printf("\nInvalid option. Please try again.\n");
      break;
    }
  } while (option != 5);

  freeHashTable(table);
  freeLinkedList(head);
  return 0;
}
