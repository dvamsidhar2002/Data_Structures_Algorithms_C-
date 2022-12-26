#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
	int n;
	cout<<"Enter the size of the string according to you : ";
	cin>>n;
	char str[n];
	cout<<"\nEnter the string value according to your choice : ";
	cin>>str;
	cout<<"\nReversed String : ";
	for(int i = n;i>=0;i--)
	{
		cout<<str[i]<<" ";
	}
	
	return 0;
}
