#include <iostream>

using namespace std;
int main(){
	
	int a,b;
	cout<<"Valor a: ";
	cin>>a;
	cout<<"Valor b: ";
	cin>>b;
	
	if(a%b==0){
		cout<<"El valor "<<a<<" es divisible entre "<<b;
	}
	else if(b%a==0){
		cout<<"El valor "<<b<<" es divisible entre "<<a;
	}
	else{
		cout<<"Ninguno es divisible entre el otro";
	}
	
}
