// Online C compiler to run C program online
#include <stdio.h>

//reverse
void count(char *str1){
    int vowels = 0,consonants = 0,spcl = 0;
    while(*str1 != '\0'){
        if(*str1 == 'a' || *str1 == 'e' || *str1 == 'i' || *str1 == 'o' || *str1 == 'u' ||
            *str1 == 'A' || *str1 == 'E' || *str1 == 'I' || *str1 == 'O' || *str1 == 'U'){
            vowels++;
        }
        else if((*str1 >= 'a' && *str1 <= 'z') || (*str1 >= 'A' && *str1 <= 'Z')){
            consonants++;
        }
        else{
            spcl++;
        }
        str1++;
        
    }
    
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Special characters: %d\n", spcl);
 
}


void main() {
    
    char str1[100],str2[100],result[100];
    
    printf("Enter the string");
    scanf("%[^\n]s",str1);
    
    count(str1);
}