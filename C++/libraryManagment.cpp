#include<iostream>
#define MAX_ITEMS_IN_LIBRARY 100
using namespace std;

class libraryItem{
    string name,author;
    int year;
    public:
    void setName(string name){
        this->name=name;
    }
    void setAuthor(string author){
        this->author=author;
    }
    void setYear(int year){
        this->year=year;
    }
    string getName(){
        return name;
        }
    string getAuthor(){
        return author;
    }
    int getYear(){
        return year;
    }
    virtual void displayInfo()=0;
};

class Book:public libraryItem{
    string genre;
    public:
    void setGenre(string genre){
        this->genre=genre;
        }
    string getGenre(){
        return genre;
    }

    Book createBook(){
        Book temp;
        string va;
        int y;
        cout<<"Enter the name of the book: ";
        cin.ignore();
        getline(cin,va);
        temp.setName(va);
        cout<<"Enter the author of the book: ";
        getline(cin,va);
        temp.setAuthor(va);
        cout<<"Enter the year of the book: ";
        cin>>y;
        temp.setYear(y);
        cin.ignore();
        cout<<"Enter the genre of the book: ";
        getline(cin,va);
        temp.setGenre(va);
        return temp;
    }

    void displayInfo(){
        cout<<"Book Name: "<<getName()<<endl;
        cout<<"Author: "<<getAuthor()<<endl;
        cout<<"Year: "<<getYear()<<endl;
        cout<<"Genre: "<<getGenre()<<endl;
    }
};

class DVD:public libraryItem{
    int minutesDuration;
    public:
    void setMinutesDuration(int minutesDuration){
        this->minutesDuration=minutesDuration;
        }
    int getMinutesDuration(){
        return minutesDuration;
    }
    void displayInfo(){
        cout<<"DVD Name: "<<getName()<<endl;
        cout<<"Director: "<<getAuthor()<<endl;
        cout<<"Year: "<<getYear()<<endl;
        cout<<"Minutes Duration: "<<minutesDuration<<endl;
        }
    
    DVD createDVD(){
        DVD temp;
        string va;
        int y;
        cin.ignore();
        cout<<"Enter the name of the DVD: ";
        getline(cin,va);
        temp.setName(va);
        cout<<"Enter the director of the DVD: ";
        getline(cin,va);
        temp.setAuthor(va);
        cout<<"Enter the year of the DVD: ";
        cin>>y;
        temp.setYear(y);
        cin.ignore();
        cout<<"Enter the duration of the DVD: ";
        cin>>y;
        temp.setMinutesDuration(y);
        return temp;
        }
};

class Magazine:public libraryItem{
    int issueNumber;
    public:
    void setIssueNumber(int issueNumber){
        this->issueNumber=issueNumber;
        }
    int getIssueNumber(){
        return issueNumber;
    }
    void displayInfo(){
        cout<<"Magazine Name: "<<getName()<<endl;
        cout<<"Publisher: "<<getAuthor()<<endl;
        cout<<"Year: "<<getYear()<<endl;
        cout<<"Issue Number: "<<issueNumber<<endl;
        }
    Magazine createMagazine(){
        Magazine temp;
        string va;
        int y;
        cin.ignore();
        cout<<"Enter the name of the magazine: ";
        getline(cin,va);
        temp.setName(va);
        cout<<"Enter the publisher of the magazine: ";
        getline(cin,va);
        temp.setAuthor(va);
        cout<<"Enter the year of the magazine: ";
        cin>>y;
        temp.setYear(y);
        cin.ignore();
        cout<<"Enter the issue number of the magazine: ";
        cin>>y;
        temp.setIssueNumber(y);
        return temp;
    }
};

class Library{
    Book books[MAX_ITEMS_IN_LIBRARY];
    Magazine magazines[MAX_ITEMS_IN_LIBRARY];
    DVD dvds[MAX_ITEMS_IN_LIBRARY];
    int bookCount=0;
    int magazineCount=0;
    int dvdCount=0;
    public:
    Library(){
        cout<<"Welcome! Your library has been created"<<endl;
    }
    void addBook(){
        if(bookCount>=100){
            return;
        }
        Book temp;
        books[bookCount]=temp.createBook();
        bookCount++;
    }
    void addMagazine(){
        if(magazineCount>=100){
            return;
        }
        Magazine temp;
        magazines[magazineCount]=temp.createMagazine();
        magazineCount++;
    }
    void addDVD(){
        if(dvdCount>=100){
            return;
        }
        DVD temp;
        dvds[dvdCount]=temp.createDVD();
        dvdCount++;
    }

    void displayInfo(){
        cout<<"Number of Books: "<<bookCount<<endl;
        for(int i=0;i<bookCount;i++){
            cout<<i+1<<"."<<endl;
            books[i].displayInfo();
        }
        cout<<"\n"<<endl;
        cout<<"Number of Magazines: "<<magazineCount<<endl;
        for(int i=0;i<magazineCount;i++){
            cout<<i+1<<"."<<endl;
            magazines[i].displayInfo();
        }
        cout<<"\n"<<endl;
        cout<<"Number of DVDs: "<<dvdCount<<endl;
        for(int i=0;i<dvdCount;i++){
            cout<<i+1<<"."<<endl;
            dvds[i].displayInfo();
        }
    }

};

int main(){
    Library library;
    int choice=10;
    while(choice!=0){
        cout<<"1. Add Book"<<endl;
        cout<<"2. Add Magazine"<<endl;
        cout<<"3. Add DVD"<<endl;
        cout<<"4. Display Info"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
            library.addBook();
            break;
            case 2:
            library.addMagazine();
            break;
            case 3:
            library.addDVD();
            break;
            case 4:
            library.displayInfo();
            break;
            case 0:
            cout<<"Thanks for using! Have a good day"<<endl;
            break;
        }
    }
    return 0;
}