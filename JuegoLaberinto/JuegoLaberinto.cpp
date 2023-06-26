// JuegoLaberinto.cpp : 
//

#include <iostream>
#include "Jugador.h"
//#include "Hacha.h"
//#include <string>

int main()
{
  //declaracion de variables
	int inicializar_juego;
	int menuJuego;
	

	//constructor jugador
	Jugador npc;

	//implementacion juego
	do {
		std::cout << "Bienvenido al laberinto, aqui caminaremos juntos un buen rato.... \n" << std::endl;
		std::cout << "Podra encontrar cofres secretos y abrirlos ¿Estas listo?  \n" << std::endl;
		std::cout << "Presiona 1 para iniciar o 2 para salir \n" << std::endl;
		std::cin >> inicializar_juego;
		
		if (inicializar_juego == 1) {
			std::cout << " \n" << std::endl;
			std::cout << "Hemos comenzado, vamos a jugar con los siguientes comandos: \n" << std::endl;
			std::cout << " 5 --> Caminar hacia adelante \n" << std::endl;
			std::cout << " 3 --> Girar hacia la derecha \n" << std::endl;
			std::cout << " 1 --> Girar hacia la izquierda \n" << std::endl;
			std::cout << " 2 --> Retroceder \n" << std::endl;
			std::cout << " \n" << std::endl;
			std::cout << " 0 --> Volver al menu inicial \n" << std::endl;
			
			
				do {

					std::cin >> menuJuego;


					if (menuJuego == 5) {
					    npc.Caminar();

					}
					else if (menuJuego == 3) {
						npc.GirarDer();

					}
					else if (menuJuego == 1) {
						npc.GirarIzq();

					}
					else if (menuJuego == 2) {
						npc.Volver();

					}
					else {
						std::cout << "Opcion incorrecta, pruebe presionando 1,2,3,5 \n" << std::endl;
					}


				} while (menuJuego != 0);
								

		}else if (inicializar_juego == 2) {
		 // std::cout << "Has salido del juego \n" << std::endl;
		}else {
			std::cout << "Opcion incorrecta \n" << std::endl;
		}

	} while (inicializar_juego != 2);

	std::cout << "Gracias por jugar \n" << std::endl;
}

