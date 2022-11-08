#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;
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
	return 0;
}
