#include<iostream>
using namespace std;

bool search(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]== key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n;i++){
        cin >> arr[i];
    }

    int key ;
    cout << "Enter the value to be search " << " ";
    cin >> key;

    bool ans = search(arr,n,key);
    cout << ans << endl;
    return 0;
}