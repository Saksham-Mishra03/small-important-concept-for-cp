#include<bits/stdc++.h>
using namespace std;

//find number of trailing zeros in factorial of any number
int zeros(int n)
{
	int res = 0;
	for(int i = 5;i<=n;i = i*5)
	{
		res = res + n/i;
	}
	return res;
}


int main()
{
	int n;
	cout<<"enter a numbers ";
	cin>>n;
	cout<<zeros(n);
	return 0;
}
