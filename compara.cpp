#include<iostream>
using namespace std;
//CREADO H onorio Edgar Peña Vargas
int main() 
{
	float H,E;
	cout<<"INGRESE UN NUMERO:   ";
	cin>> H;
	cout<<"INGRESE EL SEGUNDO NUMERO:  ";
	cin>> E;
	if(H==E)
	{
		cout<<" SON IGUALES:  ";
	}
	
	else if(H>E)
	{
		cout<<" EL PRIMERO ES MAYOR :  ";
	}
	else if(H<E)
	{  
		cout<<"EL SEGUNDO ES MAYOR :  ";
	}
	return(0);
}
