# include<stdio.h>

    struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee e1;
    printf("Enter value of code:");
    scanf("%d",&e1.code);
    printf("Enter value of salary:");
    scanf("%f",&e1.salary);
    printf("Enter value of name:");
    scanf("%s",e1.name);

    
return 0;
}
