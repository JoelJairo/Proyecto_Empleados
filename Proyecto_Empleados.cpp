// Proyecto_Empleados.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

// Estudiante: Choque Gorena Joel Jairo
// Carrera: Ing. en ciencias de la computación
// Materia: Estructura de Datos - SIS204 GT1 GL2
// Práctica de laboratorio Nº 4


#include"TEmpleado.h"
#include"TCiberEmpleado.h"
#include"TDocente.h"
#include"TAdministrativo.h"

#include <iostream>
using namespace std;
#include <iostream>




int main()
{
	TEmpleado emp1;  // Se declara el objeto sin usar parentesis
	TCiberEmpleado emp2;

	// ----- Objetos de mis clases creadas:
	TDocente docente1;
	TAdministrativo admin1;
	
	int opc;

	do
	{

		system("cls");

		cout << "	   Datos de un Empleado" << endl;
		cout << "      Seleccione la opcion a realizar\n\n";
		cout << "      -------------------------------------------------\n";
		cout << "      1.- Introducir los Datos de un Empleado\n";
		cout << "      2.- Mostrar Datos del Empleado\n";
		cout << "      3.- Subir Categoria del Empleado\n";
		cout << "      -------------------------------------------------\n";
		cout << "      4.- Introducir los Datos de un Ciber-Empleado\n";
		cout << "      5.- Mostrar los Datos de un Ciber-Empleado\n";
		cout << "      6.- Subir Categoria Ciber-Empleado\n";
		cout << "      -------------------------------------------------\n";
		cout << "      7.- Introducir los Datos de un Docente\n";
		cout << "      8.- Mostrar Datos del Docente\n";
		cout << "      9.- Subir Categoria del Docente\n";
		cout << "      -------------------------------------------------\n";
		cout << "      10.- Introducir los Datos de un Administrativo\n";
		cout << "      11.- Mostrar Datos del Administrativo\n";
		cout << "      12.- Subir Categoria del Administrativo\n";
		cout << "      -------------------------------------------------\n";
		cout << "      13.- Salir";
		cout << "       \n\n\nOpcion(1-13): ";
		cin >> opc;

		switch (opc)
		{
		case 1:
			emp1.asignarDatosIntroducidos();
			emp1.asignarDatosIntroducidosDeDireccion();
			break;

		case 2:
			emp1.mostrar();
			emp1.mostrarDireccion();
			(void)getchar();
			(void)getchar();
			break;

		case 3:
			emp1.subircategoria();
			
			break;

			case 4:
				emp2.asignarDatosIntroducidosCiberEmpleado();
				break;


			case 5:
				emp2.mostrarCiberEmpleado();
				break;

			case 6:
				emp2.subircategoria();
				

				break;

			case 7:
				docente1.asignarDatosIntroducidosDocente();
				break;

			case 8:
				docente1.mostrarDocente();
				break;

			case 9:
				docente1.subircategoria();
				
				break;

			case 10:
				admin1.asignarDatosIntroducidosAdministrativo();
				break;

			case 11:
				admin1.mostrarAdministrativo();
				break;

			case 12:
				admin1.subircategoria();
				
				break;

			case 13:
				exit(0);
				break;
			}
		
		} while ((opc != 13));

		return 0;
	}

