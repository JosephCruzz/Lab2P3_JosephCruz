// Lab2P3_JosephCruz.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Joseph Cruz 22151086
#include <iostream>
using namespace std;
int menu = 0;
int main()
{
    do {
		cout << "1. Ejercicio practico 1 - Calculo de Aguinaldo" << endl;
		cout << "2. Ejercicio practico 2 - Construir linea calculada mediante una pendiente" << endl;
		cout << "3. Ejercicio practico 3 - Diferencia entre fechas" << endl;
		cout << "4. Salir." << endl;
		cout << "Ingrese la opcion que desea: ";  cin >> menu;
		switch (menu)
		{
		case 1:
		{
			int aguinaldo = 0;
			int aguinaldoBono = 0;
			int sueldoEnero = 0;
			int sueldoFebrero = 0;
			int sueldoMarzo = 0;
			int sueldoAbril = 0;
			int sueldoMayo = 0;
			int sueldoJunio = 0;
			int sueldoJulio = 0;
			int sueldoAgosto = 0;
			int sueldoSeptiembre = 0;
			int sueldoOctubre = 0;
			int sueldoNoviembre = 0;
			int sueldoDiciembre = 0;
			int diasEnero = 0;
			int diasFebrero = 0;
			int diasMarzo = 0;
			int diasAbril = 0;
			int diasMayo = 0;
			int diasJunio = 0;
			int diasJulio = 0;
			int diasAgosto = 0;
			int diasSeptiembre = 0;
			int diasOctubre = 0;
			int diasNoviembre = 0;
			int diasDiciembre = 0;
			int diasFaltadosProm = 0;
			cout << "*******************************************" << endl;
			cout << "Bienvenido al calculo de aguinaldo" << endl;
			cout << "*******************************************" << endl;
			cout << "Ingrese su sueldo bruto del mes de Enero: "; cin >> sueldoEnero;
			cout << "Ingrese total de dias faltados del mes de Enero: "; cin >> diasEnero;
			cout << "Ingrese su sueldo bruto del mes de Febrero: "; cin >> sueldoFebrero;
			cout << "Ingrese total de dias faltados del mes de Febrero: "; cin >> diasFebrero;
			cout << "Ingrese su sueldo bruto del mes de Marzo: "; cin >> sueldoMarzo;
			cout << "Ingrese total de dias faltados del mes de Marzo: "; cin >> diasMarzo;
			cout << "Ingrese su sueldo bruto del mes de Abril: "; cin >> sueldoAbril;
			cout << "Ingrese total de dias faltados del mes de Abril: "; cin >> diasAbril;
			cout << "Ingrese su sueldo bruto del mes de Mayo: "; cin >> sueldoMayo;
			cout << "Ingrese total de dias faltados del mes de Mayo: "; cin >> diasMayo;
			cout << "Ingrese su sueldo bruto del mes de Junio: "; cin >> sueldoJunio;
			cout << "Ingrese total de dias faltados del mes de Junio: "; cin >> diasJunio;
			cout << "Ingrese su sueldo bruto del mes de Julio: "; cin >> sueldoJulio;
			cout << "Ingrese total de dias faltados del mes de Julio: "; cin >> diasJulio;
			cout << "Ingrese su sueldo bruto del mes de Agosto: "; cin >> sueldoAgosto;
			cout << "Ingrese total de dias faltados del mes de Agosto: "; cin >> diasAgosto;
			cout << "Ingrese su sueldo bruto del mes de Septiembre: "; cin >> sueldoSeptiembre;
			cout << "Ingrese total de dias faltados del mes de Septiembre: "; cin >> diasSeptiembre;
			cout << "Ingrese su sueldo bruto del mes de Octubre: "; cin >> sueldoOctubre;
			cout << "Ingrese total de dias faltados del mes de Octubre: "; cin >> diasOctubre;
			cout << "Ingrese su sueldo bruto del mes de Noviembre: "; cin >> sueldoNoviembre;
			cout << "Ingrese total de dias faltados del mes de Noviembre: "; cin >> diasNoviembre;
			cout << "Ingrese su sueldo bruto del mes de Diciembre: "; cin >> sueldoDiciembre;
			cout << "Ingrese total de dias faltados del mes de Diciembre: "; cin >> diasDiciembre;
			aguinaldo = sueldoEnero + sueldoFebrero + sueldoMarzo + sueldoAbril + sueldoMayo + sueldoJunio + sueldoJulio + sueldoAgosto + sueldoSeptiembre + sueldoOctubre + sueldoNoviembre + sueldoDiciembre;
			aguinaldo = aguinaldo / 12;
			cout << "El aguinaldo es: " << aguinaldo << endl;
			aguinaldoBono = sueldoJulio + sueldoAgosto + sueldoSeptiembre + sueldoOctubre + sueldoNoviembre + sueldoDiciembre;
			aguinaldoBono = aguinaldoBono / 6;
			diasFaltadosProm = (diasJulio + diasAgosto + diasSeptiembre + diasOctubre + diasNoviembre + diasDiciembre);
			diasFaltadosProm = diasFaltadosProm / 6;
			if (diasFaltadosProm <= 2) {
				aguinaldoBono = (aguinaldoBono * 0.05);
				cout << "El bono es: " << aguinaldoBono << endl;
			}
			else {
				cout << "No hay Bonificacion." << endl;
			}

			break;
		}
		case 2: {
			int ymax = 0;
			int xmax = 0;
			int xrounded = 0;
			cout << "***************************************************************" << endl;
			cout << "Bienvenido al Construir l�nea calculada mediante una pendiente." << endl;
			cout << "***************************************************************" << endl;
			cout << "Ingrese el valor que usted desea para ymax: ";	cin >> ymax;
			cout << "Ingrese el valor que usted desea para xmax: "; cin >> xmax;
			if (ymax <= 0 || xmax <= 0 || ymax < xmax) {
				cout << "Los valores ingresados no son validos......" << endl;
				return 0;
			}
			double m = (double)ymax / xmax;
			for (int y = 0; y < ymax; y++) {
				double x = y / m;
				xrounded = floor(x);
				for (int i = 0; i < xrounded; i++) {
					cout << " ";
				}
				cout << "*" << endl;
			}
		}
			  break;



		case 3: {
			cout << "***************************************************************" << endl;
			cout << "Bienvenido a Diferencia entre fechas." << endl;
			cout << "***************************************************************" << endl;
			int dia1, mes1, anio1, dia2, mes2, anio2, dias1, dias2, diasDif;
			int diasMeses[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
			int diasPasados = 0;
			cout << "Ingrese el anio de la primera fecha: "; cin >> anio1;
			cout << "Ingrese el mes de la primera fecha: "; cin >> mes1;
			cout << "Ingrese el dia de la primera fecha: "; cin >> dia1;
			
			cout << "Ingrese el anio de la segunda fecha: "; cin >> anio2;
			cout << "Ingrese el mes de la segunda fecha: "; cin >> mes2;
			cout << "Ingrese el dia de la segunda fecha: "; cin >> dia2;
			
			/*
			dias1 = (anio1 * 365) + (mes1 * 30) + dia1;
			dias2 = (anio2 * 365) + (mes2 * 30) + dia2;
			diasDif = dias2 - dias1;
			
			cout << "La diferencia entre las fechas es: " << diasDif << " dias." << endl;
			*/
			if (dia1 > 0 && dia1 <= 31 && dia2 > 0 && dia2 <= 31 && mes1 > 0 && mes1 <= 12 && mes2 > 0 && mes2 <= 12 && anio1 > 0 && anio2 > 0 && anio1 >= 2000 && anio2 >= 2000) {
				if (anio1 == anio2) {
					if (mes1 == mes2) {
						diasPasados = dia2 - dia1;
					}
					else {
						for (int i = mes1; i < mes2; i++) {
							diasPasados += diasMeses[i - 1];
						}
						diasPasados += dia2 - dia1;
					}
				}
				else {
					for (int i = mes1; i <= 12; i++) {
						diasPasados += diasMeses[i - 1];
					}
					diasPasados += dia2 - dia1;
					for (int i = anio1 + 1; i < anio2; i++) {
						if (i % 4 == 0) {
							diasPasados += 366;
						}
						else {
							diasPasados += 365;
						}
					}
					for (int i = 1; i < mes2; i++) {
						diasPasados += diasMeses[i - 1];
					}
				}
				cout << "La diferencia entre las fechas es: " << diasPasados << " dias." << endl;
			}
			else {
				cout << "Ingrese una fecha valida.." << endl;;
			}
			break;
		}
		}
    } while (menu!= 4);
}

