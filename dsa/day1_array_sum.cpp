#include<bits/stdc++.h>
using namespace std;
vector<int> num_of_digits(vector<int> num_list)
{
    vector<int> res;
    for(int num: num_list)
    {
        int sum_of_digits=0;
        while(num>0)
        {
            sum_of_digits+=num%10;
            num/=10;
        }
        res.push_back(sum_of_digits);
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    vector<int> num_list(n);
    for(int i=0;i<n;i++) cin>>num_list[i];
    vector<int> res= num_of_digits(num_list);
    for(int i=0;i<n;i++) cout<<res[i] <<" ";
}