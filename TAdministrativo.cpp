#include "TAdministrativo.h"
#include <iostream>
using namespace std;



TAdministrativo::TAdministrativo() :TEmpleado() {
	sector = "";
}

TAdministrativo::~TAdministrativo() {}

void TAdministrativo::mostrarAdministrativo() {
	identificador = "administrativo/a";
	mostrar();
	mostrarDireccion();
	cout << "El sector del " << identificador << " es: " << sector << endl;
	(void)getchar();
	(void)getchar();
}

void TAdministrativo::asignarDatosIntroducidosAdministrativo() {
	string _sector;

	identificador = "administrativo/a";
	asignarDatosIntroducidos();
	asignarDatosIntroducidosDeDireccion();

	cout << "Sector: ";
	cin >> _sector;
	setsector(_sector);
}