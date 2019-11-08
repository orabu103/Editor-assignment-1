#include <iostream>
#include "Document.h"
using namespace std;

void Document::p(){  // prints the current line (ed maintains a current line)
    int size = vec.size();
    cout<<vec[size-1]<<endl;
}
void Document::n(){ // prints line number of current line followed by TAB followed by current line
    int size = vec.size();
    cout<<size <<"  "<< vec[size-1] << endl;
}
void Document::a(){ //appends new text after the current line
    string str;
    cin.ignore();
    getline(cin, str);
    while(str!="."){
        vec.push_back(str);
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
        vec.insert(vec.end()-1,str);
        getline(cin, str);
    }
} 
void Document::c(){ //changes the current line for text that follows
    vec.pop_back();
    string str;
    cin.ignore();
    getline(cin, str);
    while(str!="."){
        vec.push_back(str);
        getline (cin, str);
    }
}
void Document::d(){ //deletes the current line
    if(vec.size()>=1)
    vec.pop_back();
}
void Document::search(string str){ //searches forward after current line for the specified text
    for(int i=0; i <vec.size(); i++){

    }
}
void Document::repeatSrearch(string str){} //Repeat search
void Document::backward(){}//searches backward
void Document::number(string str){ //makes line #number the current line
    pos = stoi(str);
}
void Document::replaces(){} //replaces old string with new in current line 

