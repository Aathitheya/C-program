#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("Enter the three nos:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c){
        printf("The largest no:%d",a);
    }
    else if(b>=a && b>=c){
        printf("The largset no:%d",b);
    }
    else 
    printf("The largsest no:%d",c);
    getch();
    return 0;
}