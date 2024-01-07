#include<bits/stdc++.h>
using namespace std;
int totalcount=0;
void subset(int n,int a[],int sum,int csum,int index)
{
    if(sum==csum)
    {
        totalcount++;
        return;
    }
    if(csum>sum || index==n) return;
    subset(n,a,sum,csum+a[index],index+1);
    subset(n,a,sum,csum,index+1);
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int sum;
    cin>>sum;
    subset(n,a,sum,0,0);
    cout<<totalcount;

}