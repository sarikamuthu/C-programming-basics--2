#include<stdio.h>
#include<math.h>
int main(){
  int a,b,c,discriminant,root1,root2,real,imaginary;
  printf("Enter value of a:\n");
  scanf("%d",&a);
  printf("Enter value of b:\n");
  scanf("%d",&b);
  printf("Enter value of c:\n");
  scanf("%d",&c);
  discriminant=(pow(b,2))-(4*a*c);
  if (discriminant>0){
  root1=((-b)+(sqrt((pow(b,2))-4*a*c)))/2*a;
  root2=((-b)-(sqrt((pow(b,2))-4*a*c)))/2*a;
  printf("The roots are real and the values are %d and %d",root1,root2);
  }
  else if (discriminant==0){
    root1=root2=((-b)/2*a);
    printf("The roots are real and equal and the value is %d",root1);
  }
  else{
    real=((-b)/2*a);
    imaginary=sqrt((-discriminant))/(2*a);
    printf("The roots are imaginary and the values are (%d)+%di and (%d)-%di",real,imaginary,real,imaginary);
  }


  return 0;
}