/*************************************************
Program Name: halfpyramid.c
Aim			: To print half pyramis
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
	for (int i=1;i<=num;i++){
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
		
	}
	for (int i=1;i<=num;i++){
		for(int j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
		
	}
}
