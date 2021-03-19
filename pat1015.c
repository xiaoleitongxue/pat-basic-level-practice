//
// Created by lilei on 3/19/2021.
//

#include <stdio.h>
#include <stdlib.h>
enum Type{
    type1=1,type2,type3,type4,type5
};
struct student{
    int id;
    int de;
    int cai;
    int total;
    enum Type type;
};

int cmp(const void* _a,const void* _b){
    struct student a = *(struct student *) _a;
    struct student b = *(struct student *) _b;
    if(a.type != b.type){
        //升序
        return a.type - b.type;
    }
    else{
        if(a.total==b.total){
            if(a.de==b.de){
                //升序
                return a.id - b.id;
            }
            else{
                //降序
                return -(a.de - b.de);
            }
        }
        else{
            return -(a.total-b.total);
        }
    }

}
int main(){
    int N;
    int jige;
    int youxiu;

    scanf("%d %d %d",&N,&jige,&youxiu);
    struct student students[N];
    int passedStudentsCount = N;
    for(int i=0;i<N;i++){
        scanf("%d %d %d",&students[i].id, &students[i].de,&students[i].cai);
        students[i].total=students[i].de + students[i].cai;
        if(students[i].de<jige || students[i].cai<jige){
            passedStudentsCount--;
            students[i].type=5;
        }
        else{
            if(students[i].de>=youxiu && students[i].cai>=youxiu) students[i].type=type1;
            else if(students[i].de>=youxiu && students[i].cai<youxiu) students[i].type=type2;
            else if(students[i].de>=students[i].cai) students[i].type=type3;
            else students[i].type=type4;
        }
    }

    qsort(students,N,sizeof(struct student),cmp);
    printf("%d\n",passedStudentsCount);
    for(int i=0;i<passedStudentsCount;i++){
        printf("%d %d %d\n",students[i].id,students[i].de,students[i].cai);
    }

    return 0;
}