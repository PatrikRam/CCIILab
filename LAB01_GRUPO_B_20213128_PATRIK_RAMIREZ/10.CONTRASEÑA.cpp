#include <iostream>

using namespace std;
int main(){
	
	char palabra[]="algo";
	char p[10];
	
	do{
		cout<<"Escriba la contrase�a: ";	
		cin>>p;	
		}
	while (palabra==p);{
	cout<<"CORRECTO";
}
}
