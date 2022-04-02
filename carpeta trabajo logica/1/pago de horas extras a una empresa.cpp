#include <iostream>

using namespace std;

int main(){
double empleados,extra1,extra2,extra3,pagos,horas,total1,total2,total3,i,i1,i2,i3;
empleados=10,extra1=10,extra2=20,extra3=32,pagos=855000,i=1;

do{
cout<<"digame las horas extras del trabajador: ";
cin>>horas;

if(horas<=extra1)
{
	
	total1=(855000)/(100/10)+pagos;
	i1++;
	i++;
	}

else
{
	
	if(horas<=extra2)
	{
		
		total2=(855000)/(100/15)+pagos;
		i2++;
		i++;
	}
	else
	{
		if(horas<=extra3)
		{
			
		total3=(855000)/(100/20)+pagos;
		i3++;
		i++;
		
		}
	}
}
}while(i<10);

cout<<"numero de trabajadores de 10 horas extras: "<<i1<<endl;
cout<<"pagos de los trabajadores con 10 horas extras: "<<total1<<endl;

cout<<"numero de trabajadores de 20 horas extras: "<<i2<<endl;
cout<<"pago de los trabajadores con 20 horas extras: "<<total2<<endl;

cout<<"numero de trabajadores de 32 horas extras: "<<i3<<endl;
cout<<"pago de los trabajadores con 32 horas extras: "<<total3<<endl;


    return 0;
}
