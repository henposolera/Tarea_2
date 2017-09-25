//============================================================================
// Name        : 0.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main() {
char nombre[5][20]  = {"","","","",""};
char perdedor[6][20] = {"","","","","",""};
int nJugadores = 0;
int turno =1;
int flecha1[4] = {0,0,0,0};
int flecha2[4] = {0,0,0,0};
int sumaTurno1[]	= {0,0,0,0};
int sumaTurno2[]	= {0,0,0,0};
int total[] = {0,0,0,0,0};
int jug1 = 0;
int jug2 = 0;
int jug3 = 0;
int jug4 = 0;
int t2 = 0;
int menor = 0;
int valor = 0;

cout << "Escriba el numero de jugadores: " << flush;
cin >> nJugadores;
while (nJugadores < 1 || nJugadores >= 5) {
	cout <<  "Error: numero de jugadores incorrecto." << endl;
	cout << "Se permiten 2, 3, 4 jugadores" << endl;
	cout << "Escriba el numero de jugadores: " << flush;
	cin >> nJugadores;

}


for (size_t i = 1; i <= nJugadores; i++) {
 cout << "Ingrese el nombre del Jugador # " << i << ": " << flush;
 cin >> nombre[i];
}
cout << "Jug 1: "<< nombre[1] << endl;
cout << "Jug 2: "<< nombre[2] << endl;
cout << "Jug 3: "<< nombre[3] << endl;
cout << "Jug 4: "<< nombre[4] << endl;

for (size_t a = 1; a <= nJugadores; a++) {
		 	       cout << "Jugador #" << a << endl;
		 	       int turno = 1;
		 	       while (turno < 2) {
		 	         cout << "Turno 1:" << endl;
		 	         for (size_t a = 1; a <= 3; a++) {
		 	           cout << "Flecha # " << a << ": " << flush;
		 	           cin >> flecha1[a];
		 	           while (flecha1[a] < 1 || flecha1[a] > 10) {
		 	             cout << "Valor incorrecto" << endl;
		 	             cout << "Flecha # " << a << ": " << flush;
		 	             cin >> flecha1[a];
		 	           }
		 	         }
		 	         cout << "Turno 2:" << endl;
		 	         for (size_t b = 1; b <= 3; b++) {
		 	           cout << "Flecha # " << b << ": " << flush;
		 	           cin >> flecha2[b];
		 	           while (flecha2[b] < 1 || flecha2[b] > 10) {
		 	             cout << "Valor incorrecto" << endl;
		 	             cout << "Flecha # " << b << ": " << flush;
		 	             cin >> flecha2[b];
		 	           }
		 	           sumaTurno2[b] = flecha2[1] + flecha2[2] +flecha2[3];
		 	           t2 = sumaTurno2[b];
		 	         }
		 	         turno++;
		 	         sumaTurno1[a] = flecha1[1] + flecha1[2] +flecha1[3];
		 	         total[a] = sumaTurno1[a] + t2;
		 	         cout << "Total en Ronda de Jugador #" << a << ": " << total[a] << endl;
		 	         cout << endl;
		 	       }
		 	     }
		 	     jug1 = jug1 + total[1];
		 	     jug2 = jug2 + total[2];
		 	     jug3 = jug3 + total[3];
		 	     jug4 = jug4 + total[4];
		 	     cout << "Gran Total Jugador 1: " << jug1 << endl;
		 	     cout << "Gran Total Jugador 2: " << jug2 << endl;
		 	     cout << "Gran Total Jugador 3: " << jug3 << endl;
		 	     cout << "Gran Total Jugador 4: " << jug4 << endl;
		 	     cout << endl;




		 	     if (jug1 < jug2) {
		 	    	  menor = jug1;
		 	    	  valor = 1;
		 	    	}  if (jug2 <= jug1){
		 	    	  menor = jug2;
		 	    	  valor = 2;
		 	    	}  if (jug3 !=0 && jug3 <= menor){
		 	    	  menor = jug3;
		 	    	  valor = 3;
		 	    	}  if (jug4 !=0 && jug4 <= menor) {
		 	    	  menor = jug4;
		 	    	  valor = 4;
		 	    	}
		 	    	cout << "El menor es el #: " << valor << endl;














	return 0;
}

