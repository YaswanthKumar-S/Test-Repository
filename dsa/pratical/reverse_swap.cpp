#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        a.push_back(num);
    }
    int a1,b1;
    cin>>a1>>b1;
    int aindex,bindex;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a1) aindex=i;
        if(a[i]==b1) bindex=i;
    }
    swap(a[aindex],a[bindex]);
    for(int i=0;i<n;i++)
    {
        cout<<a[n-i-1]<<" ";
    }


}