// Online C compiler to run C program online
#include <stdio.h>

//length of a string 
void stringLength(char *string){
    int length = 0;
    while(*string != '\0'){
        length++;
        string++;
    }
    printf("Length of the string is %d",length);
}

//to copy a string
void stringCopy(char *str1,char *str2){
    while (*str1 != '\0') {
        *str2 = *str1;
        str1++;
        str2++;
    }
    *str2 = '\0';
}

//concatenate a string
void stringCat(char *str1,char *str2,char *result){
    while (*str1 != '\0') {
        *result = *str1;
        str1++;
        result++;
    }
    
    while (*str2 != '\0') {
        *result = *str2;
        str2++;
        result++;
    }
    *result = '\0';
}

//compare
void stringCompare(char *str1,char *str2){
    int flag=1;
    while (*str1 != *str2) {
        flag=0;
        break;
    }
    if(flag==1){
        printf("Both strings are same");
    }
    else{
        printf("Strings are unequal");
    }
}

void main() {
    
    int choice;
    char str1[100],str2[100],result[100];
    
    printf("Enter:\n1: to find length\n2: to copy\n3: to concatenate\n4: compare two strings\n");
    scanf("%d",&choice);
    

    switch(choice){
        case 1:
            printf("Enter a string");
            scanf("%s",str1);
            stringLength(str1);
            break;
            
        case 2:
            printf("Enter a string");
            scanf("%s",str1);
            stringCopy(str1,str2);
            printf("str1=%s\nstr2=%s",str1,str2);
            break;
    
        case 3:
            printf("Enter a string");
            scanf("%s",str1);
            
            printf("Enter a string");
            scanf("%s",str2);
            
            stringCat(str1,str2,result);
            printf("concatenated string = %s",result);
            break;
            
        case 4:
            printf("Enter a string");
            scanf("%s",str1);
            
            printf("Enter a string");
            scanf("%s",str2);
            
            stringCompare(str1,str2);
            break;
            
    }
            
    
}