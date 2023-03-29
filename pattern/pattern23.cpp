//29 March 2023
// Pattern 
//       1
//     2 2
//   3 3 3
// 4 4 4 4

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }
        
        int col = 1;
        while (col <= row)
        {
            cout<< row;
            col++;
        }
        cout << endl;
        row++;
    }
    
}