//
// Created by lilei on 3/3/2021.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int cmp(const void *_a, const void *_b) {
    char a = *(char *) _a;
    char b = *(char *) _b;
    return a - b;
}
int main(void){
    //标记下标是否被覆盖
    int isCover[101];
    memset(isCover,0,101);
    int n;//用例的个数
    int unused __attribute__((unused));
    unused = scanf("%d",&n);
    //待验证的数
    int needVerify[n];
    int num;
    int i=0;
    //在一行内输入用例并保存到数组中
    while(1){
        unused = scanf("%d",&needVerify[i++]);
        char ch = getchar();
        if(ch=='\n'){
            break;
        }
    }
    //将输入的用例从大到小排列
    qsort(needVerify,n,sizeof(int),cmp);

    for(int i=0;i<n;++i){
        num = needVerify[i];
        //如果该数已覆盖，直接跳过
        if(isCover[num]){
            continue;
        }
        //否则执行3n+1猜想
        else{
            while(num!=1){
                if(num%2==0){
                    num=num/2;
                }
                else{
                    num = (3*num +1)/2;
                }
                if(num<101 && num !=1){
                    isCover[num]=1;
                }
            }
        }
    }



    int count=0;
    for(int i=n-1;i>0;i--){
        if(isCover[needVerify[i]]){
            continue;
        }
        else{
            count++;
        }
    }

    for(int i=n-1;i>0;i--){
        if(isCover[needVerify[i]]){
            continue;
        }
        else{
            if(count>1){
                printf("%d ",needVerify[i]);
                count--;
            }
            else{
                printf("%d",needVerify[i]);
                break;
            }
        }
    }



    return 0;
}
