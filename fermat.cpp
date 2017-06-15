#include<iostream>
#include <string>
#include<stdlib.h> 
#include <math.h>

using namespace std;
int main(){
	system ("color 0A" );
	
	long long n, numero, a,b,c;
	b=1;
	cout << "Ingrese el numero tope en las iteraciones para buscar la terna: a^n + b^n = c^n \n";
    cin >> numero;
	for(n=3; n<=numero; n++){
			for(a=1; a<=numero; a++){
					for(c=numero; c>=0; c--){
							if(pow(a,n)+pow(b,n)==pow(c,n)){
								cout<<"Fermat estaba errado. Se cumple a^n + b^n = c^n \n ya que: "<<a<<"^"<<n<<"+"<<b<<"^"<<n<<"="<<c<<"^"<<n<<"\n"<<endl;
							}else if(a==numero && c==0){
								n=3;
								b=b+1;
								a=1;
								c=numero;											
							}else if(b==numero){
								break;
							}
							else{
								cout<<" Fermat estaba en lo correcto. \n No se ha encontrado ninguna terna que cumpla que: a^n + b^n = c^n \n"<<endl;
							}
					}
			}
	}
	system("PAUSE");
	return(0);
}
