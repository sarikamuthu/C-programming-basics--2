#include<stdio.h>
int factorial(int a);
int main(){
    int n;
    printf("Enter value:");
    scanf("%d",&n);
    
    printf("The factorial of %d is %d",n,factorial(n));

}
int factorial(int a){
    int f;
    if (a==0 || a==1){
    return 1;
    }
    else{
       f= a*factorial(a-1);
       return f;
    }
    return 0;

}