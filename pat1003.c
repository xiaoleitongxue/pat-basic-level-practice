//
// Created by lilei on 3/3/2021.
//

#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char str[101];
    int front, middle, end;//分别表示前中后三个位置处A的个数
    int i;
    int strLength;//字符串长度
    int PCount;//P的个数
    int TCount;//T的个数
    int PIndex;//P的索引
    int TIndex;//T的索引
    //输入测试用例的个数
    int unused __attribute__((unused));
    unused = scanf("%d",&n);

    for(i=0;i<n;++i){
        //输入一个用例礼服穿
        unused = scanf("%s",str);
        strLength =(int) strlen(str);
        int j=0;
        front= middle=end=0;
        PCount=TCount=0;
        PIndex =TIndex=-1;
        while(str[j] != '\0'){
            switch(str[j]){
                case 'P':{
                    //记录P的个数和P的索引
                    PCount++;
                    PIndex=j;
                    break;
                }
                case 'T':{
                    TCount++;
                    TIndex=j;
                    break;
                }
                case ' ':{
                    break;
                }
                case 'A':{
                    break;
                }
                default:{
                    printf("NO\n");
                    goto next;
                }
            }
            j++;
        }
        //是否字母P和字母T只出现一次，且P在T之前
        if(PCount==1 && TCount==1 && PIndex<TIndex){
            //统计P之前A的个数
            for(j=0;j<PIndex;j++){
                if(str[j]=='A'){
                    front++;
                }
            }
            //统计P和T之间A的个数
            for(j=PIndex+1;j<TIndex;j++){
                if(str[j]=='A'){
                    middle++;
                }
            }
            //统计T之后A的个数
            for(j=TIndex;j<strLength;j++){
                if(str[j]=='A'){
                    end++;
                }
            }
            if(front * middle == end && middle>0){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
        else{
            printf("NO\n");
        }
        next:;
    }
    return 0;
}