#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,no;
	cin>>n;
	while(n>0)
	{
		cin>>no;
		int p=1;
		int ans=0;
		while(no>0)
		{
			int r=no%10;
			ans=ans+r*p;
			p=p*2;
			no=no/10;
		}
		cout<<ans<<endl;
		n=n-1;
		
	}
	return 0;
}
