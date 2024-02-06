#include <stdio.h>

void swap(int *x,int *y) {
   int temp;
   temp=*x;
   *x=*y;
   *y=temp;
   printf("after swapping in swap function: a=%d and b=%d\n",*x,*y);
}

void main(){
    int a,b;
    printf("Enter two int values:");
    scanf("%d%d",&a,&b);
    printf("Before swapping in main function : a=%d and b=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping in main function : a=%d and b=%d\n",a,b);
}
