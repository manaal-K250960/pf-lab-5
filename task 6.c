#include <stdio.h>

int a,b;
void binary(int n) {
if (n>1) {
	binary(n/2);
}
printf("%d",n%2);
}

int main(){
printf("lets see the working of a&b | a^b\n");
printf("first no:\n");
scanf("%d",&a);
printf("second no:\n");
scanf("%d",&b);
printf("the binary of first no:\n");
binary(a);
printf("\nthe binary of second no:\n");
binary(b);
printf("\na&b is %d",a&b);
printf("\nbinary of a&b :\n ");
binary(a&b);
printf("\na^b is %d",a^b);
printf("\nbinary of a^b:\n");
binary(a^b);
printf("\na&b | a^b is %d \n", a&b | a^b);
printf("\nbinary of a&b | a^b :\n");
binary(a&b | a^b);
	return 0;
}