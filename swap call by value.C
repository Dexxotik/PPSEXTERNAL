#include <stdio.h>

void swap(int a,int b) {
   int temp;
   temp=a;
   a=b;
   b=temp;
   printf("after swapping in swap function: a=%d and b=%d\n",a,b);
}

void main(){
    int a,b;
    printf("Enter two int values:");
    scanf("%d%d",&a,&b);
    printf("Before swapping in main function : a=%d and b=%d\n",a,b);
    swap(a,b);
    printf("After swapping in main function : a=%d and b=%d\n",a,b);
}