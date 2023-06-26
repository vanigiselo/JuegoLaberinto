#include "Jugador.h"
#include <iostream>

// #include <string>

// Constructor por defecto
Jugador::Jugador(): vida(6),encontrarCofre(0), pasos(0) {
	//vida = 6;
	//SetVida(6);
	// encontrarCofre = 0;
}

// Metodos

void Jugador::Caminar(){
	encontrarCofre++;
	pasos++;
    std::cout << " Has hecho " << pasos << " pasos \n" << std::endl;
	if (pasos >= 20) {
		Ganar();
	}else if (encontrarCofre >= 5)
	{
		std::cout << "Has encontrado un cofre \n" << std::endl;
		AgarrarCofre();
		encontrarCofre = 0;
	}
}

void Jugador::AgarrarCofre() {

	bool cofre;
	int abrir = 1;

	std::cout << "Esta dispuesto a abrir el cofre? Esto puede beneficiarlo o no \n" << std::endl;
	std::cout << "Si quiere abrir el cofre presione 1, si desea seguir su camino, \n" << std::endl;
	std::cout << "salte el cofre presionando 2 \n" << std::endl;
	std::cin >> abrir;

	switch (abrir)
	{
	case 1:
		if (abrir == 1) {
			AbrirCofre();
		}
		break;
	case 2:
		if (abrir == 2) {
			Saltar();
		}
		break;
	default:
		if (abrir != 1 && abrir != 2) {
			std::cout << "Esta opcion no esta disponible, presione 1 o 2 \n" << std::endl;
		}
		break;
	}
	

}

void Jugador::AbrirCofre() {

	std::cout << "El cofre se ha abierto y ha encontrado un/a " << std::endl;
	int num;
	srand(time(NULL));
	num = 1 + rand() % (10 - 1);
	if (num <= 5)
	{
		Cortar();
		SetVida(GetVida() + 2);
		int nuevaVida = GetVida();
		std::cout << "Te quedan  " << nuevaVida << " vidas. \n" << std::endl;
		pasos++;
	}
	else if (num >=6) {
		Picar();
		SetVida(GetVida() - 2);
		int nuevaVida = GetVida();
		std::cout << "Te quedan  " << nuevaVida << " vidas. \n" << std::endl;
		if (nuevaVida <= 0) {
			std::cout << " NO te quedan vidas . \n" << std::endl;
			std::cout << " \n" << std::endl;
			Finalizar();

		}
	}
	// armar ramdom y llamar a hacha o a serpiente
		//armar objetos y random y llamarlo aca
}

void Jugador::Saltar(){
	
	SetVida(GetVida() - 1);
	int nuevaVida = GetVida();
	std::cout << "Has decidido continuar tu viaje sin abrir el cofre, pierdes 1 vida \n" << std::endl;
	std::cout << "Te quedan  " << nuevaVida << " vidas. \n" << std::endl;

	if (nuevaVida <= 0) {
		std::cout << " NO te quedan vidas . \n" << std::endl;
		std::cout << " \n" << std::endl;
		Finalizar();

	}
	


}

void Jugador::GirarDer() {

	encontrarCofre++;
	pasos++;
	std::cout << "Has girado a la derecha y has hecho " << pasos << " pasos \n" << std::endl;
	
	if (pasos >= 20) {
		Ganar();
	}else if (encontrarCofre >= 3)
	{
		std::cout << "Has encontrado un cofre \n" << std::endl;
		AgarrarCofre();
		encontrarCofre = 0;
	}
	
}

void Jugador::GirarIzq() {
	encontrarCofre++;
	pasos++;
	std::cout << "Has girado a la izquierda y has hecho " << pasos << " pasos \n" << std::endl;
	
	if (pasos >= 20) {
		Ganar();
	}else if (encontrarCofre >= 1)
	{
		std::cout << "Has encontrado un cofre \n" << std::endl;
		AgarrarCofre();
		encontrarCofre = 0;
	}

}

void Jugador::Volver() {
    pasos--;
	std::cout << " Hemos retrocedido, has hecho " <<  pasos << " pasos \n" << std::endl;
}

void Jugador::Finalizar() {
	pasos = 0;
	encontrarCofre = 0;
	std::cout << " Ha finalizado el juego. \n" << std::endl;
	std::cout << " \n" << std::endl;
	std::cout << " 0 --> Volver al menu inicial \n" << std::endl;

}

 void Jugador::Ganar() {
 
   std::cout << " Encontraste la salida, HAS GANADO! \n" << std::endl;
   Finalizar();
   }

//implementacion de Getter
int Jugador::GetVida() const {
	int temp = vida;
	return temp;
}

//implementcion de Setter
void Jugador::SetVida(int valor) {
	int varTemp = vida - valor;
	if (varTemp > 0) {
		vida = valor;
	}
	
}