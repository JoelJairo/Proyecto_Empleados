//#include "TAuxiliarDeDocencia.h"
//#include "TEmpleado.h"
//
//#include <iostream>
//using namespace std;
//
//
//
//TAuxiliarDeDocencia::TAuxiliarDeDocencia() :TDocente() {
//	cargaHorariaMaxima = "";
//}
//
//TAuxiliarDeDocencia::~TAuxiliarDeDocencia() {}
//
//void TAuxiliarDeDocencia::mostrarAuxiliarDeDocencia() {
//	identificador = "auxiliar de docencia";
//	mostrar();
//	mostrarDireccion();
//	cout << "La carga horaria maxima del " << identificador << " es: " << cargaHorariaMaxima << endl;
//	(void)getchar();
//	(void)getchar();
//}
//
//void TAuxiliarDeDocencia::asignarDatosIntroducidosAuxiliarDeDocencia() {
//	string _cargaHorariaMaxima;
//
//	identificador = "auxiliar de docencia";
//	asignarDatosIntroducidos();
//	asignarDatosIntroducidosDeDireccion();
//
//	cout << "Carga Horaria Maxima:\n ";
//	cin >> _cargaHorariaMaxima;
//	setcargaHorariaMaxima(_cargaHorariaMaxima);
//}