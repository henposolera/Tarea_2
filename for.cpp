//============================================================================
// Name        : for.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int jug1 = 121312;
int jug2 = 19;
int jug3 = 1906777;
int jug4 = 19;
//int jug[5] = {0,jug1, jug2, jug3, jug4};
int menor = 0;
int valor = 0;
string nombreJug1 = "Jose";
string nombreJug2 = "Juan";
string nombreJug3 = "Pedro";
string nombreJug4 = "Human";



int main() {


	if (jug1 < jug2) {
	  menor = jug1;
	  valor = 1;
	}  if (jug2 < jug1) {
	  menor = jug2;
	  valor = 2;
	}  if (jug3 !=0 && jug3 < menor){
	  menor = jug3;
	  valor = 3;
	}  if (jug4 !=0 && jug4 < menor) {
	  menor = jug4;
	  valor = 4;
	}
	cout << "El menor es : " << valor << endl;


	switch (valor) {
	  case 1:
		  cout << "El perderor es: " << nombreJug1 << " " << "con " << jug1 << " puntos" << endl;
		  break;
	  case 2:
		  cout << "El perderor es: " << nombreJug2 << " " << "con " << jug2 << " puntos" << endl;
		  break;
	  case 3:
		  cout << "El perderor es: " << nombreJug3 << " " << "con " << jug3 << " puntos" << endl;
		  break;
	  case 4:
		  cout << "El perderor es: " << nombreJug4 << " " << "con " << jug4 << " puntos" << endl;
		  break;

	}


	return 0;
}
