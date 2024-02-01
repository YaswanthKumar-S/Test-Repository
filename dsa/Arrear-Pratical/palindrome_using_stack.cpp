#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str){
    int n=str.length();
    stack<char> st;
    for(int i=0;i<n/2;i++) st.push(str[i]);

    int i=(n+1)/2;
    while(i<n)
    {
        if(str[i]!=st.top()) return false;
        st.pop();
        i++;
    }
    return true;
}
int main()
{
    string str;
    cin>>str;
    if(isPalindrome(str)) cout<<"Yes";
    else cout<<"No";
}