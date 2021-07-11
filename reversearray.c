#include<stdio.h>


void reversearray(int i, int n, int arr[])
{
  if(i==n)
  {
    return ;
  }
  else
  {
    reversearray(i+1, n, arr);
    printf("%d ", arr[i]);
  }
}


int main()
{
  int i, n, arr[50];
  printf("Enter number of terms:\n");
  scanf("%d", &n);
  for(i=0; i<n; i++)
  {
      printf("Enter number :\n");
      scanf("%d", &arr[i]);
  }
  reversearray(0, n, arr);

  return 0;
}