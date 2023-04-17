#pragma once
#include"TEmpleado.h"

class TAdministrativo : public TEmpleado
{
private:
	string sector;

public:
	//Metodos constructor y destructor
	TAdministrativo();

	~TAdministrativo();

	//otros metodos
	string getsector() { return sector; }
	void setsector(string _sector) { sector = _sector; }

	// metodos varios
	void mostrarAdministrativo();
	void asignarDatosIntroducidosAdministrativo();



};

