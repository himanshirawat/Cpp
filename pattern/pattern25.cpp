//29 March 2023
// Pattern 
//       1
//     2 3
//   4 5 6
// 7 8 9 10

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count = 1;
    int row = 1;
    while (row <= n)
    {
        int space = n - row ;
        while (space)
        {
            cout << " ";
            space--;
        }
        
        int col = 1;
        while (col <= row)
        {
            cout<< count;
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
    
}