#include<bits/stdc++.h>
using namespace std;

class Animal{
    public :
    void eat(){
        cout<<"I can eat "<<endl;
    }
    void sleep(){
        cout<<"I can sleep"<<endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout<<"I can bark ! woof woof"<<endl;
    }
};

int main(){
    Dog d;
    d.eat();
    d.sleep();
    d.bark();

    return 0;
}