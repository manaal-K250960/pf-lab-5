#include <stdio.h>
 
 int main() {
 
 int attendance;
 char ans;
 printf("what is your attendance percentage in percent?");
 scanf(" %d",&attendance);
 if(attendance<75){
 	printf("not eligible");
 	return 1;
 	}
 else{
 	printf("have you passed your midterm(y/n)?");
 scanf(" %c",&ans);}
 if(ans!='y'){
 	printf("not eligible");
 	return 1;
 }
 else{
 	printf("have you paid the exam fee(y/n)?");
 scanf(" %c",&ans);}
 if(ans=='y'){
 		printf("you are eligible for the final exam");
 }else{
 	printf("please clear your dues to appear in the final exam");
 }
 return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 