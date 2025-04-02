// Implement a function that removes duplicate characters from a string.

#include<stdio.h>
#include<string.h>

void unique(char str[]){
    int len=strlen(str);
    int freq[256]={0};
    for(int i=0;i<len;i++){
        freq[str[i]]++;
    }
    for(int i=0;i<len;i++){
        if(freq[str[i]]>=1){
            printf("%c",str[i]);
            freq[str[i]]=0;
        }
    }
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    unique(str);
    return 0;
}