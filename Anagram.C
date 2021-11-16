#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
bool compare(int counta[],int countpat[])
{
    for(int i=0;i<256;i++)
    {
        if(counta[i]!=countpat[i])
        return false;
    }
    return true;
}
void anagram(char a[],char pat[])
{
int c=0,n,m;
    for(n=0;a[n]!='\0';n++);
    for(m=0;pat[m]!='\0';m++);
    int  counta[256]={0};
    int countpat[256]={0};
    for(int i=0;i<m;i++)
    {
        (counta[a[i]])++;
        (countpat[pat[i]])++;
    }
    for(int i=m;i<n;i++)
    {
        if(compare(counta,countpat))
        {
            printf("Index found:%d\n",i-m);
            c++;
        }
        (counta[a[i]])++;
        (counta[a[i-m]])--;
    }
    if(compare(counta,countpat))
    {
        printf("Index found:%d\n",n-m);
        c++;
    }
    if(c==0)
    {
        printf("There is no Anagram exist");
    }
}
int main(){
    char a[100];
    char pat[100];
    printf("Enter the string:");
    scanf("%s",a);
    printf("Enter the pattern:");
    scanf("%s",pat);
    anagram(a,pat);
    getch();
    return 0;
}