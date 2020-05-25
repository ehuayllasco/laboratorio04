#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
using namespace std;
class Persona{
private:
	string nombre;
	string apellido;
	int edad;
public:
	Persona();
	Persona(string, string,int);
	string Getnombre() const;
	string Getapellido()const ;
	int getEdad() const;
	void SetNombre(const string);
	void setApellidos(const string);
	void SetEdad(const int);
	void imprimir();
};
Persona::Persona(){
	nombre='o';
	apellido='o';
	edad=0;
}
Persona::Persona(string _nombre,string _apellido, int _edad){
	nombre= _nombre;
	apellido= _apellido;
	edad=_edad;
}
string Persona::Getnombre() const {
	return nombre;
}
string Persona::Getapellido() const {
	return apellido;
}
int Persona::getEdad() const {
	return edad;
}
void Persona::SetNombre(const string _nombre){
	nombre=_nombre;
}
void Persona::setApellidos(const string _apellidos){
	apellido=_apellidos;
}
void Persona::SetEdad(const int _edad){
	edad=_edad;
}
void Persona::imprimir(){
	cout<<"mi nombres es: "<<nombre<<" "<<apellido<<" mi edad es: "<<edad<<endl;
}
#endif