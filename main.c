#include <stdio.h>
#include "myMath.h"

int main(){
printf("Please insert a real number: ");
double x=0;
scanf("%lf",&x);
double func_temp1=Exponent((int)x);
double func_temp2=Power(x,3);
float func_temp3=add((float)func_temp1,(float)func_temp2);
float func_result=sub(func_temp3,2);
printf("The value of f(x)=e^x+x^3-2 at the point %.4lf is: %.4lf\n",x,func_result);
func_temp1=mul(x,3);
func_temp2=Power(x,2);
double func_temp4=mul(func_temp2,2);
func_result=add((float)func_temp1,(float)func_temp4);
printf("The value of f(x)=3x+2x^2 at the point %.4lf is: %.4lf\n",x,func_result);
func_temp1=Power(x,3);
func_temp2=mul(func_temp1,4);
func_temp4=div(func_temp2,5);
double func_temp5=mul(x,2);
func_result=sub((float)func_temp4,(float)func_temp5);
printf("The value of f(x)=(4x^3)/5-2x at the point %.4lf is: %.4lf\n",x,func_result);
return 0;
}
