#ifndef DATOS_JUGADOR_H
#define DATOS_JUGADOR_H

#include <iostream>
using std::cout;
using std::cin;
using std::flush;
using std::endl;
using std::string;


class datos_Jugador
{
    public:
        datos_Jugador();
        void encabezado();
        string getName();
        string nombreCompleto;

    protected:
    private:
        	string nombre;
            string pApellido;
            string sApellido;

};

#endif // DATOS_JUGADOR_H
