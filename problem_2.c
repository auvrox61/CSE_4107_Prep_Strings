//reverse a string using recursion

#include<stdio.h>
#include<string.h>

void revString(char str[],int start,int end){
    if(start>=end){
        return;
    } else{
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
    }
    revString(str,start+1,end-1);
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    int length=strlen(str);
    revString(str,0,length-1);
    printf("%s",str);
    return 0;
}