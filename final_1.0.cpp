//============================================================================
// Name        : o.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using std::cout;
using std::cin;
using std::flush;
using std::endl;
using std::string;
#include <iomanip>
using std::setw;


void encabezado();
void ordenaValores(int jugadores, string nombres[], int puntaje[] );
string almuerzoCastigo(int x);
int main() {


	encabezado();
	cout << "Ingrese el numero de Jugadores: " << flush;
	int jugadores = 0;
	cin >> jugadores;
	while (jugadores < 2 || jugadores > 4){
		cout << "Error: solo se permiten de 2 a 4 jugadores." << endl;
		cout << "Ingrese el numero de jugadores: " << flush;
		cin >> jugadores;
	}


	string nombreJugador[5];
	string nombreTemp[5];
	string nombreCastigo[5];
	string castigoRonda[5];
	// Guarda nombre de jugadores
	for (size_t e = 1; e <= jugadores; e++) {
		cout << "Escriba el nombre del jugador # " << e << " : " << flush;
		cin >> nombreJugador[e];
		nombreTemp[e] = nombreJugador[e];
	}

	cout << "\n";
	// inicializa variables en 0
	int puntos[3][4] = { {0,0,0,0}, {0,0,0,0}, {0,0,0,0} };
	int total[3][4] = { {0,0,0,0}, {0,0,0,0}, {0,0,0,0} };
	int totalJugador[5] = {0,0,0,0,0};
	int totalPuntosJugador[4] = {0,0,0,0};
	//int miJugador[4] = {0,0,0,0};
	int sumaJugador = 0;

	// Inicia rondas de juego
	for (size_t r = 1; r <= 5; r++) { // rondas
		cout << "----------------------------------------INICIO DE LA RONDA " << r << " -----------------------------------\n" << endl;
		for (size_t s = 1; s <= jugadores; s++) { // aca va el numero de jugadores
			sumaJugador = 0; // re-inicializa la suma a 0 por cada jugador
			for (size_t i = 1; i < 3; i++)  // conteo de turnos
				for (size_t j = 1; j < 4; j++) {  //flechas
					cout  << "Puntaje de "<< nombreJugador[s] << ". Turno # " << i << " " << ". Flecha # " << j << " : " << flush;
					cin >> puntos[i][j];
					while (puntos[i][j] < 1 || puntos[i][j] > 10){
						cout << "Error: la diana solo  permite puntajes del 1 al 10 jugadores." << endl;
						cout  << "Puntaje de "<< nombreJugador[s] << ". Turno # " << i << " " << ". Flecha # " << j << " : " << flush;
						cin >> puntos[i][j];
					}
					totalPuntosJugador[s] = totalPuntosJugador[s] + puntos[i][j];   // guarda total de puntos por jugador
					//miJugador[s] = totalPuntosJugador[s];						  //
					total[i][j] = total[i][j] + puntos[i][j];                       // suma el puntaje de cada tiro
					sumaJugador = sumaJugador + puntos[i][j];                      // guarda valor del total de puntos del jugador en la ronda
				}

			totalJugador[s] = sumaJugador;
			cout << "----------- TOTAL " << nombreJugador[s]  << ":  "<< sumaJugador << "  --------------------\n" << endl;

			//cout << "Acumulado Jugador " << s << " : "<<  totalPuntosJugador[s] << endl;
		}
		cout << "----------------------------------------RESULTADOS DE LA RONDA "<< r << " --------------------------------------- " << endl;
		cout << "POSICION"  << setw(20) << "PUNTAJE" << setw(22)<< "NOMBRE" <<  endl;
		ordenaValores(jugadores, nombreTemp, totalJugador);
		cout << "El perdedor de la ronda es: " << nombreTemp[jugadores] << " " << " con " << totalJugador[jugadores] << " puntos.\n" << endl;

		//ALMUERZO DE CASTIGO
		cout << nombreTemp[jugadores] << "!!  Ahora debes de escoger un almuerzo de castigo! " << endl;
		cout << "Tira la flecha para determinar el castigo...." << endl;
		cout << "Puntaje del tiro: " << flush;
		int tiroCastigo;
		cin >> tiroCastigo;
		cout << nombreTemp[jugadores] << "!! Tu almuerzo castigo es: "<< almuerzoCastigo(tiroCastigo) << endl;
		nombreCastigo[r] = nombreTemp[jugadores];
		castigoRonda[r] = almuerzoCastigo(tiroCastigo);

		// REINICIA LA VARIABLE DE NOMBRE DEL JUGADOR TEMPORAL
		for (int n=1; n<= jugadores; n++) {
			nombreTemp[n] = nombreJugador[n];
		}
		cout << "----------------------------------------FIN DE LA RONDA " << r << " ----------------------------------------------\n"<< endl;


	}

	//IMPRIME RESULTADOS

	cout << "-------------------------------------------------ALMUERZOS------------------------------------------------------\n";
	for (int p=1 ; p <= (jugadores+1); p++) {
		cout << "Ronda: "<< p << " Nombre: "<< nombreCastigo[p] << " Almuerzo: " << castigoRonda[p] << endl;
	}

	cout << "-------------------------------------------RESULTADOS GENERALES-------------------------------------------------\n";
	cout << "POSICION------PUNTAJE----NOMBRE-----------\n";
	ordenaValores(jugadores, nombreJugador, totalPuntosJugador);
	int granTotal = 0;
	for(int z=1; z<=jugadores; z++){
		granTotal = granTotal + totalPuntosJugador[z];
	}
	cout << "Promedio de puntos por jugador: " << double(granTotal/jugadores) << endl;
	cout << "-----------------------------------------------FIN DEL JUEGO----------------------------------------------------\n";
	return 0;
}


void ordenaValores(int jugadores, string nombres[], int puntaje[] ) {
	int temp;
	string tempNombre;
	for (int j = 1; j <= (jugadores+1); j++)
		for (int z = j; z < (jugadores+1); z++)
			if (puntaje[j] < puntaje[z]){
				temp = puntaje[j];
				tempNombre = nombres[j];
				puntaje[j] = puntaje[z];
				puntaje[z] = temp;
				nombres[j] = nombres[z];
				nombres[z] = tempNombre;
			}
	for (int h=1; h<(jugadores+1); h++)

		cout << "  "<< h << ")" << setw(21) <<  puntaje[h] << setw(25)<< nombres[h] << endl;
	cout << endl;
}

string almuerzoCastigo(int x){
	string almuerzo;
	switch (x) {
	case 1:
		almuerzo = "Un confite";
		break;
	case 2:
		almuerzo = "1 milan";
		break;
	case 3:
		almuerzo = "Una melcocha";
		break;
	case 4:
		almuerzo = "Una merendina";
		break;
	case 5:
		almuerzo = "Una rosquilla";
		break;
	case 6:
		almuerzo = "Una botella de agua y un confite";
		break;
	case 7:
		almuerzo = "Una botella de agua y un milan";
		break;
	case 8:
		almuerzo = "Una botella de agua y una melcocha";
		break;
	case 9:
		almuerzo = "Una botella de agua y una galleta";
		break;
	case 10:
		almuerzo = "Una bolsa de palomitas con una botella de agua";
		break;
	default:
		cout << "Ingreso un valor incorrecto" << endl;
		break;
	}
	return almuerzo;
}


void encabezado() {
	cout << "--------------------------------------------JUEGO DE LA LOCA--------------------------------------\n" << endl;
	cout << "--------------------------------------------REGLAS DEL JUEGO--------------------------------------\n" << endl;
	cout << "1) En cada ronda pueden participar de 2 hasta 4 jugadores." << endl;
	cout << "2) Cada jugador puede lanzar 2 veces las tres flechas por ronda." << endl;
	cout << "3) El juego consiste en 5 rondas." << endl;
	cout << "4) El jugador con menor cantidad de puntos es el elegido para el almuerzo de cortesía.\n"
			"En caso de un empate, el ultimo jugador con el menor puntaje sera el perdedor" << endl;
	cout << "5) Para elegir el almuerzo de cortesía de castigo, el jugador perdedor debe tirar una flecha \n"
			"y según los puntos que obtenga, el jugador puede pedir el siguiente almuerzo" << endl;
	cout << "---------------------------------------------------------------------------------------------------\n" << endl;
	cout << "--------------------------------------------INICIO DEL JUEGO---------------------------------------\n" << endl;
}








