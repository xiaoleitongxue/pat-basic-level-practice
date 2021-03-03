//
// Created by lilei on 3/3/2021.
//

#include <stdio.h>


struct A {
    int num;
    int D;
    int P;
};

int main(void) {

    struct A A1[2];
    A1[0].P = A1[1].P=0;
    int i = 0;
    int remainder;
    char ch;

    while(1){
        scanf("%d",&A1[i].num);
        scanf("%d",&A1[i].D);
        //接收一个空格
        ch = getchar();
        if(ch=='\n'){
            break;
        }
        i++;
    }

    i=0;
    while (i < 2) {

        while (A1[i].num != 0) {
            remainder = A1[i].num % 10;
            A1[i].num = A1[i].num / 10;
            if (A1[i].D==remainder){
                A1[i].P = A1[i].P * 10 + remainder;
            }
        }
        ++i;
    }

    printf("%d",A1[0].P + A1[1].P);
    return 0;
}