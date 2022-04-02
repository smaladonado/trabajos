#include <iostream>

using namespace std;
/*Si una corbata cuesta una sexta parte de lo que cuesta un traje, un cinturón cuesta una quinta parte del mismo traje, 
los zapatos la mitad del valor del traje y la camisa dos tercios del valor de zapatos. Elabore un programa que le permita al 
usuario armar su atuendo perfecto, con solo pedirle el valor de una de las prendas de vestir y las prendas que va a llevar.*/
int main()
{
	int tra,cor,cn,zap,cam,r,i;
do{
	cout<<"digame el precio del traje: ";
	cin>>tra;

	cor=tra/6;
	cn=tra/5;
	zap=tra/2;
	cam=zap/3;
	
	cout<<"el valor del traje es: "<<tra<<endl;
	cout<<"el valor de la corbata es: "<<cor<<endl;
	cout<<"el valor del cinturo es: "<<cn<<endl;
	cout<<"el valor de los zapatos es: "<<zap<<endl;
	cout<<"el valor de la camisa es: "<<cam<<endl;
	cout<<"digite el 0 si quiere saber el precio de otro traje: ";
	cin>>r;
	i++;
	}while(r==0);
	 return 0;
}
