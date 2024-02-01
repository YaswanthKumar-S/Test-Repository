#include<iostream>
using namespace std;
bool subsetsum(int a[],int n,int k)
{
    if(k==0) return 1;
    if(n==0) return 0;
    if(a[n-1]>k) return(a,n-1,k);
    return subsetsum(a,n-1,k)||subsetsum(a,n-1,k-a[n-1]);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int k;
    cin>>k;
    int x=subsetsum(a,n,k);
    (x)?cout<<"Yes":cout<<"No";
}