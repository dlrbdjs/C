#include <stdio.h>

int main(){
	
	double km, mile = 0;
	
	printf("Please enter kilometers : ");
	scanf("%lf", &km);
	mile = km / 1.609;
	printf("%.1f km is equal to %.1f miles", km, mile);
	
}
