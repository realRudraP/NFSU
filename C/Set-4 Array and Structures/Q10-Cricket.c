#include<stdio.h>
struct cricket{
    char name[12],team[12];
    float bat_avg;
};
void main(){
    struct cricket player[10];
    for(int i=0;i<10;i++){
        printf("Enter the name of player %d",i+1);
        scanf("%s",player[i].name);
        printf("\nEnter the team of player %d: ",i+1);
        scanf("%s",player[i].team);
        printf("\nEnter the batting average of player %d : ",i+1);
        scanf("%f",&player[i].bat_avg);
        }
    for(int i=0;i<10;i++){
        printf("%s: %f\n",player[i].name,player[i].bat_avg);
    }
}