#include<iostream>
using namespace std;
int count=0;
void subset(int n,int a[],int sum,int index,int csum)
{
    if(csum==sum)
    {
        count++;
        return;
    }
    if(csum>sum || index==n) return;
    subset(n,a,sum,index+1,csum+a[index]);
    subset(n,a,sum,index+1,csum);

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int k;
    cin>>k;
    subset(n,a,k,0,0);
    cout<<count;
}