#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char str[100];

    scanf("%d", &n);
    while(n--){
       scanf("%s", str);
       if(strlen(str)>10){
            printf("%c%d%c\n",str[0],strlen(str)-2, str[strlen(str)-1]);
       }
       else{
        printf("%s\n", str);
       }
    }

}
