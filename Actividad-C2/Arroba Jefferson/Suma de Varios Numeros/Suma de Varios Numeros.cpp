#include<iostream>
using namespace std;
int main()
{
	int c=0,n;
	float s=0,q;
	cout<<"Ingrese Los valores a sumar : ";
	cin>>n;
	do{
		cout<<"Ingrese el Valor"<<c+1;
		cin>>q;
		c=c+1;
		s=s+q;
		
	}while(c<n);
	cout<<"El resultado de La Suma de los Valores es : "<<s<<endl;
	return(0);
}
