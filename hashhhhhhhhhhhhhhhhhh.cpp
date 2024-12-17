#include<iostream>
using namespace std;

int main()
{
	int n,x;
	cout<<"Enter size of array\n";
	cin >> n;
	
	int arr[n];
	cout<<"Enter elements \n";
	for(int i = 0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int hash[64] = {0};
	for(int j = 0 ;j<n;j++)
	{
		hash[arr[j]] +=1;
	}
	cout<<"Enter no to search\n";
	cin>>x;
	
	cout<<hash[x]<<endl;
	return 0 ;
}
