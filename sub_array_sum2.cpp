#include<iostream>
using namespace std;
int main()
{
	int n,left=-1,right=-1;
	cin>>n;
	int a[100];
	int cs[100]={0};
	int maximumsum=0;
	int currentsum=0;
	cin>>a[0];
	cs[0]=a[0];
	for(int i=1;i<n;i++){
		cin>>a[i];
		cs[i]=cs[i-1]+a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			currentsum=0;
			currentsum=cs[j]-cs[i-1];
			cout<<currentsum<<"\t";
			
			if(currentsum>maximumsum){
				maximumsum = currentsum;
				left=i;
				right=j;
			}
		}
	}
	cout<<maximumsum<<endl;
	for(int i=left;i<=right;i++)
	{
		cout<<a[i]<<" ,";
	}
	return 0;
}