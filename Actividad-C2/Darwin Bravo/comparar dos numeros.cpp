#include <iostream>
using namespace std;

int main()
{
	float X,Y,Z;
	cout<<"Introduzca x: "; cin>>X;
	cout<<"Introduzca Y: "; cin>>Y;
	
	if (X==Y){
		
	cout<<"El valor de x: " <<X<< "es igual a Y: " <<Y<<endl;

}	else{
	
	if (X<Y) {
	cout<<"El valor de X= " <<X<<  " es menor a Y" <<Y<<endl;
	
	}else{
	 cout<<"El valor de Y= " <<Y<<  " es menor a X" <<X<<endl;
	 }
	}
	return 0;
} 
