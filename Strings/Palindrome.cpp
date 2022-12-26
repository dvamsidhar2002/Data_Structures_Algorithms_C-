#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

int main(){
	int n,i,j,temp=0;
	cout<<"Enter the length of the string(your choice) : ";
	cin>>n;
	char str[n];
	cin>>str;
	
	for(i=0,j=n-1;i<n/2;i++,j--)
	{
		if(str[i] == str[j]){
			++temp;
		}
		else{
			temp=0;
			break;
		}
	}
	
	if(temp==0){
		cout<<"It is not a PALINDROME";
	}
	else{
		cout<<"It is a PALINDROME";
	}
	return 0;
}
