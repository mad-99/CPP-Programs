#include<iostream>
using namespace std;
void readline(char a[],int maxLen){
	int i=0;
	char ch=cin.get();
	while(ch!='\n'){
		a[i]=ch;
		i++;
		if(i==(maxLen-1)){
			break;
		}
		ch=cin.get();
	}
	a[i]='\0'; 
	return;
}
int main()
{
	char a[1000];
	readline(a,1000);
	cout<<a<<endl;
	return 0;
}