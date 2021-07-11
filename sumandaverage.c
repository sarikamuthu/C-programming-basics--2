#include<stdio.h>
void sumavg(int a,int b,int*sum,float*avg){
    *sum=a+b;
    *avg=(float)*sum/2;
}
int main(){
    int i,j,sum;
    float avg;
    i=3;
    j=4;
    sumavg(i,j,&sum,&avg);
    printf("The sum is %d\n",sum);
    printf("The sum is %f\n",avg);

    return 0;

}