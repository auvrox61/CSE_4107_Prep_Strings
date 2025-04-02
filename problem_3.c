// Write a function to find the longest palindrome substring in a given string

#include<stdio.h>
#include<string.h>

void largestPalindromeSubStr(char str[]){
    int len=strlen(str);
    int start=0;
    int maxPLength=1;
    int dp[len][len];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<len;i++){
        dp[i][i]=1;
    }
    for(int i=0;i<len-1;i++){
        if(str[i]==str[i+1]){
            dp[i][i+1]=1;
            start=i;
            maxPLength=2;
        }
    }
    for(int n=3;n<=len;n++){
        for(int i=0;i<len-n+1;i++){
            int j=i+n-1;
            if(str[i]==str[j]&&dp[i+1][j-1]){
                dp[i][j]=1;
                start=i;
                maxPLength=n;
            }
        }
    }

    for(int i=start;i<start+maxPLength;i++){
        printf("%c",str[i]);
    }
}

int main(){
    char str[100];
    scanf("%s",str);
    largestPalindromeSubStr(str);
    return 0;
}