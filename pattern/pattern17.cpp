//29 March 2023
// Pattern 
// ABC
// BCD
// CDE

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int row = 1;
    char ch = 'A';
    while (row <= n){
        int col = 1;
        while(col <= row){
            char value = 'A' + row - 1;
            cout << value;
            col++;
        }
        cout << endl;
        row++;
    }
}