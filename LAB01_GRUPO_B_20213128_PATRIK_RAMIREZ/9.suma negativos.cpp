#include <iostream>

using namespace std;
int main(){
	
	int n, suma;
	for (int i=0; i<10; i++){
		cout<<"Numero?: ";
		cin>>n;
		if (n<0){
			suma=suma+n;
		}
	}
	cout<<"La suma de negativos es: "<<suma;
	
	
}
