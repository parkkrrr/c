#include <stdio.h>

// void fibonacci(int n);

int main()
{

    int n, fib[n];

    scanf("%d", &n);

    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d\n", fib[i]);
    }
    return 0;
}

// void fibonacci(int n){
//     int fib1=0;
//     int fib2=1;

//     int nextTerm=fib1+fib2;
//     printf("%d\t%d", fib1,fib2);

//     for(int i=1;i<n;i++){
//         printf("%d\t", nextTerm);
//         fib1=fib2;
//         fib2=nextTerm;
//     }
// }