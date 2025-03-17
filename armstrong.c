/*************************************************
Program Name: armstrong.c
Aim			: To check whether the number is armstrong or not
Author		: Devika Sajeesh
Date Written: 10/02/2025 
**************************************************/

#include <stdio.h>
#include <stddef.h>
#include <math.h>

int main(){
	//variable declaration
	int num1,j;
	
	//value input
	printf("Enter number");
	scanf("%d",&num1);
	
	//temporary variable
	int temp=num1,a=0;
	
	//to extract number of digits
	while(temp>0){
		temp/=10;
		a++;
	}
	
	j=num1;
	int sum=0;
	while(j>0){
		sum+=pow((j%10),a);
		j=(j*1.0)/10;
	}
	
	//to display armstrong or not
	if(num1==sum){
		printf("%d is an armstrong number\n",num1);
	}
	else{
		printf("%d is not an armstrong number\n",num1);
	}
	return 0;
}

	

