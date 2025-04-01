//Write a function to check if two strings are anagrams.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int isAnagram(char str1[],char str2[]){
    int size1=strlen(str1);
    int size2=strlen(str2);
    int freq1[256]={0};
    int freq2[256]={0};
    if(size1!=size2){
        return 0;
    }
    for(int i=0;str1[i]!='\0';i++){
        freq1[str1[i]]++;
    }
    for(int i=0;str2[i]!='\0';i++){
        freq2[str2[i]]++;
    }
    for(int i=0;i<256;i++){
        if(freq1[i]!=freq2[i]){
            return 0;
        } 
    }
    return 1;
}

int main(){
    char str1[100];
    char str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    if(isAnagram(str1,str2)){
        printf("YES\n");
    } else{
        printf("NO\n");
    }
    return 0;
}