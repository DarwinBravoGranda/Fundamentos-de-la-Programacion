#include<iostream>
using namespace std;
int main()
{
	int c=0,l;
	float s=0,x,si=0,se=0;
	cout<<"Ingrese el limite de saldo : ";
	cin>>l;
	do{
		cout<<"Ingrese el saldo : $";
		cin>>x;
		c=c+1;
		s=s+x;
		
	 if(x>0)
    {
    	si=si+x;
    	
    	
    }	
	else
	if(x<-1)
	{
	
		se=se+x;
		
	}
		
		
	}while(c<l);
	cout<<"El Saldo Ingresado es :$ "<<si<<endl;
	cout<<"El Saldo Egresado es :$ "<<se<<endl;
	cout<<"Su Saldo Total es de :$"<<si+se<<endl;
	return(0);
}