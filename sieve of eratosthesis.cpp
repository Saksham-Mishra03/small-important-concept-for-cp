#include<bits/stdc++.h>
using namespace std;

//sieve of eratosthenes

void soe(int n)
{
	vector<bool>v(n+1,true);
	v[0]=false;
	v[1]=false;
	
	for(int i = 2;i*i<=n;i++)
	{
		for(int j = 2*i;j<=n;j+=i)
		{
			v[j]=false;
		}
	}
	
	//printing
	for(int i = 0;i<n+1;i++)
	{
		if(v[i]==true)
		cout<<i<<" ";
	}
	
}

int main()
{
	int n;
	cout<<"enter the range";
	cin>>n;
	soe(n);
	return 0;
}
