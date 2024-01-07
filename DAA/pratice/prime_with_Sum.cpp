#include<iostream>
#include<vector>
using namespace std;
vector<int> prime;
vector<int> set;
bool isprime(int x)
{
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)return false; 
    }
    return true;
}
void display()
{
    for(int i=0;i<set.size();i++)
    {
        cout<<set[i]<<" ";
    }
}

void primeSum(int N,int S,int total,int index)
{
    if(total==S)
    {
        display();
        return;
    }
    if(total>S || index=prime.size())
    {
        return;
    }
    set.push_back(prime[index]);
    primeSum(N,S,total+prime[index],index+1);
    set.pop_back();
    primeSum(N,S,total,index+1);

}
int main()
{
   int S = 54, N = 2, P = 3;
   for(int i=P+1;i<=S;i++)
   {
    if(isprime(i))
    {
        prime.push_back(i);
    }
   }
   if(prime.size()<N){
        return;
   }
   primeSum(N,S,0,0);

}