/*************************************************
Program Name: matrixadd.c
Aim			: To add two matrices
Author		: Devika Sajeesh
Date Written: 24/02/2025 
**************************************************/

#include <stdio.h>
//#include <stddef.h>

void main(){
	//variable declaration
	int order,row,column;
	int mat1[10][10],mat2[10][10],mat3[10][10];
	
	printf("Enter rows of matrix");
	scanf("%d",&row);
	
	printf("Enter columns of matrix");
	scanf("%d",&column);
	
	//value input matrix 1
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			printf("Enter number for matrix 1 ");
			scanf("%d",&mat1[i][j]);
		}	
	}
	
	//value input matrix 2
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			printf("Enter numbers for matrix 2 ");
			scanf("%d",&mat2[i][j]);
		}
		
	}
	
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
		
	}
	
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			printf("%d\n",mat3[i][j]);
		}
		
	}
	
	
}
