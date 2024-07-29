#include <stdio.h>
#include<string.h>
int main() {
    char str[40];
    printf("enter string:");
    scanf("%s",&str);
    
    int n=strlen(str);
    int len=n/2;
    int temp;
    for(int i=0;i<len;i++){
        temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
    
    printf("%s",str);
    return 0;
}
