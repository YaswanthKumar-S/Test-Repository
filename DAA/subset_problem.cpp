#include<iostream>
using namespace std;
int totalcount=0;
void count(int n,int a[],int sum,int index,int csum)
{
    if(csum==sum)
    {
        totalcount++;
        return;
    }
    if(csum>sum||index==n){
        return;
    }
    count(n,a,sum,index+1,csum+a[index]);
    count(n,a,sum,index+1,csum);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum;
    cin>>sum;
    count(n,a,sum,0,0);
    cout<<totalcount;
    
}