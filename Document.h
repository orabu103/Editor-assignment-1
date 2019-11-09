#pragma once
#include <iostream>
#include <vector>
using namespace std;


class Document{
    vector<string> vec;
    int pos;
    public:
    Document(){pos = 0;}
    void a();
    void p();
    void n();
    void printAll();
    void i();
    void c();
    void d();
    void search(string str);
    void repeatSrearch(string str);
    void number(string str);
    void backward(string str);
    void replaces(string Old , string New);

        

};
