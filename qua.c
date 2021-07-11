#include<stdio.h>
#include<math.h>
int d;
int dist(int a1,int b1,int a2,int b2){
    d=sqrt(pow((a2-a1),2)+pow((b2-b1),2));
}
int take_inputs(){
    int x1,y1,x2,y2,x3,y3,x4,y4,d1,d2,d3,d4;
    printf("Enter the coordinates(with spaces):\n");
    scanf("%d %d",&x1,&y1);
    // printf("\n");
    scanf("%d %d",&x2,&y2);
    // printf("\n");
    scanf("%d %d",&x3,&y3);
    // printf("\n");
    scanf("%d %d",&x4,&y4);
    d1=dist(x1,y1,x2,y2);
    d2=dist(x2,y2,x3,y3);
    d3=dist(x3,y3,x4,y4);
    d4=dist(x4,y4,x1,y1);
    if(d1==d2 && d2==d3 && d3==d4 && d4==d1 ){
        printf("The figure is Rhombus");
    }
    else if(d1==d2 || d2==d3 || d3==d4 || d4==d1){
        printf("The figure is Trapezium");
    }
    else if(d1!=d2 && d2!=d3 && d3!=d4 && d4!=d1){
        printf("The figure is Quadrilateral");
    }
}
int main(){
    // printf("The type of figure is %d\n",take_inputs());
    take_inputs();
    return 0;
}