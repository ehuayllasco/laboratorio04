#include "Persona.h"
#include "ArreglodePersonas.h"
#include <iostream>
using namespace std;
int main(){
	/*Persona p1;
	cout<<p1.Getnombre()<<endl;
	cout<<p1.Getapellido()<<endl;
	cout<<p1.getEdad()<<endl;
	Persona p2 ("edward","Huayllasco",22);
	cout<<p2.Getnombre()<<endl;
	cout<<p2.Getapellido()<<endl;
	cout<<p2.getEdad()<<endl;
	p2.SetNombre("Juan");
	p2.setApellidos("Robles");
	p2.SetEdad(24);
	cout<<p2.Getnombre()<<endl;
	cout<<p2.Getapellido()<<endl;
	cout<<p2.getEdad()<<endl;*/

	Persona p1("Edward","Huayllasco",22), p2("Solange","Romero",20), p3("Rosa","Carlos",50),p4("Jimena","Robles",25);
	Persona p5("Chale","mente",25);
	Persona a[]={p1,p2,p3,p4};
	ArreglodePersonas conjunto_personas(a,4);
	conjunto_personas.imprimir();
	cout<<conjunto_personas.getSize()<<endl;
	//conjunto_personas.redimensionar(1);
	conjunto_personas.insert(2,p5);
	conjunto_personas.imprimir();
	cout<<conjunto_personas.getSize();


	return 0;
}