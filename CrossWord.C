#include<stdio.h>
void crossword(char a[],int l)
{
    int i,j;
    if(l%2==0)
    {
        printf("Enter the Odd string");
    }
    else{
        for(i=0;i<l;i++)
        {
            for(j=0;j<l;j++)
            {
                if(i==j||i+j==l-1)
                {
                    printf("%c",a[j]);
                }
                else
                printf(" ");
            }
            printf("\n");
        }
    }
}
int main()
{
    int l;
    printf("Enter the string with odd letter");
    char a[100];
    scanf("%s",a);
    for(l=0;a[l];l++);
    crossword(a,l);
    return 0;
}