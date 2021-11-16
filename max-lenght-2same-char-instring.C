#include<stdio.h>
int maxcharacter(char *a,int n){
    int res=-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                res=res>(j-i-1)?res:j-i-1;
            }
        }
    }
    return res;
}
int main(){
    char a[100];
    printf("Enter the string:");
    scanf("%s",a);
    int n;
    for(n=0;a[n]!='\0';n++);
    int c=maxcharacter(a,n);
    printf("%d",c);
    return 0;
}