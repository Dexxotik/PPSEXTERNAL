#include <stdio.h>
void main(){
    int a[20],i,j,n,small,index;
    printf("enter value of n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter elements for a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("before swap");
      for(i=0;i<n;i++){
        printf("value of a[%d]=%d\n",i,a[i]);
}
  for(i=0;i<n;i++){
        small=a[i];
        index=i;
  for(j=i+1;j<n;j++){
      if(a[j]<small){
          small=a[j];
          index=j;
      }
  }
  int temp;
  temp=a[i];
  a[i]=a[index];
  a[index]=temp;
  }
   printf("after swap");
      for(i=0;i<n;i++){
        printf("value of a[%d]=%d\n",i,a[i]);
}
}