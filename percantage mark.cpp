#include<stdio.h>

float sum (int v,int w,int x,int y,int z){
	
	int total = v+w+x+y+z;
	
	float result = total/5;
	
	printf("your mark total is :  %d\n", total);
	
	return result;
	
}

int main(){
	
	int v,w,x,y,z;
	
	printf("Enter a Maths Mark : ");
	scanf("%d",&v);
	
	printf("Enter a Science Mark : ");
	scanf("%d",&w);
	
	printf("Enter a English Mark : ");
	scanf("%d",&x);
	
	printf("Enter a Hindi Mark : ");
	scanf("%d",&y);
	
	printf("Enter a Gujarati Mark : ");
	scanf("%d",&z);
    
    printf("your persentage : %.2f", sum(v,w,x,y,z));
    
    return 0;
}
