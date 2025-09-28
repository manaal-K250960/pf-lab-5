#include <stdio.h>

int main() {
	int x=3,y=4,z=5;
	printf("x=%d\n y=%d\n z=%d\n",x,y,z);
	int one = y*z;
	printf("1. y*z=%d\n",one);
	int two = x+one;
	printf("2. x+y*z=%d\n",two);
	int three = (two>10);
	printf("3. x+y*z>10=%d\n",three);
    int	four = x-z;
	printf("4. x-z=%d\n",four);
	int five = four<y;
	printf("5. x-z<y=%d\n",five);
	int six = three && five;
	printf("6. x+y*z>10 && x-y<y=%d\n",six);
	int seven = y%z;
	printf("7. y%%z=%d\n",seven);
	int eight= !seven;
	printf("8. ! y%%z=%d\n",eight);
	int nine= six || eight;
	printf("9. x+y*z>10 && x-z<y || (!y%%z)=%d",nine);
	return 0;
}
	
	
	
	

	
	
	
