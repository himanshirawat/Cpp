#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        multiset<int> a;
        int n;
        cin>>n;

        for(int i=1;i<=n;i++){
            int k;
            cin>>k;
            a.insert(k);
        }

        int flag =0;
        for(auto i=a.begin();i!=a.end();i++){
            for(auto j=a.begin();j!=a.end();j++){
                if(i != j){
                    int k = (*i)*(*j);
                    if(a.find(k)==a.end())
                    flag++;
                }
            }
        }
        if(flag != 0)
        cout<<"no"<<endl;
        else
        cout<<"yes"<<endl;
    }

}