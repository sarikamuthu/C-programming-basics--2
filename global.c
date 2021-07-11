#include <stdio.h>
int fun();
int a=20;
int main(){
    int a=45;
    printf("%d\n ",a);
    fun();



    return 0;
}

int fun(){
    printf("%d\n",a);

}