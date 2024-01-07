#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int cost[100][100];
	int r,c;
	cin>>r>>c;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>cost[i][j];
		}
	}
	for(int i=1;i<r;i++)
	{
		cost[i][0]+=cost[i-1][0];
	}
	for(int j=1;j<c;j++)
	{
		cost[0][j]+=cost[0][j-1];
	}
	
	for(int i=1;i<r;i++)
	{
		for(int j=1;j<c;j++)
		{
			cost[i][j]+=min(cost[i-1][j],cost[i][j-1]);
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<cost[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<cost[r-1][c-1]<<endl;
	//cout<<0<<" "<<0<<endl;
	vector<pair<int,int>> path;
	int i=r-1,j=c-1;
	path.push_back({i,j});
	while(i>0||j>0)
	{
		if(i>0 && cost[i-1][j]<cost[i][j-1])
		{
			i--;
		}
		else
		{
			j--;
		}
		path.push_back({i,j});
	}
	reverse(path.begin(),path.end());
	for(const auto& cell:path)
	{
		cout<<"("<<cell.first<<","<<cell.second<<")"<<endl;
	}
}