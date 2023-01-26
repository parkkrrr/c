#include <stdio.h>

int main()
{
    float da, basicSal, deduction, hra, netSalary;
   
    printf("Enter basic salary: ");
    scanf("%f", &basicSal);
    printf("Enter deductions: ");
    scanf("%f", &deduction);
    
    da = basicSal * 0.75;
    hra = basicSal * 0.15;
    netSalary = (basicSal + da + hra) - deduction;
    
    printf("Net salary is: %.2f", netSalary);
    return 0;
}