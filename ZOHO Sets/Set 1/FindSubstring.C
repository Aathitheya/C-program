#include<stdio.h>
int main()
{
    int l,i,j,k=0,count,flag=1,d=1;
    char a[100],b[10][10],c[100];
    printf("Enetr the string");
    scanf("%s",a);
    printf("Enter the substring");
    scanf("%s",c);
    for(l=0;a[l];l++);
    while(d*d<l)
    {
        d++;
    }
    for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++)
        {
            if(k<l)
            {
                b[i][j]=a[k++];
            }
            else
            { 
                b[i][j]=' ';
            }
        }
    }
   for(i=0;i<d;i++)
   {
       k=0;
       for(j=0;j<d;j++)
       {
           if(b[i][j]==c[k])
           {
               flag=0,count=0;
               while (c[++k])
               {
                   count++;
                   if(b[i][++j]!=c[k])
                   {
                       flag=1;
                       break;
                   }
               }
               if(flag==0)
               {
                   printf("(%d,%d) (%d,%d)\n",i,j-count,i,j);
               }
           }
       }
   }
    for(j=0;j<d;j++)
   {
       k=0;
       for(i=0;i<d;i++)
       {
           if(b[j][i]==c[k])
           {
               flag=0,count=0;
               while (c[++k])
               {
                   count++;
                   if(b[++j][i]!=c[k])
                   {
                       flag=1;
                       break;
                   }
               }
               if(flag==0)
               {
                   printf("(%d,%d) (%d,%d)\n",j-count,i,j,i);
               }
           }
       }
   }
    return 0;
}