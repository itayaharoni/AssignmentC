#include <stdio.h>
#include "myMath.h"
#define E 2.71828182846

double Exponent(int x){
return Power(E,x);
}
double Power(double x,int y){
if(y==0)
return 1;
double result=1;
if(y>0){
for(int i=0; i<y; i++){
result=result*x;
}
return result;
}
else
{
for(int j=0; j>y;j--){
result=result/x;
}
return result;
}
}
