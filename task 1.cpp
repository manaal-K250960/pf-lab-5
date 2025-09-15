#include <stdio.h>

int main() {
	char x;
	char y;
	char z;
	int cons_count=0;
	int vowel_count=0;
    
	printf("enter first character:");
	scanf(" %c",&x);
	
	if(x == 'a'|| x=='e' || x=='i' || x=='o' || x=='u'){
		vowel_count=vowel_count+1;
	}else{
		cons_count=cons_count+1;
		
	}	printf("enter second character:");
	scanf(" %c",&y);
		
	if(y == 'a'|| y=='e' || y=='i' || y=='o' || y=='u' ){
		vowel_count=vowel_count+1;
	}else{
		cons_count=cons_count+1;
		
} printf("enter third character:");
	scanf(" %c",&z);
			
	if(z == 'a'|| z=='e' || z=='i' || z=='o' || z=='u'){
		vowel_count=vowel_count+1;
	}else{
		cons_count=cons_count+1;
} printf("total no of consonants are:%d\n",cons_count);
printf("total no of vowels are:%d\n",vowel_count);

return 0;
}
