#include <iostream>
using namespace std;
int main()
{
	string n,reversed;
	cout<<"enter str:";
	cin>>n;
	for (int i=n.length();i>=0;i--)
	{
		reversed+=n[i];
		
	}
	cout<<"reversed string:"<<reversed;
}
