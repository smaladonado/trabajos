#include <iostream>

using namespace std;

int main()
{
	int n,a,p,c,suma,m;
	p=0;
	 cout<<"digite un numero: ";
	 cin>>n;
	
	 	a=n+1;
	 	c=n;
		 
		 do{
		 
	if(a%2==0){
		
		p=p+1;
		suma+=a;
	}
	else{
		a=a+1;
		p=p+1;
		suma+=a;
	}
	 cout<<"el numero par es: "<<a<<endl;
	 	a++;
	 }while(p<3);
	 
	 cout<<"la suma de los 3 numeros es: "<<suma<<endl;
	 
	 m=suma*c;
	 
	 cout<<"la suma de los numeros pares por el numero ingresado: "<<m<<endl;
	 
  

    return 0;
}
