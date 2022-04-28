#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	
	float n1;
	
	cout<<"Escriba un valor con decimales: ";
	cin>>n1;
	cout<<"El valor redondeado es:"<<fixed<<setprecision(0)<<n1;
}
