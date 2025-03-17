/*************************************************
Program Name: fact.c
Aim			: To print factorial
Author		: Devika Sajeesh
Date Written: 10/02/2025 
**************************************************/

#include <stdio.h>
#include <stddef.h>

void main(){
	//variable declaration
	int num,fact=1;
	
	//value input
	printf("Enter number");
	scanf("%d",&num);
	
	//for loop
	for (int i=num;i>0;i--){
		fact*=i;
		
	}
	printf("factorial = %d\n",fact);
}
