#include<iostream>
using namespace std;
int main(){
	int x=1800;
	int *p;//defining a variable
	p=&x;
	cout<<x<<endl;
	cout<<p<<endl;
	cout<<*p;
	return 0;
}
