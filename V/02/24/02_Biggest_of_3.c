#include<stdio.h>
int main(void){
	float c1,c2,c3,max,min;
	printf ("a wild number monster appeared:\n");
	printf("GIVE ME 3 NUMBERS AND I WILL SPARE YOUR LIFE\n");
	scanf("%f",&c1);
	scanf("%f",&c2);
	scanf("%f",&c3);
	if(c1>c2){
		max=c1;
	}
	else{
		max=c2;
	}
	if(c3>max){
		max=c3;
	}
	printf(" %.1f\n",max);
	return 0;
	}
