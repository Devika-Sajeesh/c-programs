// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

//recursive
void input(int n,int *arr){
    for(int i=0;i<n;i++){
        printf("Enter number");
        scanf("%d",&arr[i]);
    }
}

void print(int n,int *arr){
    printf("The array is\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void sum(int n,int *arr){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("The sum of elements in the array is %d\n",sum);
}

int main() {
    int arr[100];
    int num1;
    
    printf("Enter number of elements");
    scanf("%d",&num1);
    
    input(num1,arr);
    print(num1,arr);
    sum(num1,arr);
    return 0;
}
