//
// Created by lilei on 3/3/2021.
//
#include <stdio.h>
#include <string.h>
int main(void){
    int i=0;
    int nums[1001];
    char ch;
    int j;
    int dishu;
    int zhishu;
    int result[1001];
    int unused __attribute__((unused));
    while(1){
        unused = scanf("%d",&nums[i++]);
        ch = getchar();
        if(ch=='\n'){
            break;
        }
    }

    int numsLength = i;
    i=0;
    j=0;
    while(i<numsLength-1){
        dishu = nums[i];
        zhishu = nums[++i];
        if(dishu==0){
            if(zhishu==0){
                dishu =0;
                zhishu = 0;
                result[j]=dishu;
                result[++j]=zhishu;
                ++j;
            }else{
                dishu =0;
                zhishu = zhishu -1;
                result[j]=dishu;
                result[++j]=zhishu;
                ++j;
            }
        }
        else{
            if(zhishu==0){

            }
            else{
                dishu = dishu * zhishu;
                zhishu = zhishu-1;
                result[j]=dishu;
                result[++j]=zhishu;
                ++j;
            }
        }
        ++i;
    }



    for(i=0;i<j-1;++i){
        printf("%d ",result[i]);
    }
    printf("%d",result[j-1]);
    printf("\n");

    return 0;
}
