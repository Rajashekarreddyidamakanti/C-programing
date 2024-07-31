#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number:";
	cin>>n;
	if(n>0){
		cout<<"is a positive"<<endl;
	}else if(n<0){
		cout<<"is a negative"<<endl;
	}else{
		cout<<"is a zero"<<endl;
	}
	return 0;
}
