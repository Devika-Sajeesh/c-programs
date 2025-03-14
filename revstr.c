// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

//recursive
void revstr(char *str1,int length){
    char temp;
    
    for(int i=0;i<length/2;i++){
        temp=str1[i];
        str1[i]=str1[length-i-1];
        str1[length-i-1]=temp;
  
    }
}

int main() {
    char str1[100];
    
    printf("Enter number");
    scanf("%s",str1);
    
    int length = strlen(str1);
    
    revstr(str1,length);
    
    printf(str1);
     return 0;
}
