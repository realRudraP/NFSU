#include<iostream>
#include<cstring>
using namespace std;

void caseConverter(string input){
    int length=input.length();
    cout<<"Lowercase: ";
    for(int i=0;input[i]!='\0';i++){
        if((input[i]>='A')&&(input[i]<='Z')){
            input[i]+=32;
        }
        cout<<input[i];
    }
    cout<<"\nUppercase: ";
    for(int i=0;input[i]!='\0';i++){
        if(input[i]!=' '){
            input[i]-=32;
        }
        cout<<input[i];
    }
    cout<<endl;
}

void patternMatching(string in,string pattern){
    int patternSize=pattern.length(),found=0;
    cout<<"Positions of occurrences (first index): "<<endl;
    for(int i=0;in[i]!='\0';i++){
        if(pattern[found]==in[i]){
            if(found==(patternSize-1)){
                cout<<(i-found)<<endl;
                found=0;
            }else{
            found++;
            }
        }else{
            found=0;
            }
    }
}

string stringCompressor(string input){
    string output;
    char curr=input[0];
    int counter=0;
    for(int i=1;input[i-1]!='\0';i++){
        if(input[i-1]==curr){
            counter++;
        }else{
            if(counter!=1&&curr!=' ')
                output+=(curr+to_string(counter));
            else if(curr==' '){
                output+=' ';
            }else{
                output+=curr;
                }
            curr=input[i-1];
            counter=1;
        }
    }
    output+=(curr+to_string(counter));
    return output;
}

#define MAX_TOKENS 150
int stringTokenizer(string input){
    int noOfTokens=0;
    string tokens[MAX_TOKENS];
    string currentToken="";
    cout<<"Tokens: "<<endl;
    for(int i=0;input[i]!='\0';i++){
        if(input[i]!=' '){
            currentToken+=input[i];
        }else if(currentToken!=""){
            cout<<(noOfTokens+1)<<". "<<currentToken<<endl;
            tokens[noOfTokens]=currentToken;
            currentToken="";
            noOfTokens++;
        }

    }
    cout<<(noOfTokens+1)<<". "<<currentToken<<endl;

    return 0;
}

string stringEncryption(string input,int key){
    string output;
    for(int i=0;i<input.length();i++){
        char now=input[i];
        if(now<='Z'&&now>='A'){
            char enc=((now+key-'A')%26)+'A';
            output+=enc;
        }
        else if(now<='z'&&now>='a'){
            char enc=((now+key-'a')%26)+'a';
            output+=enc;
        }else {
            output+=now;
            }
    }
    return output;
}


int main(){
    int opt;
    string input;
    do{
        cout<<"1. Pattern Matching"<<endl;
        cout<<"2. Case Conversion"<<endl;
        cout<<"3. String Tokenization"<<endl;
        cout<<"4. String Compression"<<endl;
        cout<<"5. String Encryption"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>opt;
        switch(opt){
        case 1:{
            string pattern;
            cout<<"Enter the string: ";
            cin.ignore();
            getline(cin,input);
            cout<<"Enter the pattern you want to find: ";
            getline(cin,pattern);
            patternMatching(input,pattern);
            break;
            }
        case 2:{
            cout<<"Enter the string you want: ";
            cin.ignore();
            getline(cin,input);
            caseConverter(input);
            break;
            }
        case 3:
            {
                cout<<"Enter the string you want: ";
                cin.ignore();
                getline(cin,input);
                stringTokenizer(input);
                break;
            }
        case 4:
            {
                cout<<"Enter the string you want: ";
                cin.ignore();
                getline(cin,input);
                cout<<stringCompressor(input)<<endl;
                break;
            }
        case 5:
            {
                int key;
                cout<<"Enter the string you want: ";
                cin.ignore();
                getline(cin,input);
                cout<<"Enter the key you want to shift by: ";
                cin>>key;
                cout<<stringEncryption(input,key)<<endl;
                break;

            }

        }
    }while(opt!=0);
    return 0;
    }
