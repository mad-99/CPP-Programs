#include<iostream>
using namespace std;
int main()
{
	int a[100],n;
	cin>>n;
	int cs=0,ms=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cs=cs+a[i];
		cout<<cs<<endl;
		if(cs<0)
		{
			cs=0;
		}
		ms=max(cs,ms);
	}
	cout<<ms<<endl;
	return 0;
}