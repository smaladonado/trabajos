/*Un grupo de jóvenes emprendedores sale de compras para prepararse a la realización de la presentación de su propuesta de negocio y
 al llegar a su casa cada uno quiere calcular el valor total invertido en su atuendo, si se sabe que cada uno compró cuatro camisas,
  tres pantalones, dos pares de zapatos, una chaqueta y 4 libros (Programación, Innovación, Emprendimiento y Lógica de Programación).
   Tenga presente que cada artículo tiene un valor diferente.*/

#include <iostream>

using namespace std;

int main()
{
	int cam,pan,zap,cha,lib,total1,total2,total3,total4,total5,totaldeltotal;
    cout<<"digite el precio de las camisas: ";
    cin>>cam;
    cout<<"digite el precio de los pantalones: ";
    cin>>pan;
    cout<<"digite el precio de los zapatos: ";
    cin>>zap;
    cout<<"digite el precio de la chaqueta: ";
    cin>>cha;
    cout<<"digite el precio de los libros: ";
    cin>>lib;
    
    total1=cam+cam+cam+cam;
    total2=pan+pan+pan;
    total3=zap+zap;
    total4=cha;
    total5=lib+lib+lib+lib;
    totaldeltotal=total1+total2+total3+total4+total5;
    
    cout<<"el total de los articuloses: "<<totaldeltotal<<endl;

    return 0;
}
