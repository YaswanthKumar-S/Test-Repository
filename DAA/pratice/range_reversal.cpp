#include<bits/stdc++.h>
using namespace std;
void range_rev(int a[],int m){
    int s,e;
    for(int i=0;i<m;i++)
    {
        cin>>s>>e;
        while(s<e)
        {
            swap(a[s],a[e]);
            s++;e--;
        }

    }
    int index;
    cin>>index;
    cout<<a[index];
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int m;
    cin>>m;
    int s,e;
    range_rev(a,m);

}