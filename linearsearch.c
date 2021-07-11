#include<stdio.h>
int main(){
    int arr[5];
    for( int i=0;i<5;i++){
        printf("Enter number:\n");
        scanf("%d",&arr[i]);
    }
    int m,found=0;
    printf("Enter number to be searched:\n");
    scanf("%d",&m);
    for(int i=0;i<6;i++){
        if(m==arr[i]){
            printf("Found at pos %d",i);
            found=1;
            break;
        }
    }
    if(!found){
            printf("Not found");
        }

    return 0;
}