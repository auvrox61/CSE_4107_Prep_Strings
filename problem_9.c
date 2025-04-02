// Write a function that splits a string into words and counts the frequency of each word

#include<stdio.h>
#include<string.h>

void freqChar(char str[]){
    int len=strlen(str);
    int freq[256]={0};
    for(int i=0;i<len;i++){
        freq[str[i]]++;
    }
    for(int i=0;i<len;i++){
        printf("%c : %d",str[i],freq[str[i]]);
    }
}

int main(){
    char str[100];
    scanf("%s",str);
    freqChar(str);
    return 0;
}