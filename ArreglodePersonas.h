#ifndef ARREGLODEPERSONAS_H
#define ARREGLODEPERSONAS_H
#include "Persona.h"
#include <iostream>
using namespace std;
class ArreglodePersonas: public Persona{
private:
	Persona *p1;
	int tamanio;
public:
	ArreglodePersonas(const Persona [],const int);
	ArreglodePersonas(const ArreglodePersonas &);
	~ArreglodePersonas();
	void redimensionar(int);
	void push_back(const Persona &);
	void insert(const int, const Persona &);
	void remove(const int);
	int getSize() const;
	void clear();
	void imprimir();
};

ArreglodePersonas::ArreglodePersonas(const Persona personas[],const int tam){
	tamanio=tam;
	p1= new Persona [tamanio];
	for(int i=0;i<tamanio;i++){
		*(p1+i)=personas[i];
	}
}
ArreglodePersonas::ArreglodePersonas(const ArreglodePersonas &o){
	 tamanio=o.tamanio;
	 p1=new Persona[tamanio];
	 for(int i=0;i<o.tamanio;i++){
		*(p1+i)=*(o.p1+i);
	}
}
ArreglodePersonas::~ArreglodePersonas(){

}
void ArreglodePersonas::redimensionar(int n){
	Persona *aux;
	aux= new Persona [tamanio];
	for(int i=0; i<tamanio; i++)
		*(aux+i) = *(p1+i);
	
	delete [] p1;
	int t=tamanio;
	tamanio = tamanio + n;
	p1 = new Persona [tamanio];

	for(int i=0; i<t; i++)
		*(p1+i) = *(aux+i);
	delete [] aux;
}
void ArreglodePersonas::push_back(const Persona &p){
	this->redimensionar(1);
	*(p1+tamanio-1)=p;

}
void ArreglodePersonas::insert(const int pos, const Persona &p){
	this->redimensionar(1);
	for(int i=tamanio-1;i>pos;i--){
		*(p1+i)=*(p1+i-1);//el ultimo nodo que esta vacion, tendra el valor dell penultimo
	}
	*(p1+pos)=p;
	
}
void ArreglodePersonas::remove(const int pos){
for(int i=pos;i<tamanio-1;i++){
	*(p1+i)=*(p1+i+1);
}
this->redimensionar(-1);	
}
int ArreglodePersonas::getSize()const{
	return tamanio;
}
void ArreglodePersonas::clear(){
	this->redimensionar(-tamanio);
}
void ArreglodePersonas::imprimir(){
	for(int i=0;i<tamanio;i++){
		(p1+i)->imprimir();

	}
}
#endif