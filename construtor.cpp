#include<bits/stdc++.h>
using namespace std;
class marks{
    public:
    int Maths,number;
    int Science;
    string name;
    string quote;
    marks(){
        Maths = 20;
        Science = 35;
    }
  /*Overloaded constructor, with this we can call different constructor
    with different values*/
    marks(string a, string b, int c)
    {  
       number = c;
       name = a;
       quote=b;

    }

    //for declaring a constructor outside class, do the declaration here
    marks(string a, int b);
    void display(){
        cout<<"Maths : " <<Maths<<"\nScience : "<<Science<<endl;
        cout<<"Name : " <<name<<"\tText : "<<quote<<endl;
    }
};


//defining constructors outside the class definition

marks::marks(string a, int b)
{
    name = a;

}

int main(){
    marks m;
    // Creates objects and call the constructor with different values
    marks obj1("askhay","hello",99);
    marks obj2("amit", 88);
    m.display();
    obj1.display();
    return 0;

}