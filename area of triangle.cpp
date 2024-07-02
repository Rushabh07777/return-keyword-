#include<stdio.h>

int sum(int b,int h){
	
	int result = 0.5*b*h;
	
	return result;
	
}

int main(){
	
	int b,h;
	
	printf ("Enter a B : ");
	scanf("%d",&b);
	printf ("Enter a H : ");
	scanf("%d",&h);
	
	int add = sum(b,h);
	
	printf("area of triangle = %d",add);
	
	return 0;
}
