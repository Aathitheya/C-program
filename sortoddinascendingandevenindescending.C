#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void sortdescending(int a[],int c,int n){
    for(int i=c;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j])
            swap(&a[i],&a[j]);
        }
    }
}
void sortascending(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j])
            swap(&a[i],&a[j]);
        }
    }
}
void  sortevenodd(int a[],int n)
{  
    int left=0,right=n-1;
    int c=0;
    while(left<right)
    {
      while(a[left]%2!=0)
      {  
          left++;
          c++;
      }
      while(a[right]%2==0 && left<right){
          right--;
      }
      if(left<right){
      swap(&a[left],&a[right]);
      }
    }
  sortascending(a,c);
  sortdescending(a,c,n);
}
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   sortevenodd(a,n);
   printf("sort the array odd numbers in ascending and Even in descending:");
   for(int i=0;i<n;i++){
       printf("%d ",a[i]);
   }
    getch();
    return 0;
}