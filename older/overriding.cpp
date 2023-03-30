#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    void print(){
        cout<<"Base Class"<<endl;
    }
};

class Derived : public Base{
    public:
    void print(){
        cout<<"Derived Class"<<endl;
    }
};

int main(){
    Derived obj , c;
    obj.print();
    c.Base::print();
    return 0;
}