#include<stdio.h>
int main(){
    int a,b,c,gcd,lcm;
    printf("Enter number:\n");
    scanf("%d",&a);
    printf("Enter number:\n");
    scanf("%d",&b);
    //To find minimum of a and b
    if(a>b){
        c=b;
    }
    else{
        c=a;
    }
    for(int i=1;i<=c;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    lcm=(a*b)/gcd;
    printf("The GCD and LCM is %d and %d",gcd,lcm);
    return 0;
}