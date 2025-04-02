// Implement a function that finds the first non-repeating character in a string.

#include<stdio.h>
#include<string.h>

void nonRchar(char str[]){
    int len=strlen(str);
    int start=str[0];
    for(int i=1;i<len;i++){
        if(str[i]!=start){
            printf("%c",str[i]);
            break;
        }
    }
}

int main(){
    char str[100];
    scanf("%s",str);
    nonRchar(str);
    return 0;
}

