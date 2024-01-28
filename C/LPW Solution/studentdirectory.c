// Linking dependencies
#include<stdio.h>
#include<string.h>

//Global variables and structure definition
struct stu{
    int en,sem;
    char name[20];
    float per;
    };
struct stu rec[10];
int curr=0; // Variable for number of records

// UDFs

//Fuction to Add Record
void addrec(){
    int chein,flag=1,chesem;
    float cheper;
    if(curr<10){
    here:
    printf("Enter the enrollment number of the student: ");
    scanf("%d",&chein);
    if(chein<=0){
        printf("Enrollment number less than or equal to 0\n");
        goto here;
    }
    for(int i=0;i<curr;i++){
        if(rec[i].en==chein){
            printf("Enrollment number has to be unique! Please add another\n");
            goto here;
        }
    }
    rec[curr].en=chein;
    printf("Enter the name of the student: ");
    scanf("%s",rec[curr].name);
    resem:
    printf("Enter the semester of the student: ");
    scanf("%d",&chesem);
    //Added validation to check negative semester, and percentage out of bounds
    if(chesem>0){
        rec[curr].sem=chesem;
    }else{
        printf("Please enter a valid semester!\n");
        goto resem;
        }
    reper:
    printf("Enter the percentage of student: ");
    scanf("%f",&cheper);
    if(cheper>=0&&cheper<=100){
        rec[curr].per=cheper;
    }else if(cheper<0){
        printf("Percentage has to be positive!\n");
        goto reper;
    }else if(cheper>100){
        printf("Percentage can't be more than 100!\n");
        goto reper;
        }
    curr++; //Update number of variables to show number of records
    printf("Student record added succesfully!");
    }else{
        printf("Directory is full! Consider deleting records before adding new ones\n");
        }
}

//Function to find the index of a given enrollment number. Returns int 0->10 if found, -1 if enrollment number doesn't exist
int indofen(){
    int getin;
    printf("Search for which enrollment number: ");
    scanf("%d",&getin);
    int in=0,flag=0;
    for(in=0;in<10;in++){
        if(rec[in].en==getin){
            flag=1;
            break;
        }
    }
    if(flag==1){
        return in;
    }else{
        return -1;
        }
    }

//Function to Print the details of a student, given the enrollment number
void printrecbyen(int ind){

    if(ind!=-1){
    printf("Details for enrollment number %d:\n",rec[ind].en);
    printf("\tName: %s\n\tSemester: %d\n\tPercentage: %.2f\n",rec[ind].name,rec[ind].sem,rec[ind].per);
    }else{
        printf("The requested enrollment number was not found.");
        }

    }

//Modify the details of a student given their enrollment number
void modbyen(int ind){
    int opt,cont=1,chesem;
    float cheper;
    char cons;
    if(ind!=-1){

    printf("Options:\n\t1.Name\n\t2.Semester\n\t3.Percentage\nYour choice: ");
    scanf("%d",&opt);
    switch(opt){
    case 1:
        printf("Enter the new name: ");
        scanf("%s",rec[ind].name);
        printf("Name updated successfully!\n");
        break;
    case 2:
        rsem:
        printf("Enter the new semester: ");
        scanf("%d",&chesem);
        if(chesem<0){
            printf("Semester should be greater than 0!\n");
            goto rsem;
        }else{
            rec[ind].sem=chesem;
            printf("Semester updated successfully!\n");
            }

        break;
    case 3:
        rper:
        printf("Enter the new percentage: ");
        scanf("%f",&cheper);
        if(cheper<0||cheper>100){
            printf("Percentage has to be between 0 and 100\n");
            goto rper;
        }else{
            rec[ind].per=cheper;
            printf("Percentage updated successfully!\n");
        }

        break;
    default:
        printf("Please enter a valid choice.\n");

        }
    }
}

//Delete entries given the index of the entry to be deleted.
void delbyid(int id){
    int flag=1,temp=id;
    for(int i=id;i<curr-1;i++){
        rec[temp].en=rec[temp+1].en;
        strcpy(rec[temp].name,rec[temp+1].name);
        rec[temp].sem=rec[temp+1].sem;
        rec[temp].per=rec[temp+1].per;
    }
    rec[curr-1].en=0;
    curr--;

    }
// Display the details of the student with highest marks
void disphighest(){
    if(curr==0){
        printf("Please add some entries before viewing!");
    }else{
    int ind=0;
    float max=rec[0].per;
    for(int i=1;i<curr;i++){
        if(rec[i].per>max){
            ind=i;
            }
    }

    printrecbyen(ind);
    }
}

//Display the details of all students
void displayall(){
    if(curr==0){
        printf("Please enter student records before reading them!\n");
    }else{
        for(int i=0;i<=curr-1;i++){
            printf("%d)Enrollment number: %d\n\tName: %s\n\tCurrent sem: %d\n\tPercentage: %f\n\n",i+1,rec[i].en,rec[i].name,rec[i].sem,rec[i].per);
    }
    }
}
void main(){
    int cont=1,getin;
    printf("\t\tStudent managment Software\n\n");

    while(cont==1){
        int in,geten;
        printf("Choose your operation: \n");
        printf("\t1.Add Record\n\t2.Search by enrollment number\n\t3.Modify record by enrollment number\n\t4.Delete student record by enrollment number\n\t5.Display all student records\n\t6.Display Student Details with highest percentage\n\t7.Quit\n\n")
   ;    printf("Enter your choice: ");
        scanf("%d",&in);
    switch(in){
    case 1:
        addrec();
        break;
    case 2:
        if(curr==0){
            printf("Please add entries before searching!\n");
        }else{
        geten=indofen();
        if(geten==-1){
            printf("Requested enrollment number not found!\n");
            continue;
        }
        printrecbyen(geten);
    case 3:
        if(curr==0){
            printf("Please add entries before modifying!\n");
        }else{
        geten=indofen();
        if(geten==-1){
            printf("Requested enrollment number not found!\n");
            continue;
        }
        modbyen(getin);}}
        break;
    case 4:
        if(curr==0){
            printf("Please add entries before deleting!\n");
        }else{
        geten=indofen();
        if(geten==-1){
            printf("Enrollment number does not exist!\n");
        }else{
        delbyid(geten);}
        }
        break;
    case 5:
        displayall();

        break;
    case 6:
        disphighest();
        break;
    case 7:
        printf("Logging off, see you soon.");
        cont=0;
        break;
    default:
        printf("Please enter a valid choice\n");
        }
    }

}
