#include<stdio.h>
int main(){
    for(int i=1;i<7;i++){
        for(int j=1;j<((i*2)-2);j++){
            printf("%d",j);
        }
         printf("\n");
    }
   

    return 0;
}