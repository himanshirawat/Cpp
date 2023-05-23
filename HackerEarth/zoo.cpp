#include <iostream>
using namespace std;

int main(){  
    char num[20];
    int x=0,y=0,i;
    cin >> num;
    for (i = 0; num[i] != '\0'; i++)
    {
        if (num[i]=='z') {
        x++;
        }
        if(num[i]=='o') {
        y++;
        } 
    }
//best case
if(2*x==y){
    cout << "Yes" << endl;
}
else{
    cout << "No" << endl;;
}

// OPtional
//(y==x*2)&&printf("yes")||printf("No");

return 0;

}
