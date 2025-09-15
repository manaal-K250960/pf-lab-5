#include <stdio.h>
#include  <math.h>

int main(){

float r;
float c;
float a;
float sq;
printf("enter radius:");
scanf("%f", &r);
a=M_PI*pow( r, 2);
c=2*M_PI*r;
sq=sqrt(r);
printf("area is %f\n",a);
printf("circumference is %f\n",c);
printf("square root is %f\n",sq);
return 0;
}
