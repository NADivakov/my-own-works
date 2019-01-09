#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool f(int n) 
{
int i,RV=0;

for(i=2;i<n;i++){if(n%i!=0){RV+=1;}
if(RV>0){return false;
} else return true;
}
}

int main()
{
int n,k;
for(n=2;n<1001;n++){

if(f(n)==true){printf("%d",k);
}}
printf("%d",f(n));
}
