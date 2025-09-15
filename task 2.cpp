#include <stdio.h>

int main() {
int no;
printf("enter a number:");
scanf("%d",&no);
(no % 2 == 0)?printf("even number\n"):
(no % 3 == 0)?printf("divisible by 3\n"):
	printf("odd and not divisible by 3\n");

return 0;
}