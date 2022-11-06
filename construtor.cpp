#include<bits/stdc++.h>
using namespace std;
class marks{
    public:
    int Maths;
    int Science;
    marks(){
        Maths = 20;
        Science = 35;
    }
    void display(){
        cout<<"Maths : " <<Maths<<"\nScience : "<<Science<<endl;
    }
};

int main(){
    marks m;
    m.display();
    return 0;

}