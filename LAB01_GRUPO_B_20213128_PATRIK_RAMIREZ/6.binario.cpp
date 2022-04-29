#include <iostream>

using namespace std;
int main(){
	
	int n1;
	short binario[8];

	do{
		cout<<"Escriba un valor entre 100 y 999: ";	
		cin>>n1;
	
		
		}
	while (n1<100 || n1>999);{
	
	for(int i=0; i<8; i++){
			binario[i]=n1%2;
			n1=n1/2;
		}
		cout<<"\nEl numero en binario es: ";
		for (int i=7; i>=0; i--){
			cout<<binario[i];
		}	
	}	
}

