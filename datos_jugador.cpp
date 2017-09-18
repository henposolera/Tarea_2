#include "datos_jugador.h"

datos_Jugador::datos_Jugador()
{
    //ctor
}


void datos_Jugador::encabezado(){   			// imprime encabezado de programa
	cout << endl;
	cout << "*************** Programa Almuerzos de Castigo de La Finca Loca ***************" << endl;
	cout << endl;
	cout << "Complete la informacion que se le solicita." << endl;
	cout << "Para avanzar por cada paso digite la informacion solicitada y luego oprima Enter." << endl;
	cout << endl;
}

string datos_Jugador::getName(){				    // solicita nombre del incapacidato
	cout << "Digite primer nombre y apellidos del jugador: " << flush;
	cin >> nombre;
	cin >> pApellido;
	cin >> sApellido;
	cout << endl;
	nombreCompleto = nombre+" "+pApellido+" "+sApellido;
	return nombreCompleto;
}

