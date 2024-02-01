#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=5){
        cout<<n/5<<endl;
        n=n%5;
    }
    if(n>=3){
        cout<<n/3<<endl;
        n=n%3;
    }
    else cout<<"0"<<endl;
    if(n>=2){
        cout<<n/2<<endl;
        n=n%2;
    }
    else cout<<"0"<<endl;
    if(n>=1){
        cout<<n/1<<endl;
    }
    else cout<<"0"<<endl;

}