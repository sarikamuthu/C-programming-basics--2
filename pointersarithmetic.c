# include<stdio.h>
int main(){
    // int a=33;
    // int*b=&a;
    // int c=36;
    // int*d=&c;
    // int m;
    // printf("The value of b is %u\n",b);
    // printf("The value of d is %u\n",d);
    // m=d-b;
    // printf("The value of m is %u\n",m);
    // printf("The value of b is %u\n",b);
    // printf("The value of d is %u\n",d);

    // char a="s";
    // char*b=&a;
    // printf("The value of b is %u\n",b);
    // // b++;
    // b+=1;
    // printf("The value of b is %u\n",b);
    
    int marks[4];
    int *ptr;
    ptr = &marks[0];
   
    for(int i =0; i<4; i++){
        printf("Enter the value of marks for student %d: \n", i+1);
        scanf("%d", ptr);
        ptr ++;
    }

    for(int i =0; i<4; i++){
        printf("The value of marks for student %d is %d \n",i+1, marks[i]);  
    }
    return 0;
}


    