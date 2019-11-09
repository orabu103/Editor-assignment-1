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
        bool flag = true;
        int ind = pos;
        while(flag){
            if(ind > (vec.size()-1)) ind=0;  
            string ans = vec[ind];
            if(ans.find(str)!= std::string::npos){
                cout << vec[ind] << endl;
                pos = ind+1;
                flag= false;
                break;
            }
            ind+=1;
             if(ind==pos) flag= false;
        }
}
void Document::repeatSrearch(string str){ //Repeat search
    Document::search(str);
}
void Document::backward(string str){//searches backward
     bool flag = true;
        int ind = pos-1;
        while(flag){
            if(ind<=0) ind=vec.size()-1;
            string ans = vec[ind-1];
            if(ans.find(str)!= std::string::npos){
                cout << vec[ind-1] << endl;
                pos=ind;
                flag= false;
                break;
            }
            ind-=1;
            if(ind==pos) flag= false;
           
            
        }
}
void Document::replaces(string Old , string New){ //replaces old string with new in current line 
     size_t posi = 0;
     string ans = vec[pos-1];
     std::string token;
    (posi = ans.find(Old)) != std::string::npos;
    string sub = ans.substr(0,posi);
    ans.erase(0, posi);
    sub = sub.append(New);
    ans.erase(0, Old.size()-1);
    sub = sub.append(ans.substr(0,ans.size()-1));
    vec[pos-1]=(vec.begin()+pos-1,sub);


}


