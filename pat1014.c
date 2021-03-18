//
// Created by lilei on 3/18/2021.
//
#include <stdio.h>

int main(){
    char * weeks[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
    char alphabet[7]={'A','B','C','D','E','F','G'};
    char str1[61];
    char str2[61];
    char str3[61];
    char str4[61];
    int week;
    int HH;
    int MM;
    char firstSameChar=' ';
    char secondSameChar=' ';
    char thirdSameChar=' ';
    int count=0;
    scanf("%s",str1);
    scanf("%s",str2);
    scanf("%s",str3);
    scanf("%s",str4);
    char * p = str1;
    char * q = str2;
    while(*p!='\0'&&*q!='\0'){
        if(*p==*q){
            if(firstSameChar==' ' &&  ((*p-'A'>=0)&& (*p-'A')<=6)){
                firstSameChar = *p;
            }
            else if(firstSameChar !=' ' && secondSameChar==' '){
                if((*p-'0')<=9 || (*p-'A')>=0 && (*p-'A')<=13){
                    secondSameChar = *p;
                    break;
                }
            }
        }
        p++;
        q++;
    }
    int i=0;
    while(i<7){
        if(firstSameChar==alphabet[i]){
            week = i;
            break;
        }
        i++;
    }

    p = str3;
    q = str4;
    while(*p!='\0'&&*q!='\0'){
        count++;
        if(*p==*q && (((*p - 'a'>=0) && (*p-'a'<=25)) || ((*p - 'A'>=0)&& (*p - 'A'<=25)))){
            thirdSameChar = *p;
            break;
        }
        p++;
        q++;
    }

    printf("%s ",weeks[week]);

    if(secondSameChar-'0'<=9){
        printf("0%d:",secondSameChar-'0');
    }
    else{
        printf("%d:",secondSameChar -'A' + 10);
    }

    if((count-1)<=9){
        printf("0%d",count-1);
    }
    else{
        printf("%d",count-1);
    }
    return 0;
}