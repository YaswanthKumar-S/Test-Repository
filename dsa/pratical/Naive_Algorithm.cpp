#include<bits/stdc++.h>
using namespace std;
void find_match(string text,string pattern)
{
    int n=text.length();
    int m=pattern.length();
    bool notfound=true;
    for(int i=0;i<=n-m;i++)
    {
        bool match=true;
        for(int j=0;j<m;j++){
            if(text[i+j]!=pattern[j])
            {
                match=false;
                break;
            }
        }
        if(match){ 
            cout<<"Match Found at "<<i<<endl;
            notfound=false;
        }
    }
    if(notfound) cout<<"Match not Found";
}
int main()
{
    string text,pattern;
    cin>>text>>pattern;
    find_match(text,pattern);
}