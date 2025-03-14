// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

//recursive
void add(int *a,int *b,int *result){
    *result = *a+*b;
    printf("Result of two numbers is %d",*result);
  
    
}

int main() {
    int num1,num2,result=0;
    
    printf("Enter number");
    scanf("%d",&num1);
    
    printf("Enter number");
    scanf("%d",&num2);
    
    add(&num1,&num2,&result);
}
