//
// Created by lilei on 3/4/2021.
//

#include <stdio.h>

struct man {
    int s;
    int p;
    int f;
    /*
     * sGesture分别代表c ,j,b 手势获胜的次数
     * */
    int B;
    int C;
    int J;
};

char sort1(int a, int b,int c){
    int max;
    char flag;
    if(a>=b){
        max = a;
        flag ='B';
    }
    else{
        max =b;
        flag = 'C';
    }
    if(max<c){
        max = c;
        flag='J';
    }

    return flag;
}
int main() {
    int N;
    scanf("%d", &N);
    struct man jia = {0, 0, 0, {0, 0, 0}};
    struct man yi = {0, 0, 0, {0, 0, 0}};
    char jiaGesture;
    char yiGesture;
    int i;
    char ch;
    for (i = 0; i < N; ++i) {
        ch = getchar();
        scanf("%c %c", &jiaGesture,&yiGesture);
        if (jiaGesture == 'C') {
            switch (yiGesture) {
                case 'C': {
                    jia.p++;
                    yi.p++;
                    break;
                }
                case 'J': {
                    jia.s++;
                    yi.f++;
                    jia.C++;
                    break;
                }
                case 'B': {
                    jia.f++;
                    yi.s++;
                    yi.B++;
                    break;
                }
                default: {
                    break;
                }
            }
        } else if (jiaGesture == 'J') {
            switch (yiGesture) {
                case 'C': {
                    jia.f++;
                    yi.s++;
                    yi.C++;
                    break;
                }
                case 'J': {
                    jia.p++;
                    yi.p++;
                    break;
                }
                case 'B': {
                    jia.s++;
                    yi.f++;
                    jia.J++;
                    break;
                }
                default: {
                    break;
                }
            }
        } else if (jiaGesture == 'B') {
            switch (yiGesture) {
                case 'C': {
                    jia.s++;
                    yi.f++;
                    jia.B++;
                    break;
                }
                case 'J': {
                    jia.f++;
                    yi.s++;
                    yi.J++;
                    break;
                }
                case 'B': {
                    jia.p++;
                    yi.p++;
                    break;
                }
                default: {
                    break;
                }
            }
        }
    }

    printf("%d %d %d\n", jia.s, jia.p, jia.f);
    printf("%d %d %d\n", yi.s, yi.p, yi.f);
    printf("%c %c",sort1(jia.B,jia.C,jia.J),sort1(yi.B,yi.C,yi.J));

    return 0;
}