
#include "TDocente.h"
#include <iostream>
using namespace std;



TDocente::TDocente():TEmpleado() {
	materia = "";
}

TDocente::~TDocente() {}

void TDocente::mostrarDocente() {
	identificador = "docente";
	mostrar();
	mostrarDireccion();
	cout << "La materia del " << identificador << " es: " << materia << endl;
	(void)getchar();
	(void)getchar();
}

void TDocente::asignarDatosIntroducidosDocente() {
	string _materia;

	identificador = "docente";
	asignarDatosIntroducidos();
	asignarDatosIntroducidosDeDireccion();

	cout << "Materia: ";
	cin >> _materia;
	setmateria(_materia);
}