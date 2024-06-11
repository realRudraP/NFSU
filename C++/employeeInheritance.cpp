#include<iostream>
using namespace std;

class Person{
    string name;
    int age;
public:
    void setName(string name){
        this->name=name;
        }
    void setAge(int age){
        this->age=age;
        }
    int getAge(){
        return age;
        }
    string getName(){
        return name;
        }
    void displayPersonInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
    };

class Employee: public Person{
    int employeeID;
    string position;
public:
    void setEmpID(int ID){
        employeeID=ID;
    }
    void setPosition(string position){
        this->position=position;
        }
    int getEmpID(){
        return employeeID;
        }
    string getPosition(){
        return position;
        }
    void displayEmployeeInfo(){
        displayPersonInfo();
        cout<<"Employee ID: "<<employeeID<<endl;
        cout<<"Position: "<<position<<endl;
        }
};

class Manager: public Employee{
    int teamSize;
public:
    Manager(string name,int age,int employeeID,string position,int teamSize){
    this->setAge(age);
    this->setEmpID(employeeID);
    this->setPosition(position);
    this->setTeamSize(teamSize);
    this->setName(name);
    cout<<"Manager"<<endl;
    }
    void setTeamSize(int teamSize){
        this->teamSize=teamSize;
        }
    int getTeamSize(){
        return teamSize;
        }
    void displayManagerInfo(){
        displayPersonInfo();
        displayEmployeeInfo();
        cout<<"Team size: "<<teamSize<<endl;
    }
    };

int main(){
    Manager m1("Sanket",30,1026,"Jr.Manager",20);
    m1.displayManagerInfo();
    }
