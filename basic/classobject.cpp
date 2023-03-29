#include<bits/stdc++.h>
using namespace std;

class student{
    int a ;
    string name;
    public:
    void getdata(){
        cin>>a;
        cin>>name;
    }
    void disp(){
        cout<<"Rollno : "<<a <<endl;
        cout<<"Name: "<<name <<endl;
    }
};

int main(){
    student stu;
    stu.getdata();
    stu.disp();
    return 0;
}
