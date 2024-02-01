#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"Doubly Linked List backwards : ";
    for(int i=0;i<n;i++) cout <<a[i]<<" ";
    cout<<endl;

    cout<<"Doubly Linked List Forwards : ";
    for(int i=0;i<n;i++) cout<<a[n-i-1]<<" ";
}