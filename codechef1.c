#include <stdio.h>
#include <stdlib.h>

int main()
{
int t,n,a,b,c,x,y,z,i;
printf("No. of test cases\n");
scanf("%d",&t);
for(i=0;i<t;i++)
 {
   printf("Enter three inputs\n");
    scanf("%d\t%d\t%d",&a,&b,&c);
     x=a+b;
     y=b+c;
     z=a+c;
      if(x>y && x>z)
 {
   printf("%d",x);
 }
 else if(y>a && y>z)
 {
   printf("%d",y);
 }
  else
 {
   printf("%d",z);
 }
    
 }
}