#include <iostream>
#include<iomanip>
using namespace std;

int stored_records=0,check=0;


class Employees{
    long int empno,salary;
    string empname;

    public:
        int setno(long int,int);
        int setsalary(long int s){
            if(s<0){
                cout<<"Salary cannot be less than 0!"<<endl;
                return -1;
            }else{
                salary=s;
                return 0;
                }
        }
        int setname(string n){
            empname=n;
            return 0;
            }
        long int getno(){
            return empno;
            }
        long int getsal(){
            return salary;
            }
        string getname(){
            return empname;
            }
        void del(){
            empno=0;
            salary=0;
            empname='\0';
            }
    }e[100];
int ind_of_eno(long int eno){
    for(int i=0;i<stored_records+check;i++){
        if(eno==e[i].getno()){
            return i;
            }
        }
    return -1;
}
int Employees::setno(long int e,int param=0){
    if(param=-1){
        empno=e;
        return 0;
    }
        if(e<=0){
            cout<<"The employee number has to be greater than 0!"<<endl;
            return -1;
        }else{
            if(ind_of_eno(e)==-1){
                empno=e;
                return 0;
            }else{
                cout<<"Employee number has to be unique!"<<endl;
                cout<<"Existing record found"<<endl;
                return -2;

            }
            }
        }
int yn(char cho){
    if(cho=='Y'||cho=='y'){
        return 1;
    }else if(cho=='N'||cho=='n'){
        return 0;
        }
    else{
        return -1;
    }
    }
int want_to_do_again(){
    // Returns 1 if user wants to search again, 0 if does not want to search again
    char in;
    again:
        cout<<"Do you wish to search again? ";
        cin>>in;
        int choi=yn(in);
        if(choi==-1){
            cout<<"Please enter y/n"<<endl;
            goto again;
        }else
            return choi;

    }
void addrecs(){
    int n;
    cout<<"How many records do you want to add?: ";
    cin>>n;
    for(int i=stored_records;i<stored_records+n;i++){
        string name;
        long int eno,sal;
        cout<<"Give the name of the employee: ";
        cin>>name;
        e[i].setname(name);
        re_no:
        cout<<"Give the employee number: ";
        cin>>eno;
        int no_status=e[i].setno(eno);
        if(no_status==-1||no_status==-2){
            goto re_no;
        }
        re_sal:
        cout<<"Give the employee's salary: ";
        cin>>sal;
        int sal_status= e[i].setsalary(sal);
        if(sal_status==-1){
            goto re_sal;
        }
        check++;
        cout<<"Employee record added succesfully!\n\n\n"<<endl;
    }
    stored_records+=n;
    check=0;
    }
void printheader(){
    cout<<left<<setw(9)<<"Emp no"<<setw(25)<<"Name of the employee"<<right<<setw(10)<<"Salary"<<endl;
    cout<<"============================================="<<endl;
    }
void printbyind(int ind){
    cout<<left<<setw(9)<<e[ind].getno()<<setw(25)<<e[ind].getname()<<right<<setw(10)<<e[ind].getsal()<<endl;
    }
void search_by_eno(){
    int no,ind,choi=1;
    char in;
    do{
        cout<<"Enter the employee number you want to search for: ";
        cin>>no;
        ind= ind_of_eno(no);
        if(ind==-1){
            cout<<"The employee number you searched for does not exist in the record!"<<endl;
            choi=want_to_do_again();
            if(choi==1){
              continue;
            }
        }else{
            printheader();
            printbyind(ind);
            break;
            }
    }while(choi!=0);

}
void show_highest(){
 int max_s= e[0].getsal(),ret_ind=0;
 for(int i=1;i<stored_records;i++){
    if(e[i].getsal()>max_s){
        ret_ind=i;
    }
 }
 printheader();
 printbyind(ret_ind);
}
void print_dne(){
        cout<<"Please add some records before using this operation\n"<<endl;
}

int searchbyname(int fn){
    // Pass fn value as 0 if you only want to display the records, 1 if you want the function to return the index of the record
    // selected by the user.
    // Returning -1 indicates improper selection/search by user, handle appropriately
    start:
    string sea;
    cout<<"Give the name which you want to search: ";
    cin>>sea;
    int first=1,m_choi;
    for(int i=0;i<stored_records;i++){
        if(sea.compare(e[i].getname())==0){
            if(first==1){
                printheader();
                first=0;
            }
            printbyind(i);
        }
    }
    if(first){
        cout<<"No employee found with the given name"<<endl;
        m_choi=want_to_do_again();
        if(m_choi==1){
            goto start;
        }else{
            return -1;
            }
    }
    cout<<"\n"<<endl;
    if(fn==1){
        int ret;
        sbn_here:
        cout<<"Please enter the employee number which you would like to select: ";
        cin>>ret;
        if(ind_of_eno(ret)!=-1){
        return ind_of_eno(ret);}
        else{
            cout<<"Please enter a valid employee number!"<<endl;
            int choi=want_to_do_again();
            if(choi==1){
                goto sbn_here;
            }else if(choi==0){
                return -1;
                }
        }
    }
     return 0;
}



void update_record(){
    long int s;
    int stat;
    int ind,eno;
    again:
    cout<<"Enter the employee number which you want to update (enter -1 if you want to search by name): ";
    cin>>eno;
    if(eno==-1){
        ind=searchbyname(1);
    }else{
        ind=ind_of_eno(eno);
        }
    if(ind==-1){
        cout<<"Employee with given employee number was not found"<<endl;
        if(want_to_do_again())
            goto again;
        else
            return;
    }else{
        int choi,opt;
        do{
            cout<<"1. Update Name"<<endl;
            cout<<"2. Update Salary"<<endl;
            cout<<"0. Exit"<<endl;
            cout<<"Enter your choice: ";
            cin>>choi;
            switch(choi){
            case 1:{
                string n;
                cout<<"Enter the name you wish to set: ";
                cin>>n;
                e[ind].setname(n);
            }
                break;
            case 2:
                {
                cout<<"Setting Salary"<<endl;
                retry:
                cout<<"Enter the salary you want to set: ";
                cin>>s;
                stat=e[ind].setsalary(s);
                if(stat=-1){
                    int ch;
                    ch=want_to_do_again();
                    if(ch==1)
                        goto retry;
                }
                }
            }
        }while(choi!=0);
        }

}

void del_rec(){
    retry:
        int eno,ind;
        cout<<"Enter the employee number you want to delete (-1 if you would like to search by name): ";
        cin>>eno;
        if(eno==-1){
            ind=searchbyname(1);
        }else{
            ind=ind_of_eno(eno);
            }
        if(ind==-1){
                int tryagain;
                cout<<"The employee number you provided does no exist!"<<endl;
                tryagain=want_to_do_again();
                if(tryagain==1){
                    goto retry;
                }else{
                    cout<<"Exiting delete user functionality\n\n"<<endl;
                    return;
                    }
            }
        for(int i=ind;i<=stored_records-2;i++){
            e[i].setname(e[i+1].getname());
            e[i].setno(e[i+1].getno());
            e[i].setsalary(e[i+1].getsal());
        }
        e[stored_records-1].del();
        stored_records--;
        cout<<"Record Deleted Successfully!\n\n"<<endl;

    }



int main(){
    int choice;
    do{
        cout<<"1. Add record(s)"<<endl;
        cout<<"2. Display all records"<<endl;
        cout<<"3. Search by employee number"<<endl;
        cout<<"4. Search by employee name"<<endl;
        cout<<"5. Update employee record"<<endl;
        cout<<"6. Delete employee record"<<endl;
        cout<<"7. Find the highest paid employee"<<endl;
        cout<<"0. Exit the application"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        system("cls");
        switch(choice){
        case 1:
            addrecs();
            break;
        case 2:
            if(stored_records!=0){
                printheader();
                for(int i=0;i<stored_records;i++){
                    printbyind(i);
                }
            }else{
                print_dne();
                }
            break;

        case 3:
            if(stored_records!=0)
                search_by_eno();
            else
                print_dne();
            break;

        case 4:
            if(stored_records!=0)
                searchbyname(0);
            else
                print_dne();
            break;

        case 5:
            if(stored_records!=0)
                update_record();
            else
                print_dne();
            break;
        case 6:
            del_rec();
            break;

        case 7:
            show_highest();
            break;

        }
    }while(choice!=0);

}



