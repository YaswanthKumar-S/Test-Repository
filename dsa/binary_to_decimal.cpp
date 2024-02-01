#include<bits/stdc++.h>
using namespace std;
void bin_to_dec(vector<int> decimal)
{
    int dec=0;
    for(int i=0;i<decimal.size();i++){
        dec+=decimal[i]*pow(2,i);
    }
    cout<<dec;
}
int main()
{
    int n;
    cin>>n;
    vector<int> decimal;
    for(int i=n-1;i>=0;i--)
    {
        cin>>decimal[i];
    }
    bin_to_dec(decimal);
}
