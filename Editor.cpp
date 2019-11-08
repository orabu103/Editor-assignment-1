#include "Editor.h"
bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

void Editor::loop(){
    string search;
    string str;
    cin >> str;
    while(str!= "Q"){
        if(str=="a") Doc.a();
        else if(str=="p") Doc.p();
        else if(str=="c") Doc.c();
        else if(str=="n") Doc.n();
        else if(str=="%p") Doc.printAll();
        else if(str=="d") Doc.d();
        else if(str=="i") Doc.i();
        else if(str[0]=='/'){
            if(str.size()!=1){
                search = str.substr(1,str.size()-1);
                Doc.search(search);
            }
            else {
                Doc.repeatSrearch(search);
            }
        }
        else if(is_number) Doc.number(str);
        cin >> str;
    }
}

