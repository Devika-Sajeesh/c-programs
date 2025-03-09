// Online C compiler to run C program online
#include <stdio.h>

//palindrome
void palindrome(char *string){
    int length = 0,flag=1;
    while(string[length] != '\0'){
        length++;
    }
    
    for(int i=0;i<length/2;i++){
        if (string[i] != string[length - i - 1]) {
            flag=0;
            break;
        }
        else{
            flag=1;
        }
    }
   if(flag==1){
             printf("Palindrome\n");
        }
        else{
            printf("Not a palindrome\n");
        }
    
    
}


void main() {
    
    char str1[100],str2[100],result[100];
    
    printf("Enter the string");
    scanf("%s",str1);
    
    palindrome(str1);

            
    
}