#include<stdio.h>
#define N 50
 int a[N][N],b[N][N],product[N][N],add[N][N],sub[N][N],ar,ac,br,bc;
 int i,j,k=0;
 int choice;
    int sum=0;
     int multiplication(){
            for(int i=0;i<ar;i++){
                    for(int j=0;j<bc;j++){
                        for(int k=0;k<br;k++){
                            sum += a[i][k] * b[k][j];
                        }
                    product[i][j]=sum;
                    sum=0;
                    }
                }
                    for(int i=0;i<ar;i++){
                    for(int j=0;j<bc;j++){
                    printf("%d ",product[i][j]);
                    }
                    printf("\n");
                    }
                    return product[i][j];
                }
    int addition(){
                    for(int i=0;i<ar;i++){
                    for(int j=0;j<bc;j++){
                        add[i][j] = a[i][j] + b[i][j];
                    }
                    }
                
                    for(int i=0;i<ar;i++){
                    for(int j=0;j<bc;j++){
                    printf("%d ",add[i][j]);
                    }
                    printf("\n");
                    }
                    return add[i][j];
                    }
    
int subtraction(){
                    for(int i=0;i<ar;i++){
                    for(int j=0;j<bc;j++){
                        sub[i][j] = a[i][j] - b[i][j];
                    }
                    }
                
                    for(int i=0;i<ar;i++){
                    for(int j=0;j<bc;j++){
                    printf("%d ",sub[i][j]);
                    }
                    printf("\n");
                    }
                    return sub[i][j];
                    }
int main(){
        printf("Enter number of rows and column elements:\n");
    scanf("%d %d",&ar,&ac);
    for(int i=0;i<ar;i++){
        for(int j=0;j<ar;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter rows and column elements:\n");
    scanf("%d %d",&br,&bc);
    if(ac!=br){
        printf("Matrix multiplication not possible");
        
    }
    else{
    for(int i=0;i<br;i++){
        for(int j=0;j<br;j++){
            scanf("%d",&b[i][j]);
        }
    }
    }

printf("Enter the operation number to be performed in choice:\n");
printf("\n1.Addition\n 2.Subtraction\n 3.Multiplication\n");
printf("Enter choice:\n");
scanf("%d",&choice);
switch(choice){
    case 1:printf("%d",addition());
            break;
    case 2:printf("%d",subtraction());
            break;
    case 3:printf("%d",multiplication());
            break;
}   
return 0;
}
// int main(){
   
   


   
//     printf("Enter number of rows and column elements:\n");
//     scanf("%d %d",&ar,&ac);
//     for(int i=0;i<ar;i++){
//         for(int j=0;j<ar;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }

//     printf("Enter rows and column elements:\n");
//     scanf("%d %d",&br,&bc);
//     if(ac!=br){
//         printf("Matrix multiplication not possible");
//     }
//     else{
//     for(int i=0;i<br;i++){
//         for(int j=0;j<br;j++){
//             scanf("%d",&b[i][j]);
//         }
//     }
    
    
    
    
    
    

//         // int product[N][N];
        
       
       
// // printf("The resultant matrix:\n");
// // for(int i=0;i<ar;i++){
// //     for(int j=0;j<bc;j++){
// //         printf("%d ",product[i][j]);
// //     }
// //     printf("\n");
// //     }




//     return 0;
// }