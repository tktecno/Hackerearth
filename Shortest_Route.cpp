#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while (t--)
	{
		int n,m;
		cin>>n>>m;
		vector<int> v(n);
		vector<int> arr[n];
		int pos=-1;
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
			if(v[i]==1)
			{
				pos=i;
			}
			else if(v[i]==0&&pos!=-1)
			{
				arr[i].push_back(i-pos);//for all ones.
			}
			else if(v[i]==0)
            {
                arr[i].push_back(10000000);
            }

		}
		 pos=0;
		 for(int i=n-1;i>=0;i--)
		 {
		 	if(v[i]==2)
		 	{
		 		pos=i;
		 	}
		 	else if(v[i]==0&&pos)
		 	{
		 		arr[i].push_back(pos-i);//for all two.
		 	}
		 	else if(v[i]==0)
                arr[i].push_back(10000000);
		 }
		for(int i=0;i<m;i++)
		{
			int x;
			cin>>x;
            if(v[x-1]!=0)
                cout<<0<<' ';
            else if(arr[x-1][0]==10000000&&arr[x-1][1]==10000000)
                cout<<-1<<' ';
			else
            {
                cout<<min(arr[x-1][0],arr[x-1][1])<<' ';
            }

		}
		cout<<endl;
	}
}
