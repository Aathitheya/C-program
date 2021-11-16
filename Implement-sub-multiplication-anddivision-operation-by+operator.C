#include<stdio.h>
int sign(int b){
    int k=0,t;
    t=b<0?1:-1;
    while(b!=0)
    {
      k=k+t;
      b=b+t;
    }
    return k;
}
int sub(int a,int b){
    int n;
    n=a+sign(b);
   return n;
}
int product(int a,int b){
    int c=0;
    if(a<b)
    return(product(b,a));
    if(b<0){
        b=sign(b);
        c++;
    }
    int sum=0;
    for(int i=0;i<b;i++){
        sum=sum+a;
    }
    if(c!=0){
        sum=sign(sum);
    }
    return sum;
}
int division(int a,int b){
    if(b==0){
        printf("Exception divided by 0");
        return 0;
    }
    int c=0;
    int quotient=0,dividend,divisor;
    if(a<0){
        a=sign(a);
        c++;
    }
    if(b>0)
    divisor=sign(b);
    else{
    divisor=b;
    c++;
    }
    for(dividend=a;dividend>=0;dividend+=divisor){
        quotient++;
    }
    quotient--;
    if(c%2!=0){
        quotient=sign(quotient);
    }
    return quotient;
}
int main(){
    printf("%d\n",sub(6,-2));
    printf("%d\n",product(-4,4));
    printf("%d",division(-5,-2));
}