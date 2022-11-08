#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,n,temp;
	cout<<"Enter number of elements of array: ";
	cin>>a;
	int A[a];
	cout<<"Enter elements of array: ";
	for(int i=0;i<a;i++){
		cin>>A[i];
	}
	cout<<"Traversing Array: ";
	for(int i=0;i<a;i++){
		cout<<A[i]<<" ";
	}
	cout<<"\nEnter index of element to be deleted: ";
	cin>>n;
	for(int i=n;i<a;i++){
		A[i]=A[i+1];
	}
	a--;
	cout<<"Array after deletion: ";
	for(int i=0;i<a;i++){
		cout<<A[i]<<" ";
	}	
	return 0;
}
