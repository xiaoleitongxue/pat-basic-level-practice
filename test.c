//
// Created by lilei on 3/13/2021.
//

#include <stdio.h>
int main(){
    char ch;
    while(1){
        ch = getchar();
        if(ch=='\n'){
            break;
        }
        printf("%c",ch);
    }
    return 0;
}