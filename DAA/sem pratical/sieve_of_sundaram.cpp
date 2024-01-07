#include<bits/stdc++.h>
using namespace std;
void sieve_of_sundaram(int n)
{
    int nnew=(n-1)/2;
    bool marked[nnew];
    memset(marked,false,sizeof(marked));
    if(n>=2) cout<<"2 ";
    for(int i=1;i<=nnew;i++){
        for(int j=i;(i+j+2*i*j)<=nnew;j++)
        {
            marked[i+j+2*i*j]=true;
        }
    }
    for(int i=1;i<=nnew;i++)
    {
        if(marked[i]==false)
        {
            cout<<2*i+1<<" ";
        }
    }
}
int main()
{
    int n;
    cin>>n;
    sieve_of_sundaram(n);
}