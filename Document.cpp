#include <iostream>
#include "Document.h"
#include <algorithm>
using namespace std;

void Document::p(){  // prints the current line (ed maintains a current line)
    cout<<vec[pos-1]<<endl;
}
void Document::n(){ // prints line number of current line followed by TAB followed by current line
    cout<<pos <<"  "<< vec[pos-1] << endl;
}
void Document::a(){ //appends new text after the current line
    string str;
    cin.ignore();
    getline(cin, str);
    while(str!="."){
        pos++;
        vec.insert(vec.begin()+pos-1,str);
        getline (cin, str);
    }
}
void Document::printAll(){ //prints all lines (vector)
      for(int i=0; i <vec.size(); i++)
      std::cout <<vec.at(i) << endl;
}
void Document::i(){ //inserts new text before the current line
    string str;
    cin.ignore();
    getline(cin, str);
    while(str!="."){
        pos++;
        vec.insert(vec.end()-1,str);
        getline(cin, str);
    }
} 
void Document::c(){ //changes the current line for text that follows
    vec.erase(vec.begin()+(pos-1));
    string str;
    cin.ignore();
    getline(cin, str);
    while(str!="."){
        vec.insert(vec.begin()+pos-1,str);
        getline (cin, str);
    }
}
void Document::d(){ //deletes the current line
    if(vec.size()>=1){
    vec.erase(vec.begin()+(pos-1));
    pos--;
    }

}
void Document::number(string str){ //makes line #number the current line
    pos = stoi(str);
    cout << vec[pos-1] << endl;
}
void Document::search(string str){ //searches forward after current line for the specified text
         for(int i=pos; i < vec.size(); i++){
             string ans = vec[i];
             if(ans.find(str)!= std::string::npos){
                cout << vec[i] << endl;
                pos=i+1;
                break;
             }
         }
           
}
void Document::repeatSrearch(string str){ //Repeat search
    Document::search(str);
}
void Document::backward(string str){//searches backward
    for(int i=pos-1; i >= 0; i--){
             string ans = vec[i];
             if(ans.find(str)!= std::string::npos){
                cout << vec[i] << endl;
                pos=i+1;
                break;
             }
         }
}

void Document::replaces(){ //replaces old string with new in current line 

}

