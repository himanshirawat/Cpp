// 28 March 2023 
// fharenite to Celsius Table
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n ;

    int F = 0 , C = 0;
    while(F <= n){
        C = (((F-32)*5)/9 );
        cout << "Fahrenheit " << F << " = " << C << " Celsius " << endl; 
        F = F + 10;
    }
}