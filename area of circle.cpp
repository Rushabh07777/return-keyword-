#include<stdio.h>

int sum(int r){
	
	float result = 0.314*r*r;
	
	return result;
	
}

int main(){
	
	int r;
	
	printf ("Enter a area of circle : ");
	
	scanf("%d",&r);
	
	float add = sum(r);
	
	printf("area of circle = %.2f",add);
	
	return 0;
}
