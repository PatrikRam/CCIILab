#include <iostream>

using namespace std;
int main(){
	
	int min, horas, agregar, mtotal, mhoras, mtotal2;
	int div, c=0;
	cout<<"Ingrese la hora: ";
	cin>>horas;
	cout<<"Ingrese los minutos: ";
	cin>>min;
	cout<<"Ingrese los minutos a agregar: ";
	cin>>agregar;
	
	mtotal=min+agregar;
	
 	if (mtotal<=60){
 		if(horas==13){
 		horas=1;
 		cout<<"La hora es: "<<horas<<":"<<mtotal;
 		}
 		else if(horas==14){
 		horas=2;
 		cout<<"La hora es: "<<horas<<":"<<mtotal;
 		}
 		else if(horas==15){
 		horas=3;
 		cout<<"La hora es: "<<horas<<":"<<mtotal;
 		}
 		else if(horas==16){
 		horas=4;
 		cout<<"La hora es: "<<horas<<":"<<mtotal;
 		}
 		else if(horas==17){
 		horas=5;
 		cout<<"La hora es: "<<horas<<":"<<mtotal;
 		}
 		else if(horas==18){
 		horas=6;
 		cout<<"La hora es: "<<horas<<":"<<mtotal;
 		}
 		else if(horas==19){
 		horas=7;
 		cout<<"La hora es: "<<horas<<":"<<mtotal;
 		}
 		else if(horas==20){
 		horas=8;
 		cout<<"La hora es: "<<horas<<":"<<mtotal;
 		}
 		else if(horas==21){
 		horas=9;
 		cout<<"La hora es: "<<horas<<":"<<mtotal;
 		}
 		else if(horas==22){
 		horas=10;
 		cout<<"La hora es: "<<horas<<":"<<mtotal;
 		}
 		else if(horas==23){
 		horas=11;
 		cout<<"La hora es: "<<horas<<":"<<mtotal;
 		}
 		else if(horas==24){
 		horas=0;
 		cout<<"La hora es: "<<horas<<":"<<mtotal;
 		}
 		
 	}
 	if (mtotal>60){
 		mtotal2=mtotal%60;
 		
 		while (mtotal>60){
 		mtotal=mtotal/60;
 		c++;
 		}
 		mhoras=horas+c;
 		if(mhoras==13){
 		horas=1;
 		cout<<"La hora es: "<<horas<<":"<<mtotal2;
 		}
 		else if(mhoras==14){
 		horas=2;
 		cout<<"La hora es: "<<horas<<":"<<mtotal2;
 		}
 		else if(mhoras==15){
 		horas=3;
 		cout<<"La hora es: "<<horas<<":"<<mtotal2;
 		}
 		else if(mhoras==16){
 		horas=4;
 		cout<<"La hora es: "<<horas<<":"<<mtotal2;
 		}
 		else if(mhoras==17){
 		horas=5;
 		cout<<"La hora es: "<<horas<<":"<<mtotal2;
 		}
 		else if(mhoras==18){
 		horas=6;
 		cout<<"La hora es: "<<horas<<":"<<mtotal2;
 		}
 		else if(mhoras==19){
 		horas=7;
 		cout<<"La hora es: "<<horas<<":"<<mtotal2;
 		}
 		else if(mhoras==20){
 		horas=8;
 		cout<<"La hora es: "<<horas<<":"<<mtotal2;
 		}
 		else if(mhoras==21){
 		horas=9;
 		cout<<"La hora es: "<<horas<<":"<<mtotal2;
 		}
 		else if(mhoras==22){
 		horas=10;
 		cout<<"La hora es: "<<horas<<":"<<mtotal2;
 		}
 		else if(mhoras==23){
 		horas=11;
 		cout<<"La hora es: "<<horas<<":"<<mtotal2;
 		}
 		else if(mhoras==24){
 		horas=0;
 		cout<<"La hora es: "<<horas<<":"<<mtotal2;
 		}
 	}
 		
 		
	}
