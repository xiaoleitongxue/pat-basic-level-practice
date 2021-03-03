//
// Created by lilei on 3/3/2021.
//

#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char str[101];
    int front, middle, end;
    int i;
    int strLength;
    int PCount;
    int TCount;
    int PIndex;
    int TIndex;
    int unused __attribute__((unused));
    unused = scanf("%d",&n);
    for(i=0;i<n;++i){
        unused = scanf("%s",str);
        strLength =(int) strlen(str);
        int j=0;
        front= middle=end=0;
        PCount=TCount=0;
        PIndex =TIndex=-1;
        while(str[j] != '\0'){
            switch(str[j]){
                case 'P':{
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
        if(PCount==1 && TCount==1 && PIndex<TIndex){
            for(j=0;j<PIndex;j++){
                if(str[j]=='A'){
                    front++;
                }
            }
            for(j=PIndex+1;j<TIndex;j++){
                if(str[j]=='A'){
                    middle++;
                }
            }
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