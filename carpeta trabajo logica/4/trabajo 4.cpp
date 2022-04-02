#include <iostream>

using namespace std;

int main()
{
	int n,par,impar,i,imparc,parcon7;
	long double factorial;
    cout<<"digite numero: ";
    cin>>n;
    
    if(n%2==0){
    		par=n*n*n*n*n*n*n;
		parcon7=par;
		cout<<"resultado de par elevado ala 7: "<<parcon7<<endl;
	}
	else{
		factorial=1;
		for(i=1;i<=n;i++){
		
        factorial = factorial* i;}
        cout<<"resultado de su numero impar con contante: "<<factorial<<endl;
      }
		
	
	
	
    return 0;
}
