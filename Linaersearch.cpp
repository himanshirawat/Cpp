#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[20],n,x,i,index;

    cout<<"enter the size of array : " ; cin >> n;
    cout << "Enter " << n << " numbers: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"enter the value to search :  "; cin >> x;

    for(i=0;i<n;i++){
        if(arr[i] == x){
            index = i;
            break;
        }
    }
    cout << "Found at index : " <<index <<endl;
    
    return 0;
}