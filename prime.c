#include<stdio.h>
int start(void){
  int a;
  printf("Enter start value:\n");
  scanf("%d",&a);
  return a;
}
int end(void){
  int b;
  printf("Enter end value:\n");
  scanf("%d",&b);
  return b;
}

int main(){
  int i=start();
  int j=end();
  int prime,m;
  int count;
  printf("The prime numbers are as follows:\n");
  for(m=i;m<=j;m++){
    prime=1;
    for(count=2;count<m;count++){
      if(m%count==0){
        prime=0;
        break;
      }
      }
      if(prime){
        printf("%d ",m);
      }
  }

  return 0;
}