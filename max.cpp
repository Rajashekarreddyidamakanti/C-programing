#include<iostream>
using namespace std;
int maxofthree(int a,int b,int c){
	return (a>b)?(a>c ? a:c):(b>c ? b:c);
}
int main(){
	int n1,n2,n3;
	cout<<"enter the three numbers:";
	cin>>n1>>n2>>n3;
	int max=maxofthree(n1,n2,n3);
	cout<<"max of three numbers:"<<max<<endl;
	return 0;
}
