#pragma once
#include"Hacha.h"
#include "Serpiente.h"

class Jugador : public Hacha, Serpiente
{

 public:
	// Jugador(const int vida); // Constructor por defecto
	Jugador();


	//metodos
	void Caminar();
	void AgarrarCofre();
	void Saltar();
	void GirarDer();
	void GirarIzq();
	void Volver();
	void AbrirCofre();
	void Finalizar();
	void Ganar();

	//Getters
	int GetVida() const;

	//Setters
    void SetVida(int valor);

private:
	//propiedades
	int vida;
	int encontrarCofre;
	int pasos;
	
};
