#include <stdio.h>

int main() {
int sec,no;
char size,type;
float discount,price=0;
printf("enter the section:(burgerhub=1,icecream parlour=2,coffee shop=3)\n");
scanf("%d",&sec);
switch(sec){
	case 1:
		printf("your order will be handled by burger hub\n");
		break;
	case 2:
		printf("your order will be handled by icecream parlour\n");
		break;
	case 3:
		printf("choose coffee size:large(8$)=l,medium(5$)=m,small(3$)=s\n");
		scanf(" %c",&size);
		if(size=='l'){
			price=price+8;
		}else if(size=='m'){
				price=price+5;
		} else{
				price=price+3;
		}
			printf("enter the no of coffee cups you want:\n");
		scanf(" %d",&no);
		if(no>1){
			discount=0.5*(price*no);
			price=(price*no)-discount;
		}
		printf("enter coffe type:latte=l,cappuccino=c,regular=r\n");
		scanf(" %c",&type);
		
		printf("coffee size:%c\n",size);
		printf("coffee amount:%d\n",no);
		printf("coffee type:%c\n",type);
		printf("final bill:%f\n",price);
		break;
		
	}
	return 0;
}
		
		