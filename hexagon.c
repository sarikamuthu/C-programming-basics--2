#include<stdio.h>
#include<math.h>

//area of hexagon=(3*root(3)*(a**2)/2)
#define C 2.598
// float area;
// // float area_hexagon(int a){
//         area=C*pow(a,2);
//         return area;
// }
// int main(){
//     printf("Enter the length of side of hexagon(in cm):\n");
//     scanf("%d",&a);
//     printf("The area of hexagon is:%.2f\n",area_hexagon(a));
//     return 0;
// }
int d,area;
int area_of_hexagon(int x1,int x2,int y1,int y2){
    int d,area;
    d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    area=C*pow(d,2);
    return area;
    
}
int main(){
    int x1, x2, y1, y2;
    scanf("%d %d %d %d",x1,y1,x2,y2);
    
    printf("The area of hexagon is:%d\n",area_of_hexagon(x1,y1,x2,y2));
    return 0;
}