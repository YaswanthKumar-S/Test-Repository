#include<iostream>
#include<vector>
using namespace std;
vector<int> set;
vector<int> prime;
void display()
{
    for(int i=0;i<set.size();i++) cout<<set[i]<<" ";
}
bool isPrime(int x)
{
    for(int i=2;i<=x/2;i++) if(x%i==0) return false;
    return true;
}
void GeneratePrimeWithSum(int N,int S,int csum,int index)
{
    if(csum==S && set.size()==N)
    {
        display();
        return;
    }
    if(csum>S ||index==prime.size()) return;
    set.push_back(prime[index]);
    GeneratePrimeWithSum(N,S,csum+prime[index],index+1);
    set.pop_back();
    GeneratePrimeWithSum(N,S,csum,index+1);
}
void primeWithSum(int N,int S,int P)
{
    for(int i=P+1;i<=S;i++) if(isPrime(i)) prime.push_back(i);
    if(prime.size()<N) return;
    GeneratePrimeWithSum(N,S,0,0);
}
int main()
{
    int S,N,P;
    cin>>S>>N>>P;
    primeWithSum(N,S,P);

}