#include<iostream>
using namespace std;

class Book{
    string title,author;
public:
    void setTitle(string title){
        this->title=title;
        }
    void setAuthor(string author){
        this->author=author;
        }
    string getTitle(){
        return title;
        }
    string getAuthor(){
        return author;
        }
    void displayBookInfo(){
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        }
};

class libraryBook: public Book{
    string libraryID;
public:
    void setLibraryID(string libraryID){
        this->libraryID=libraryID;
        }
    string getLibraryID(){
        return libraryID;
        }
    void displayBookInfo(){
        cout<<"Title: "<<getTitle()<<endl;
        cout<<"Author: "<<getAuthor()<<endl;
        cout<<"Library ID: "<<libraryID<<endl;
        }
    };

int main(){
    libraryBook book;
    book.setTitle("Programming in C");
    book.setAuthor("E. Balaguruswamy");
    book.setLibraryID("NFSU-GNR");
    book.displayBookInfo();
    return 0;
}
