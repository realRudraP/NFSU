#include<stdio.h>
struct student_record{
    char name[12],branch[12];
    int tot_marks;
};
void main(){
    struct student_record cl1[10];
    for(int i=0;i<10;i++){
        printf("Enter the name of student %d: ",i+1);
        scanf("%s",cl1[i].name);
        printf("Enter branch of student %d: ",i+1);
        scanf("%s",cl1[i].branch);
        printf("Enter marks of student %d: ",i+1);
        scanf("%d",&cl1[i].tot_marks);
    }
    for(int i=0;i<10;i++){
        printf("Student %d: %s",i+1,cl1[i].name);
        printf("\n\tBranch: %s\n\tMarks: %d\n",cl1[i].branch,cl1[i].tot_marks);
    }
}