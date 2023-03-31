#include <iostream>
#include <cmath>
using namespace std;

/* Clase circulo para el cálculo de: Área, Diámetro y Perímetro*/
class Circulo {
  // Datos miembros PRIVADO
private:
  float radio;
  // El constructor, para pasar datos iniciales al objeto al ser instanciado
public:
  Circulo(float x){
    radio = x;
  }
  // Métodos miembros de la clase
  float area() { return radio * radio * 3.14159; }
float perimetro() {return 2 * 3.1416 * radio; }
float diametro() {return 2 * radio;}
};

/* Clase triangulo rectangulo para el cálculo de: hipotenusa, perimetro y altura*/
class triangulo_rectangulo{

// Datos miembros PRIVADO
private:
float cateto_a;
float cateto_b;
float cateto_c;

 // El constructor, para pasar datos iniciales al objeto al ser instanciado
public: 
triangulo_rectangulo(float ca, float cb, float cc){
  cateto_a=ca;
  cateto_b=cb;
  cateto_c=cc;
}
 // Métodos miembros de la clase
float hipotenusa(){
 
cateto_c=(cateto_a*cateto_a)+(cateto_b*cateto_b);
  cateto_c=sqrt(cateto_c);
  return cateto_c;
}

float perimetro(){
  return cateto_a + cateto_b + cateto_c;
}

float altura (){ return (cateto_a*cateto_b)/cateto_c;}

};


int main() {
  float r;
  //Se juega con la clase Circulo
  cout << "        Bienvenido       "<<endl<<endl;
  
cout<<"            circulo            "<<endl<<endl;
  cout<<" ingrese el radio: ";
  cin >> r;
  cout<<endl;
  //Se instancia el objeto circulo
  Circulo circ(r);

  //se muestra los metodos de la clase
  cout << "el area del circulo es: "<<circ.area()<<endl;
  cout << "el perimetro del circulo es: "<<circ.perimetro()<<endl;
 cout << "el diametro del circulo es: "<<circ.diametro()<<endl;
  
/**********************************************************************/
cout<<endl<<endl;
  cout<<"            triangulo rectangulo            "<<endl<<endl;  

float a, b;
  float c;

cout<<"ingrese la medida del cateto a: ";
  cin>>a;
  cout<<endl;
cout<<"ingrese la medida del cateto b: ";
  cin>>b;
  cout<<endl;
  
  /*Se instancia el objeto circulo*/
triangulo_rectangulo t_r(a,b,c);

  //se muestra los metodos de la clase
  cout<<"la hipotenusa del triangulo rectangulo es: "<<t_r.hipotenusa( )<<endl;
  cout << "el perimetro del triangulo rectangulo es: "<<t_r.perimetro()<<endl;
    cout << "la altura del triangulo rectangulo es: "<<t_r.altura()<<endl;
  

  return 0;
}
