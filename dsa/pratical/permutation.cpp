#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string a;
    cin>>a;
    sort(a.begin(),a.end());
    while(next_permutation(a.begin(),a.end())) cout<<a<<endl;
}