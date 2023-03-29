//29 March 2023
// Pattern 
// A
// BC
// DEF

#include<iostream>
using  namespace std;
int main(){
    int n;
    cin >> n;
    char ch = 'A';
    int row = 1;
    while(row<=n){
        int col = 1;
        while (col<= row)
        {
            cout << ch;
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }
}