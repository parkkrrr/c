#include <stdio.h>

// int tables(int arr[][10], int n, int m,int number){
//     for(int i=0; i<m; i++){
//         arr[n][i]=number * (i+1);
//     }
// }
int main()
{

    int table[2][10];
    // tables(table, 0, 10, 2);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            table[0][j] = 2 * (j + 1);
            table[1][j] = 3 * (j + 1);
            if (i == 0)
                printf("%d \t", table[i][j]);
            printf("\n");
            if (i == 1)
                printf("%d \t", table[i][j]);
        }
    }
    return 0;
}
