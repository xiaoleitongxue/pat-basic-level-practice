//
// Created by lilei on 3/3/2021.
//

#include <stdio.h>
#include <string.h>
int reverse(int start, int end, char *nums){
    char temp;
    while(start<end){
        temp = nums[start];
        nums[start] = nums[end];
        nums[end]=temp;
        start++;
        end--;
    }
    return 0;
}
int main(void){
    char str[81];
    int unused __attribute__((unused));
    unused = scanf("%[^\n]",str);
    int strLength = strlen(str);
    int start = 0;
    int end;
    int i=0;
    reverse(0,strLength-1,str);
    while(i<strLength){
        //当跳出这个循环时，i指向单词结尾后的空格
        while(1){
            if(str[i]==' ' || str[i]=='\0'){
                break;
            }
            i++;
        }
        if(str[i]==' '){
            end = i-1;
            reverse(start,end,str);
            start = i+1;
            i++;
        }else{
            end = strLength-1;
            reverse(start,end,str);
            break;
        }

    }

    i=0;

    while(i<strLength){
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
    return 0;
}