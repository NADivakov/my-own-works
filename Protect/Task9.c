#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int f(int x)
{int n1,n2,n3,n4,result;
if((x>999)&&(x<10000)){n1=(x-x%1000)/1000;n2=(x-n1*1000-x%100)/100;n3=(x-n1*1000-n2*100-x%10)/10;n4=x-n1*1000-n2*100-n3*10;result=n4*1000+n3*100+n2*10+n1;} 
if((x<1000)&&(x>99)){n2=(x-x%100)/100;n3=(x-n2*100-x%10)/10;n4=x-n2*100-n3*10;result=n4*100+n3*10+n2;}
if((x<100)&&(x>9)){n3=(x-x%10)/10;n4=x-n3*10;result=n4*10+n3;}
return result;
}
int main()
{int x=4032;
printf("%d",f(x));
}
