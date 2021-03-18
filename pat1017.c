
#include <stdio.h>
#include <string.h>
//A=B×Q+R
//A为被除数，B为除数，Q为商，R为余数
int main(void) {
    char A[1002];
    int Q[1002];
    memset(Q, 0, 1002);
    int B, R=0;
    scanf("%s %d", A, &B);
    int CQ;
    //当前被除数
    int currentDivisor;
    int i = 0;

    if(strlen(A)==1){
        printf("%d",0);
        printf(" %d",A[0]-'0');
        return 0;
    }
    //从被除数的第一位开始
    while (A[i] != '\0') {
        currentDivisor = R * 10 + (A[i]-'0');
        R = currentDivisor % B;
        CQ = currentDivisor / B;
        Q[i]=CQ;

        ++i;
    }


    int j;
    if(Q[0]==0){
        j=1;
    }
    else{
        j=0;
    }
    for(j;j<i;j++){
        printf("%d",Q[j]);
    }

    printf(" %d",R);
    return 0;
}