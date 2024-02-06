void decTobin()
{
 int bin=0,place=1,n,r;
 printf("enter n value:");
 scanf("%d",&n);
 while(n>0)
 {
     r=n%2;
     bin=bin+r*place;
     place=place*10;
     n/=2;
 }
 printf("binary equivalent of a number is %d",bin);
}
 
void main(){
    decTobin();
}