#include "TCiberEmpleado.h"
#include <iostream>
using namespace std;



TCiberEmpleado::TCiberEmpleado():TEmpleado() {
	tarjeta = "";
}



TCiberEmpleado::~TCiberEmpleado(){}

void TCiberEmpleado::mostrarCiberEmpleado() {
	identificador = "ciberempleado/a";
	mostrar();
	cout << "La tarjeta del " << identificador << " es: " << tarjeta << endl;
	(void)getchar();
	(void)getchar();
}

void TCiberEmpleado::asignarDatosIntroducidosCiberEmpleado() {
	string _tarjeta;

	identificador = "ciberempleado/a";
	asignarDatosIntroducidos();

	cout << "Tarjeta:\n ";
	cin >> _tarjeta;
	settarjeta(_tarjeta);
}
