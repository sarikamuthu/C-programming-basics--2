#include<stdio.h>
int main(){
    int a;
    printf("Enter number:\n");
    scanf("%d",&a);
   
    if(!(a>=0) || (!(a<=0))){
        printf("%d is the next number",++a);
    }
    else{
        printf("Invalid");
    }
    
    return 0;
}