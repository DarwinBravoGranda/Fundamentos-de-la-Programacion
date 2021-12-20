#include<iostream>

using namespace std;
int main()
{
	int n=0, ca=0, cr=0 ;
	float z;
	
    do {
	cout<<"Ingresar todos los Promedios: ";
    cin>>z;
    cout<< endl;
    n=n+1;
     if(z>=7)
    {
    
    	ca=ca+1;
    	
    }	
	else
	if(z<=5)
	{
	
		cr=cr+1;
	}
	}while(n<30);
	cout<<n;
	cout<<"Estudiante que fueron Aprobados : "<<ca<<endl;
	cout<<"Estudiantes que fueron Reprobados: "<<cr<<endl;
	
    return 0;
}