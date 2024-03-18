#include <stdio.h>
int main(void){
    int i=0;
    int j=0;
    int counter=0;
    int letters;
    const char* str1 = "hello";
    const char* str2 = "hello";
    for(int k=0; str1[k]!='\0'; k++){
        letters++;
    }
    while(str1[i]!='\0'&&str2[j]!='\0'){
        if(str1[i]==str2[j]){
            counter++;
            i++;
        }
        j++;
    }
    if(counter==letters){
        printf("1"); //prints 1 if the character string IS a subsequence of another string
    }
    else{
        printf("0"); //prints 0 if the character string IS a subsequence of another string
    }
}
