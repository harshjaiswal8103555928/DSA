#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,n;
	cout<<"Enter number of elements of array: ";
	cin>>a;
	int A[a];
	cout<<"Enter nelements of array: ";
	for(int i=0;i<a;i++){
		cin>>A[i];
	}
	cout<<"Traversing Array: ";
	for(int i=0;i<a;i++){
		cout<<A[i]<<" ";
	}
	cout<<"\nEnter index at which number should be inserted: ";
	cin>>n;
	a++;
	for(int i=a-2;i>=n;i--){
		A[i+1]=A[i];
	}
	cout<<"/nEnter number to be inserted: ";
	cin>>A[n];
	for(int i=0;i<a;i++){
		cout<<A[i]<<" ";
	}
	return 0;
}
