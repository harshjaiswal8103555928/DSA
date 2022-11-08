#include <iostream>
using namespace std;
int main() {
    int arr[10]={1,2,3,1,4,5,6,1,8,10};
    int i,num,count=0;
    cout<<"Enter number to be searched= ";
    cin>>num;
    for(i=0;i<10;i++){
        if(arr[i]==num){
    		cout<<"Number is at "<<i<<" index."<<endl;
			break;    
        }
    }
    for(i=0;i<10;i++){
        if(arr[i]==num){
            count=count+1;
        }
    }
    cout<<"The number is "<<count<<" times in the array.";
    return 0;
}
