#include <iostream>
using namespace std;
int main(){
	int a,b,swap;
	cout<<"enter your first number";
	cin>>a;
	cout<<"enter your second number";
	cin>>b;
	swap=a;
	a=b;
	b=swap;
	cout<<"swap two value"<<endl;
	cout<<"your first number"<<a<<b<<endl;
	cout<<"your first number"<<b<<endl;
}
