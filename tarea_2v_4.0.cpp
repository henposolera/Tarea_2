//============================================================================
// Name        : o.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Ingrese el numero de Jugadores: " << flush;
	int jugadores =0;
	cin >> jugadores;
	string nombreJugador[5];
	for (size_t e = 1; e <= jugadores; e++) {
	  cout << "Escriba el nombre del jugador # " << e << " : " << flush;
	  cin >> nombreJugador[e];
	}



	int puntos[3][4];
	int total[3][4] = {
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
	};
	int totalRonda[5] = {0,0,0,0,0};
	int totalPuntosJugador[4] = {0,0,0,0};
	int toma = 0;
	for (size_t m = 1; m <= 5; m++) { // rondas
		cout << "Ronda " << m << ": " << endl;
		for (size_t a = 1; a <= jugadores; a++) { // aca va el numero de jugadores
			toma = 0;
			for (size_t i = 1; i < 3; i++)  // conteo de turnos
				for (size_t j = 1; j < 4; j++) {
					cout  << "Puntaje de "<< nombreJugador[a] << ". Turno # " << i << " " << ". Flecha # " << j << " : " << flush;
					cin >> puntos[i][j];
					totalPuntosJugador[a] = totalPuntosJugador[a] + puntos[i][j];
					total[i][j] = total[i][j] + puntos[i][j];
					toma = toma + puntos[i][j];
				}

			totalRonda[a] = toma;
			cout << "Puntos del Jugador " << a  << ": "<< toma << endl;

			cout << "Acumulado Jugador " << a << " : "<<  totalPuntosJugador[a] << endl;
		}
		cout << "Ronda" << m << " : " << endl;
		cout << nombreJugador[1] << ": " << totalRonda[1] <<  endl;
		cout << nombreJugador[2] << ": " << totalRonda[2] <<  endl;
		cout << nombreJugador[3] << ": " << totalRonda[3] <<  endl;
		cout << nombreJugador[4] << ": " << totalRonda[4] <<  endl;

	}
	cout << "Total de Puntos de " << nombreJugador[1] << ": " <<totalPuntosJugador[1] << endl;
	cout << "Total de Puntos de " << nombreJugador[2] << ": " <<totalPuntosJugador[2] << endl;
	cout << "Total de Puntos de " << nombreJugador[3] << ": " <<totalPuntosJugador[3] << endl;
	cout << "Total de Puntos de " << nombreJugador[4] << ": " <<totalPuntosJugador[4] << endl;
	return 0;
}
