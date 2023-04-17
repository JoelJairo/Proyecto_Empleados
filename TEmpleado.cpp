#include "TEmpleado.h"
#include <iostream>



TEmpleado::TEmpleado() {
	ci = "";
	nombre = "";
	apellido = "";
	edad = 0;
	sexo = "masculino";
	categoria = contrato;
	salario=0;
	fecha_ingreso.Day=1;
	fecha_ingreso.Month = 01;
	fecha_ingreso.Year = 1900;
}
 


TEmpleado::TEmpleado(string _ci, string _nombre, string _apellido, int _edad, string _sexo, categorias_posibles _categoria, float _salario, Fecha _fecha_ingreso)
{
	ci = _ci;
	nombre = _nombre;
	apellido = _apellido;
	edad = _edad;
	sexo = _sexo;
	categoria = _categoria;
	salario = _salario;
	fecha_ingreso.Day = _fecha_ingreso.Day;
	fecha_ingreso.Month = _fecha_ingreso.Month;
	fecha_ingreso.Year = _fecha_ingreso.Year;

}

TEmpleado::~TEmpleado() {

}

void TEmpleado::subircategoria() {

	if (categoria != fijo) {
		categoria = fijo;
		if (salario + 1000 > 15000) {
			salario = 15000;
		}

		else
			salario = salario + 1000;

	}

	cout << "\nOprima una tecla para salir";
	(void)getchar();
	(void)getchar();

}

	void TEmpleado::mostrar() {
			cout << "\n\n\n---------- Datos del " << identificador << " ----------\n\n";
			cout << "El Ci del " << identificador << " es: "<<  ci << endl;
			cout << "El nombre del " << identificador << " es: "<<  nombre << endl;
			cout << "El apellido del " << identificador << " es: "<<  apellido << endl;
			cout << "La edad del " << identificador << " es: "<<  edad << endl;
			cout << "El sexo del " << identificador << " es: "<<  sexo << endl;
			cout << "La categoria del " << identificador << " es: ";
			if (categoria == 0) {
				cout << "contrato" << endl;
			}
			else {
				cout << "fijo" << endl;
			}
			cout << "El salario del " << identificador << " es: ";
			cout <<  salario << endl;
			cout << "La fecha de ingreso del " << identificador << " es: ";
			cout << fecha_ingreso.Day << "/" << fecha_ingreso.Month <<"/"<< fecha_ingreso.Year;
			cout<< endl;
	}

	void TEmpleado::mostrarDireccion() {
		cout << "La direccion del " << identificador << " es: ";
		cout << "Calle " << direc.getcalle() << " Numero " << direc.getnumero() << " ciudad " << direc.getciudad();
		cout << endl;
	}

	void TEmpleado::asignarDatosIntroducidos() {
		string _ci, _nombre, _apellido, _sexo, _categoria;
		categorias_posibles	_cate;
		int _edad;
		float _salario;
		Fecha _fechaingreso;

		cout << "\n\n\nEntre los Datos del " << identificador << ":\n ";
		cout << "CI: \n";
		cin >> _ci;
		cout << "Nombre: \n";
		cin >> _nombre;
		cout << "Apellido: \n";
		cin >> _apellido;
		cout << "Edad:\n ";
		cin >> _edad;
		cout << "Sexo: \n";
		cin >> _sexo;
		cout << "Categoria: \n";
		cin >> _categoria;
		cout << "Salario:\n ";
		cin >> _salario;
		cout << "Fecha de Ingreso:\n ";
		cin >> _fechaingreso.Day;
		cin >> _fechaingreso.Month;
		cin >> _fechaingreso.Year;

		setci(_ci);
		setnombre(_nombre);
		setapellido(_apellido);
		setedad(_edad);
		setsexo(_sexo);
		if (_categoria == "fijo") {
			_cate = fijo;
		}
		else {
			_cate = contrato;
		}
		setcategoria(_cate);
		setsalario(_salario);
		setfechaingreso(_fechaingreso);
	}


	void TEmpleado::asignarDatosIntroducidosDeDireccion() {
		string _calle, _ciudad;
		int _numero;

		cout << "direccion:\n ";
		cout << "calle: ";
		cin >> _calle;
		cout << "numero: ";
		cin >> _numero;
		cout << "ciudad: ";
		cin >> _ciudad;

		direc.setcalle(_calle);
		direc.setnumero(_numero);
		direc.setciudad(_ciudad);
	}