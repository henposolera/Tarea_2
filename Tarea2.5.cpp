//============================================================================
// Name        : 5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;



int main() {
int total = 0;   // suma todos los puntajes
int test[3][4]; // empieza en 1, 1 linea por turno de 3 flechas
int jugador[5]; // empieza en 1, total de 4 jugadores
int nJugadores; // numero de jugadores
string nombre[4];
string nombrePerdedor;
string perdedor[5];
int tiro[] = {0,0,0,0,0,0};
//int ronda =1;
string almuerzo[5];
int numRonda[5];
int menor;
//int tiro1 =0;

	for (size_t r = 1; r < 6; r++) {
	cout << "Ronda " << r << endl;
	cout << "Escriba el numero de jugadores: " << flush;
	cin >> nJugadores;
	menor = 61;
	while (nJugadores < 1 || nJugadores > 4 ) {
	  cout <<  "Error: numero de jugadores incorrecto." << endl;
		cout << "Se permiten 2, 3, 4 jugadores" << endl;
		cout << "Escriba el numero de jugadores: " << flush;
		cin >> nJugadores;
	}

	  for (size_t a = 1; a <= nJugadores; a++) {
	    cout << "Jugador " << a << ":" << endl;
			cout << "Nombre Jugador " << a << ": " << flush;
			cin >> nombre[a];
	    for (size_t i = 1; i < 3; i++) {
	      for (size_t j = 1; j < 4; j++) {
	        cout << "turno " << i << " - " <<  "flecha "<< j  <<  ": "<< flush;
	        cin >> test[i][j];
	        while (test[i][j] < 1 || test[i][j] > 10) {
	          cout << "Valor incorrecto" << endl;
	        	cout<< "turno " << i << " - " <<  "flecha "<< j  <<  ": "<< flush;
	        	cin >> test[i][j];
	        }
	        total = total + test[i][j];
	      }
	      jugador[a] = test[1][1] + test[1][2]+ test[1][3] + test[2][1] + test[2][2] + test[2][3];



	    }
	    cout << "Total Jugador " << nombre[a] << " #" << a << ": " << jugador[a] << endl;
	    if (jugador[a] <= menor) {
	    	menor= jugador[a];
	    	nombrePerdedor = nombre[a];

	    }


	  }
	  numRonda[r] = r;
	  cout << "El puntaje menor es: "  << nombrePerdedor << " con " << menor << " puntos" << endl;
	  cout << "Tire la flecha para determinar almuerzo castigo" << endl;
	  cout << "Puntaje del Tiro: " << flush;
	  cin >> tiro[r];
	  perdedor[r]= nombrePerdedor;
	  //cout << "tiro: " << tiro[ronda] << endl;


	  switch (tiro[r]) {
	  case 1:
	    almuerzo[r] = "Un confite";
	    break;
	  case 2:
	    almuerzo[r] = "1 milan";
	    break;
	  case 3:
	    almuerzo[r] = "Una melcocha";
	    break;
	  case 4:
	    almuerzo[r] = "Una merendina";
	    break;
	  case 5:
	    almuerzo[r] = "Una rosquilla";
	    break;
	  case 6:
	    almuerzo[r] = "Una botella de agua y un confite";
	    break;
	  case 7:
	    almuerzo[r] = "Una botella de agua y un milan";
	    break;
	  case 8:
	    almuerzo[r] = "Una botella de agua y una melcocha";
	    break;
	  case 9:
	    almuerzo[r] = "Una botella de agua y una galleta";
	    break;
	  case 10:
	    almuerzo[r] = "Una bolsa de palomitas con una botella de agua";
	    break;
	  }

	cout << "Jugador "<< perdedor[r] << " con " << tiro[r] << " puntos debe comer " << almuerzo[r] << endl;


	  }

	cout << "Resumen de perdedores: " << endl;
	cout << "Ronda " <<  numRonda[1] << " " << "Jugador: " << perdedor[1] << " Puntaje: " << tiro[1] << " Almuerzo: "<<  almuerzo[1] << endl;
	cout << "Ronda " <<  numRonda[2] << " " << "Jugador: " << perdedor[2] << " Puntaje: " << tiro[2] << " Almuerzo: "<<  almuerzo[2] << endl;
	cout << "Ronda " <<  numRonda[3] << " " << "Jugador: " << perdedor[3] << " Puntaje: " << tiro[3] << " Almuerzo: "<<  almuerzo[3] << endl;
	cout << "Ronda " <<  numRonda[4] << " " << "Jugador: " << perdedor[4] << " Puntaje: " << tiro[4] << " Almuerzo: "<<  almuerzo[4] << endl;
	cout << "Ronda " <<  numRonda[5] << " " << "Jugador: " << perdedor[5] << " Puntaje: " << tiro[5] << " Almuerzo: "<<  almuerzo[5] << endl;
	cout << "Total de Puntos " << total << endl;
	cout << "Promedio de puntos por jugador" << endl;



	  return 0;
	}

