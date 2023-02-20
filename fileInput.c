#include <stdio.h>

typedef struct StudentInfo
{
    char name[100];
    int rollNo;
} studInfo;

int main()
{
    studInfo stud1;
    puts("Enter Name : ");
    scanf("%s",&stud1.name);
    
    puts("Enter Roll No. : ");
    scanf("%d",&stud1.rollNo);

    FILE *file;
    file=fopen("fileInput.txt", "a");
    
    if(file==NULL){
        puts("Saving data into New file.");
        file=fopen("fileInput.txt", "w");
    }
    else{
        fprintf(file, "%s", stud1.name);
        fprintf(file, "\t"); 
        fprintf(file, "%d\n", stud1.rollNo);
        fclose(file);
    }


    return 0;
}