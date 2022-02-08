#include<stdio.h>
int main() {
    int a, b, i, j;
    printf("Enter number of rows and columns : ");
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(i=0; i<a; i++)
    {
        for(j=0;j<b;j++)
        {
            printf("Enter element [ %d ] [ %d ] : ", i, j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Original array is : \n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");

    }
    printf("Transpose array is : \n");
    for(i=0;i<b;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%d\t",arr[j][i]);
        }
        printf("\n");

    }
}

}   