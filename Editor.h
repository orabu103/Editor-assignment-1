#pragma once
#include <iostream>
#include "Document.h"

using namespace std;

class Editor{
    Document Doc;
    public:
    void loop();

};
int main(){
   Editor edt;
   edt.loop();
}
