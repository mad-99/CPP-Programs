#include<iostream>
using namespace std;
int main()
{
	int n,left=-1,right=-1;
	cin>>n;
	int a[100];
	int maximumsum=0;
	int currentsum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			currentsum=0;
			for(int k=i;k<=j;k++){
				currentsum +=a[k];
				cout<<currentsum<<"\t";
			}
			if(currentsum>maximumsum){
				maximumsum = currentsum;
				left=i;
				right=j;
			}
		}
	}
	cout<<endl;
	cout<<maximumsum<<endl;
	for(int i=left;i<=right;i++)
	{
		cout<<a[i]<<" ,";
	}
	return 0;
}