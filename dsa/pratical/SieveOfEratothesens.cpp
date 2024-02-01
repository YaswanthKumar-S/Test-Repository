#include<bits/stdc++.h>
using namespace std;
void SieveOfEratosthenes(int n)
{
    bool primes[n+1];
    memset(primes,true,sizeof(primes));

    for(int p=2;p*p<=n;p++)
    {
        if(primes[p]){
            for(int i=p*p;i<=n;i=i+p) primes[i]=false;
        }
    }

    for(int p=2;p<=n;p++) if(primes[p]) cout<<p<<" ";
}
int main()
{
    int n=30;
    SieveOfEratosthenes(n);
}