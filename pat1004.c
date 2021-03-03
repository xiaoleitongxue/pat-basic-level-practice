//
// Created by lilei on 3/3/2021.
//

#include <stdio.h>
#include <stdlib.h>

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

int main(void){
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