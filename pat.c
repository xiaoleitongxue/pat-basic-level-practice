//
// Created by lilei on 3/2/2021.
//

#include "pat.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pat1001(){
    int num;
    int count=0;
    scanf("%d",&num);
    while(num!=1){
        if(num%2==0){
            num = num/2;
        }
        else{
            num = (3*num + 1)/2;
        }
        count++;
    }
    printf("%d",count);
}

int pat1002(){
    char * figureHan[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int sum=0;
    char ch;
    ch = getchar();
    while(ch!='\n'){
        switch(ch){
            case '1':{
                sum+=1;
                break;
            }
            case '2':{
                sum+=2;
                break;
            }
            case '3':{
                sum+=3;
                break;
            }
            case '4':{
                sum+=4;
                break;
            }
            case '5':{
                sum+=5;
                break;
            }
            case '6':{
                sum+=6;
                break;
            }
            case '7':{
                sum+=7;
                break;
            }
            case '8':{
                sum+=8;
                break;
            }
            case '9':{
                sum+=9;
                break;
            }
            default:{
                sum+=0;
                break;
            }
        }
        ch = getchar();
    }

    int result[100];
    int count=0;
    int currentFigure;
    while(sum!=0){
        currentFigure = sum % 10;
        result[count++]=currentFigure;
        sum = sum / 10;
    }

    if(count>1){
        for(int i=count-1;i>0;--i){
            printf("%s ",figureHan[result[i]]);
        }
        printf("%s",figureHan[result[0]]);
    }
    else{
        printf("%s",figureHan[result[0]]);
    }
    return 0;
}

int pat1003v1(){
    char c;
    int num;
    scanf("%d", &num);
    while(getchar() != '\n');  //来清除scanf缓存中的垃圾数据
    int i=0;//count表示A分别在几个位置 的数量
    for(i=0;i<num;i++)
    {
        int pos=0,count[3]={0,0,0};//,count[3]={0,0,0}不能放上面
        while((c=getchar())!='\n'){
            if(c=='A') count[pos]++;
            else if(c=='P'&&pos==0) pos=1;
            else if(c=='T'&&pos==1) pos=2;
            else break;
        }
        if(c=='\n'&&
           pos==2&&
           count[1]&&
           count[2]==count[1]*count[0])
            printf("YES\n");        //也可以用puts("YES");自带换行符
        else
            printf("NO\n");        //也可以用puts("YES");自带换行符
        if(c!='\n')
            while(getchar()!='\n');   //来清除getchar缓存中的垃圾数据
    }
    return 0;
}
//
int pat1003v2(){
    int n;
    char str[101];
    int front, middle, end;
    int i;
    int strLength;
    int PCount;
    int TCount;
    int PIndex;
    int TIndex;
    scanf("%d",&n);
    for(i=0;i<n;++i){
        scanf("%s",str);
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

struct student{
    char name[11];
    char id[11];
    int grade;
};

int cmp(const void* _a, const void* _b){
    struct student a = *(struct student *) _a;
    struct student b = *(struct student *) _b;
    return b.grade - a.grade;
}
int pat1004(){
    int n;
    int unused __attribute__((unused));
    unused = scanf("%d",&n);
    struct student students[n];
    for(int i=0;i<n;i++){
        unused = scanf("%s %s %d",&students[i].name, &students[i].id, &students[i].grade);
    }

    qsort(students,n,sizeof(struct student),cmp);

    printf("%s %s\n",students[0].name,students[0].id);

    printf("%s %s\n",students[n-1].name,students[n-1].id);

    return 0;
}