/*************************************************
Program Name: prime.c
Aim			: To chc=eck whether the number is prime or not
Author		: Devika Sajeesh
Date Written: 10/02/2025 
**************************************************/

#include <stdio.h>
#include <stddef.h>

void main(){
	//variable declaration
	int num,flag=1;
	
	//value input
	printf("Enter number");
	scanf("%d",&num);
	
	//if statement
	if(num>1){
	
		//for loop
		for (int i=2;i<num;i++){
		
			//if it is divisible by anyother number
			if(num%i==0){
				flag=0;
				break;
			}
			else{
				flag=1;
			}
		}
	}
	//to display prime or not
	if(flag==1){
		printf("It is a prime number\n");
	}
	else{
		printf("It is not a prime number\n");
	}
	
}

	

