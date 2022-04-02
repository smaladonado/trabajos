#include <iostream>

using namespace std;

int main()
{
	double n1,n2,n3,n4,n5,n6,prom,nueva,i,pa,per;
	i=1;
	do{

    cout<<"digite nota 1: ";
    cin>>n1;
    cout<<"digite nota 2: ";
    cin>>n2;
    cout<<"digite nota 3: ";
    cin>>n3;
    cout<<"digite nota 4: ";
    cin>>n4;
    cout<<"digite nota 5: ";
    cin>>n5;
    cout<<"digite nota 6: ";
    cin>>n6;
    
    prom=(n1+n2+n3+n4+n5+n6)/(6);
    
    cout<<"promedio de las notas: "<<prom<<endl;
    
    if(prom>=3.5){
    	cout<<"paso las materias con: "<<prom<<endl;
    	pa++;
	}
	else{	
		cout<<"perdio las materias con: "<<prom<<endl;
		per++;
	}
		cout<<"estudiante: "<<i<<endl;
	i++;
	
	cout<<"cantidad de estudiantes que pasaron: "<<pa<<endl;
	cout<<"cantidad de estidiantes que perdieron: "<<per<<endl;
	cout<<"digite 0 si quiere ingrasar nuevas notas de lo contrario digite cualquier numero: ";
	cin>>nueva;

	}while(nueva==0);
	

    return 0;
}
