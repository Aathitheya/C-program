#include<stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    int k=n;
    int l=11;
  while(n!=0){
      n=n/10;
      c++;
  }
  while(c>2){
      l=l*10;
      c--;
  }
  int rem=k%l;
  if(rem==0){
      goto NXT;
  }
  else if(rem==10){
      printf("%d ",rem);
  }
  else if(rem<9){ 
    for(int j=0;j<rem;j++){
        printf("1 ");
    }
  }
  else{
      
      for(int j=0;j<rem;j++){
          printf("11 ");
      }
  }
  NXT:
  {
  int ele;
  ele=k/l;
  for(int i=0;i<ele;i++){
      printf("%d ",l);
  }
  }
  
    return 0;
}