#include <iostream>
#include "datos_jugador.h"
using namespace std;

int main()
{


    datos_Jugador inicio;
    inicio.encabezado();
    inicio.getName();
    cout << inicio.nombreCompleto << endl;






   /* cout << "Ingrese el numero de jugadores: " << flush;
    int numJugadores = 0;
        if (numJugadores < 2 || numJugadores > 4) {
        cout << "Error: solo se perminte 2, 3, o 4 jugadores" << endl;
        cout << "Ingrese el numero de jugadores: " << flush;
        cin >> numJugadores;
    } else {
        cin >> numJugadores;
    }
*/

    return 0;
}
