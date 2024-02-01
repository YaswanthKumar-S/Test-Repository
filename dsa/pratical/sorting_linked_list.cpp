#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    int num;
    for(int i=0;i<6;i++){
        cin>>num;
        a.push_back(num);
    }
    a.erase(unique(a.begin(),a.end()),a.end());
    sort(a.begin(),a.end());
    for(int n : a) cout<< n <<" ";
}