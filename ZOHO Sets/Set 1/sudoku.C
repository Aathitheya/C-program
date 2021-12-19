#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[9][9]={{3,1,6,5,7,8,4,9,2},
                 {5,2,9,1,3,4,7,6,8},
                 {4,8,7,6,2,9,5,3,1},
                 {2,6,3,4,1,5,9,8,7},
                 {9,7,4,8,6,3,1,2,5},
                 {8,5,1,7,9,2,6,4,3},
                 {1,3,8,9,4,7,2,5,6},
                 {6,9,2,3,5,1,8,7,4},
                 {7,4,5,2,8,6,3,1,9}};
    int b[10]={0};
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            b[a[i][j]]++;
        }
         for(int k=1;k<=9;k++)
        {
            if(b[k]!=1)
            {
                printf("sudoku invalild");
                exit(0);
            }
        }
        for(int k=1;k<=9;k++)
            b[k]=0;
    }
    for(int j=0;j<9;j++)
    {
        for(int i=0;i<9;i++)
        {
            b[a[i][j]]++;
        }
        for(int k=1;k<=9;k++)
            {
                if(b[k]!=1)
                {
                    printf("sudoku invalid");
                    exit(0);
                }
            }
        for(int k=1;k<=9;k++)
        b[k]=0;
    }
    for(int m=0;m<9;m=m+3)
    {
        for(int n=0;n<9;n=n+3)
        {
            for(int i=m;i<m+3;i++)
            {
                for(int j=n;j<n+3;j++)
                {
                    b[a[i][j]]++;
                }
            }
            for(int k=1;k<=9;k++)
            {
                if(b[k]!=1)
                {
                    printf("invalid sudoku");
                    exit(0);
                }
            }
            for(int k=1;k<=9;k++)
            b[k]=0;
        }
    }
    return 0;
}