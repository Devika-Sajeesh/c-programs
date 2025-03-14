// Online C compiler to run C program online
#include <stdio.h>

//recursive
int factrec(int num1){
    if(num1==0 || num1==1){
        return 1;
    }
    else{
        return num1*factrec(num1-1);
    }
}

//non recursive
int factnrec(int num1){
    int fact=1;
    for(int i=num1;i>0;i--){
        fact*=i;
    }
}
int main() {
    int num1;
    
    printf("Enter number");
    scanf("%d",&num1);
    
    printf("factorial of number %d through recursive method is %d\n",num1,factrec(num1));
    
    printf("factorial of number %d through non recursive method is %d",num1,factnrec(num1));

    return 0;
}
