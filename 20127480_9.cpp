#include<iostream>
using namespace std;
int main()
{
	int n,k,s=0,s1=0,a,b,c,d;
	cin>>n>>k;
	d=k;
	int arr[n];
	for(int i=0;i<=n-1;i++)
	{
		cin>>arr[i];
	};
	
	for(int f=0;f<=n-k;f++)
	{
		while(d>0)
		{
			s1 +=arr[f+d];
			d--;
		};
		if(s<=s1)
		s=s1;
		d=k;
		s1=0;
	};
	
	cout<<s;
}
