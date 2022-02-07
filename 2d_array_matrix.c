//
//  main.c
//  prac2
//
//  Created by jithin b on 2/7/22.
//

#include <stdio.h>
int main () {
    int arr[4][5], i, j;
    for (i=0; i<4; i++)
    {
        for (j=0; j<5; j++)
        {
            printf("Enter array[%d][%d]: ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("2d array elements in matrix form \n");
    for(i=0; i<4; i++)
    {
        printf("\n");
        for (j=0; j<5; j++)
        {
            printf("%d\t", arr[i][j]);
        }
    }
}
