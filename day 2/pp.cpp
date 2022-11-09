#include<iostream>
using namespace std;
int main(){
	int ar[5]={10,20,30,40,50};
	int *p=ar;
	cout<<*p;
	cout<<ar;
	cout<<&ar[0];
	return 0;
}
