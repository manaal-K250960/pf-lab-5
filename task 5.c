#include <stdio.h>

int main() {
	int marks1,marks2,marks3,max;
	printf("enter marks 1:\n");
	scanf("%d",&marks1);
		printf("enter marks 2:\n");
	scanf("%d",&marks2);
		printf("enter marks 3:\n");
	scanf("%d",&marks3);
  max =(marks1 > marks2) ? ((marks1 > marks3) ? marks1 : marks3)
  : ((marks2 > marks3) ? marks2 : marks3);
  	
	  printf("the greatest marks are %d",max);
  	return 0;
}