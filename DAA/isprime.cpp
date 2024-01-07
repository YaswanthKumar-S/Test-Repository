#include<iostream>
using namespace std;
bool isprime(int n)
{
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
void print_in_range(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(isprime(i)) cout<<i<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    print_in_range(n);
}

