#include<stdio.h>
#include<string.h>
struct Name
{
    char child[20];
    char father[20];
}r[10];
int grandchildren(char a[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(strcmp(a,r[i].father)==0)
        count++;
    }
    return count;
}
int main()
{
    int n;
    char name[20];
    printf("Enter the number of Persons:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",r[i].child);
        scanf("%s",r[i].father);
    }
    printf("Enter the person name:");
    scanf("%s",name);
    for(int i=0;i<n;i++)
    {
        if(strcmp(name,r[i].father)==0)
        {
            printf("%d",grandchildren(r[i].child,n));
        }
    }

    return 0;
}