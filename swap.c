// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

//recursive
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main() {
    int num1,num2;
    
    printf("Enter number");
    scanf("%d",&num1);
    
    printf("Enter number");
    scanf("%d",&num2);
    
    printf("first number is %d and second number is %d\n",num1,num2);
    swap(&num1,&num2);
    printf("first number is %d and second number is %d\n",num1,num2);

}
