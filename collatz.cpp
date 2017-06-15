#include<iostream>
#include <string>
#include<stdlib.h> 
using namespace std;

int main(){
	system ("color 0A" );

	long long numero;
	cout << "Ingrese el numero a evaluar: ";
    cin >> numero;
    cout<<"\n";
    int contador =0;
    while(numero != 0 || numero >= 1){
    	if(numero < 0){
    		cout <<"Error no se admiten numeros negativos.\n"<<endl;
    		break;
		}else if(numero== 1){
			cout <<"El numero 1 es impar pero no queremos un ciclo infinito, asi que aqui paramos.\n"<<endl;
			cout <<"El numero de pasos para llegar a 1 fueron: "<<contador<<"\n"<<endl;
			break;
		}else if(numero % 2 == 0){
			cout <<"El numero "<<numero<<" es Par, "<<numero<<"/2 = "<<numero/2<<"\n"<<endl;
			numero=numero/2;
			contador =contador+1;
		}else{
			cout <<"El numero "<<numero<<" es impar, "<<numero<<"x3+1 = "<<(numero*3)+1<<"\n"<<endl;
			numero=(numero*3)+1;
			contador =contador+1;
		}
		
	}
	system("PAUSE");
	return(0);
}
