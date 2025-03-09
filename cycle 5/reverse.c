// Online C compiler to run C program online
#include <stdio.h>

//reverse
void reverse(char *str1){
    int length = 0;
    while(str1[length] != '\0'){
        length++;
    }
    
    for(int i=0;i<length/2;i++){
        char temp=str1[i];
        str1[i]=str1[length-i-1];
        str1[length-i-1]=temp;
    }
    printf("reversed string = %s",str1);
}


void main() {
    
    char str1[100],str2[100],result[100];
    
    printf("Enter the string");
    scanf("%s",str1);
    
    reverse(str1);
}