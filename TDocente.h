#pragma once
#include"TEmpleado.h"
#include "direccion.h"


class TDocente: public TEmpleado
{
private:
	string materia;

public:
	//Metodos constructor y destructor
	TDocente();

	~TDocente();

	//otros metodos
	string getmateria() { return materia; }
	void setmateria(string _materia) { materia = _materia; }

	// metodos varios
	void mostrarDocente();
	void asignarDatosIntroducidosDocente();



};
