#include <stdio.h>

typedef struct vector{
    int x;
    int y;
} vector;

void vectorSum(vector v1, vector v2, vector sum);

int main() {
    vector v1 = {5, 10};
    vector v2 = {3, 7};
    vector sum={0};
    vectorSum(v1, v2, sum);
    return 0;
}

void vectorSum(vector v1, vector v2, vector sum){
    sum.x= v1.x + v2.x;
    sum.y=v2.y + v2.y;

    printf("sum of x is : %d\n", sum.x);
    printf("sum of y is : %d\n", sum.y);
}
