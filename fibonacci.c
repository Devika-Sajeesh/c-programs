/*************************************************
Program Name: fibonacci.c
Aim			: To print fibonacci series
Author		: Devika Sajeesh
Date Written: 10/02/2025 
**************************************************/

#include <stdio.h>
#include <stddef.h>

int main(){
	//variable declaration
	int num1;
	
	//value input
	printf("Enter final range");
	scanf("%d",&num1);
	
	//variable
	int a=0,b=1,c=0;
	
	//series
	for (int i=0;i<num1;i++){
		printf("%d\n",c);
		a=b;
		b=c;
		c=a+b;
	}
	return 0;
}

	

