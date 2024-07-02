#include<stdio.h>

int sum(int l,int w){
	
	int result = l*w;
	
	return result;
	
}

int main(){
	
	int l,w;
	
	printf ("area of ractengle l valu : ");
	scanf("%d",&l);
	
	printf ("area of ractengle w valu : ");
	scanf("%d",&l);
	
	int add = sum(l,w); 
	printf("area of ractengle = %d",add);
	
	return 0;
}
