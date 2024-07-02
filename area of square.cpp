#include<stdio.h>

int sum(int a){
	
	int result = a*a;
	
	return result;
	
}

int main(){
	
	int a;
	
	printf ("area of square : ");
	
	scanf("%d",&a);
	
	int add = sum(a);
	
	printf("area of square = %d",add);
	
	return 0;
}
