#include<bits/stdc++.h>
using namespace std;
int main(){
    int amount;
    cin >> amount;
    int hundred, fifty,twenty,ten,one;
    hundred = fifty = twenty = ten = one = 0;
    switch (amount >= 100)
    {
    case 1: hundred = amount/100;
            amount -= hundred * 100;
            cout << "100 Rs. Note = " << hundred <<endl;
        break;
    }

    switch (amount >= 50)
    {
    case 1: fifty = amount/50;
            amount -= fifty * 50;
            cout << "50 Rs. Note = " << fifty <<endl;
        break;
    }

    switch (amount >= 20)
    {
    case 1: twenty = amount/20;
            amount -= twenty * 20;
            cout << "20 Rs. Note = " << twenty <<endl;
        break;      
    }

    switch (amount >= 10)
    {
    case 1: ten = amount/10;
            amount -= ten * 10;
            cout << "10 Rs. Note = " << ten <<endl;
        break;       
    }

    switch (amount >= 1)
    {
    case 1: one = amount/1;
            amount -= one * 1;
            cout << "1Rs. Note = " << one <<endl;
        break;
    }

return 0;
}