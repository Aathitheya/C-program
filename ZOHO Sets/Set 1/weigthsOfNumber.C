#include<stdio.h>
#include<math.h>
void swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
void weight(int n[],int temp[],int l)
{
    int j;
    for(j=0;j<l;j++)
    {
        int sum=0;
        int sq=sqrt(n[j]);
        if(n[j]==sq*sq)
        {
            sum=sum+5;
        }
        if(n[j]%4==0 && n[j]%6==0)
        {
            sum=sum+4;
        }
        if(n[j]%2==0)
        {
            sum=sum+3;
        }
        temp[j]=sum;
    }
  for(int i=0;i<l;i++)
   {
        for(int k=i+1;k<l;k++)
    {
            if(temp[i]<temp[k])
            {
                swap(&n[i],&n[k]);
              swap(&temp[i],&temp[k]);
            }
            else if(temp[i]==temp[k] && n[i]<n[k])
            {
                swap(&n[i],&n[k]);
            }
        }
    }
}
int main()
{
    int i,j,l;
    printf("Enter the number of elements:");
    scanf("%d",&l);
    int n[100],temp[100];
    for(i=0;i<l;i++)
    {
        scanf("%d",&n[i]);
    }
    weight(n,temp,l);
    for(int i=0;i<l;i++)
    {
        printf("<%d,%d>\n",n[i],temp[i]);
    }
    return 0;
}