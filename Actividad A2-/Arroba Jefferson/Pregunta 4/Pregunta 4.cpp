#include<iostream>
using namespace std;
int main()
{
	int n=0, ca=0, cr=0 ;
	float b;
	
    do {
	cout<<"Ingresar Promedios ";
    cin>>b;
    cout<< endl;
    n=n+1;
     if(b>=7)
    {
    
    	ca=ca+1;
    	
    }	
	else
	if(b<=5)
	{
	
		cr=cr+1;
	}
	}while(n<30);
	cout<<n;
	cout<<"Estudiante Aprobados : "<<ca<<endl;
	cout<<"Estudiantes Reprobados "<<cr<<endl;
	
    return 0;
}

