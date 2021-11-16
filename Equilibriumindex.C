#include<stdio.h>
#include<conio.h>
int main(){
    int left=0,right=0;
    int n,sum=0,leftsum=0;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("Enter the Elements");
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    for(int i=0;i<n;i++){
        sum=sum-a[i];
        if(sum==left){
            printf("The Equilibrium number is:%d",a[i]);
            getch();
            return 0;
        }
        left=left+a[i];
    }
    printf("There is no equilibrium number:%d",-1);
    getch();
    return 0;
}