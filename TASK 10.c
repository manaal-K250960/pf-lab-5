#include <stdio.h>

int main() {
char signal;
char color;
int time;

printf("enter color of the signal(R,Y,G):");
scanf(" %c", &color);

printf("enter time of the day(ex:0000): ");
scanf(" %d", &time);
 
 if(color =='R' && time < 2200){
	printf("stop and wait.");
	}
	else if(color =='R' && time >= 2200){
	printf("stop but night caution allowed.");
		}
		else if(color =='Y'){
			printf("get ready.");
		}
		else if(color =='G'){
			printf("go.");
	}else{
			printf("invalid signal.");
	}
		
	
		return 0;
	
}
