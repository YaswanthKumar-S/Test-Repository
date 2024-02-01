#include<bits/stdc++.h>
using namespace std;
int lis(vector<int>&arr)
{
    int n=arr.size();
    vector<int>lis(n,1);
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j] && lis[i]<lis[j]+1) lis[i]=lis[j]+1;
        }
    }
    return *max_element(lis.begin(),lis.end()); 

}
int main()
{
    int n,i=0;
    cin>>n;
    vector<int>arr(n);
    while(i<n){
        cin>>arr[i];
        i++;
    }
    cout<<lis(arr);
}