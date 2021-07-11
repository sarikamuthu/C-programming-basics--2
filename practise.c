#include <stdio.h>
#include<math.h>
// int d;
// int dist(int a1,int b1,int a2,int b2){
//     d=sqrt(pow((a2-a1),2)-pow((b2-b1),2));
//     return d;

int main(){
    // int x1,y1,x2,y2,x3,y3,d1,d2,d3;
    // scanf("%d %d",&x1,&y1);
    // scanf("%d %d",&x2,&y2);
    // scanf("%d %d",&x3,&y3);
    // d1=dist(x1,y1,x2,y2);
    // d2=dist(x2,y2,x3,y3);
    // d3=dist(x3,y3,x1,y1);
    // printf("%d",d1);
    int a1=9,a2=4,b1=-2,b2=6,d;
    d=sqrt(pow((a2-a1),2)+pow((b2-b1),2));
    printf("%d",d);
 return 0;   
}
