#include<bits/stdc++.h>
using namespace std;
vector<int> findinitialmaxs(vector<int>&a,int frames)
{
    vector<int> result;
    for(int i=0;i<=a.size()-frames;++i)
    {
        int initialmax=a[i];
        for(int j=i+1;j<i+frames;j++)
        {
            initialmax=max(initialmax,a[j]);
        }
        result.push_back(initialmax);
    }
    return result;
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int frames;
    cin>>frames;
    vector<int> result=findinitialmaxs(a,frames);
    for(int i=0;i<result.size();i++) cout<<result[i]<<" ";
}