#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	//approach 1
	/*
	
	if(b==0)
	return a;
	
	return gcd(b,a%b);
	
	*/
	
	//approach 2
	
	if(a==b)
	return a;
	
	if(a>b)
	return gcd(a-b,b);
	else
	return gcd(a,b-a);
}

int main()
{
	int a,b;
	cout<<"enter two numbers ";
	cin>>a>>b;
	cout<<gcd(a,b);
	return 0;
}
