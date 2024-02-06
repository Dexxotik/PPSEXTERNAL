#include<stdio.h>
 void naturalnum(int n){
     int i;
     for(i=1;i<=n;i++){
         printf("%d\t",i);
     }
 }
     
void main(){
    int n;
    printf("Enter n value:");
    scanf("%d",&n);
    
    printf("The first %d natural number are:\n",n);
    naturalnum(n);
 
}