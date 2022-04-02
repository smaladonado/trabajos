#include <iostream>

using namespace std;

int main()
{
	double n1,n2,n3,n4,n5,n6,prom,paso,perdio;
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
	}
	else{	
		cout<<"perdio las materias con: "<<prom<<endl;
	}

    return 0;
}
