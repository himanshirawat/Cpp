//29 March 2023
// Pattern 
// ABC
// ABC
// ABC

#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int row = 1;
    while (row <= n){
        int col = 1;
        while(col <= n){
            char value = 'A' + col - 1; 
            cout<< value;
            col++;
        }
        cout<<endl;
        row++;
    }
}