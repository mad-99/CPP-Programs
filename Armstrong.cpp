#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,sum=0,c=0,r,a,n;
	cin>>n;
	while(i%10>0)
	{
		c=c+1;
		i=i/10;
	}
	r=n;
	for(i=r;i>0;i=i/10)
	{
		c++;
	}
	while(r>0)
	{
		a=r%10;
		sum=sum+pow(2,a);
		r=r/10;
		c--;
	}
	f(n==sum)
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}
        cout<<sum<<endl;
	return 0;

}
