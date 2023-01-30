#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

int kadanes(int array[], int len){
    int highestMax=0;
    int currentElementMax=0;
    for(int i = 0; i < len; i++){
      currentElementMax =max(array[i],currentElementMax + array[i]) ;
      highestMax = max(highestMax,currentElementMax);
   }
   return highestMax;
}

int main(){
    int n;
    cout<<"Enter any length of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
   }
   cout << "The Maximum Sum is: "<<kadanes(arr,n) << endl;
   return 0;
}