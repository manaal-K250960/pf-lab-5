#include <stdio.h>

int main() {
	int pin=1234;
	int entered_pin,amount;
	int balance=5000;
	int remaining;
	
	printf("enter pincode:");
	scanf("%d",&entered_pin);
	
	if(entered_pin==pin){
		printf("enter withdrawal amount:");
		scanf("%d",&amount);
		if(amount<=balance){
			printf("transaction sucessful!\n");
			remaining=balance-amount;
			printf("the initial amount was %d\n",balance);
			printf("the amount withdrawn is %d\n",amount);
			printf("the remaining balance  is %d\n",remaining);
		}else {
			printf("insufficient balance");
		}} else {
				printf("incorrect pin");
		}
		
	
		return 0;
	
}








