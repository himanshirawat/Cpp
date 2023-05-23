#include<iostream>
using namespace std;

void Printarray(int arr[], int n){
    for(int i =0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void update(int arr[],int n){
    arr[0] = 120;
    Printarray(arr,5);

}

int main(){
    int arr[5] = {8,5,9,2,6};

    update(arr,5);
    Printarray(arr,5);

    return 0;
}