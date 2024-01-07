#include<bits/stdc++.h>
using namespace std;
void rev(int a[],int reversals)
{
    for(int i=0;i<reversals;i++)
    {
        int s,e;
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
    int reversals;
    cin>>reversals;
    rev(a,reversals);
}