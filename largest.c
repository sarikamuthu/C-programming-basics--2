# include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter value of a:\n");
    scanf("%d",&a);
    printf("Enter value of b:\n");
    scanf("%d",&b);
    printf("Enter value of c:\n");
    scanf("%d",&c);
    printf("Enter value of d:\n");
    scanf("%d",&d);
    
    if ((a>b) && (a>c) && (a>d)){
        if((b>c) && (b>d)){
            printf("%d is second largest number",b);
        }
        else if((c>b) && (c>d)){
            printf("%d is second largest number",c);
        }
        else{
            printf("%d is second largest number",c);
        }
    }
    
    else if((b>a) && (b>c) && (b>d)){
        if((a>c) && (a>d)){
            printf("%d is second largest number",a);
        }
        else if((c>a) && (c>d)){
            printf("%d is second largest number",c);
        }
        else{
            printf("%d is second largest number",d);
        }
    }
    else if((c>a) && (c>b) && (c>d)){
        if((a>b) && (a>d)){
            printf("%d is second largest number",a);
        }
        else if((b>a) && (b>d)){
            printf("%d is second largest number",b);
        }
        else{
            printf("%d is second largest number",d);
        }
    }
    else if((d>a) && (d>b) && (d>c)){
        if((a>b) && (a>c)){
            printf("%d is second largest number",a);
        }
        else if((b>c) && (b>d)){
            printf("%d is second largest number",b);
        }
        else{
            printf("%d is second largest number",c);
        }
    }
    
    return 0;
}