/*************************************************
Program Name: maxmin.c
Aim			: To print maximum or minimum
Author		: Devika Sajeesh
Date Written: 10/02/2025 
**************************************************/

#include <stdio.h>
#include <stddef.h>

void main(){
	//variable declaration
	int num1[5];
	int num2,max=num1[0],min=num1[0];
	
	//value input
	for(int i=0;i<5;i++){
		printf("Enter number");
		scanf("%d",&num1[i]);
	}
	
	//max or min
	printf("Enter 1 to print maximum enter 2 to print minimum");
	scanf("%d",&num2);
	
	//max
	if(num2==1){
		
		for(int i=0;i<5;i++){
		 	if (max<num1[i]){
		 		max=num1[i];
		 	}
		}
		printf("%d",max);
		
	}
	//min
	else{
		for(int i=0;i<5;i++){
		 	if (min>num1[i]){
		 		min=num1[i];
		 	}
		}
		printf("%d",min);
		
		
	}
	
}
