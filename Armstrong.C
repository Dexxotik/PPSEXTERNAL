#include<stdio.h>
#include<math.h>
void main(){
    int num,originalnum,result=0,n=0,remainder;
    printf("Enter any number: ");
    scanf("%d",&num);
    originalnum=num;
    while(originalnum!=0){
        originalnum/=10;
        ++n;
    }
   // printf("%d\n",num);
    //printf("%d",n);
    originalnum=num;
    while(originalnum!=0){
        remainder= originalnum%10;
        result +=pow(remainder,n);
        originalnum /=10;
    }
    printf("%d\n",result);
    printf("%d\n",num);
    printf("%d\n",originalnum);
    if (result==num){
        printf("The number is an Armstrong number");
    }
    else{
        printf("It is not an Armstrong number");
    }
}
    