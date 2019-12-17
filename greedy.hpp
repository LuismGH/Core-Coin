/// @file greedy.hpp
/// @brief Definiciones de la clase Greedy. Representa un algoritmo
/// voraz (Greedy) para calcular el cambio �ptimo de monedas
/// @author Luis Marcelo Chinea Rangel\n
/// Correo: alu0101118116@ull.es \n
/// Universidad de La Laguna \n
/// Escuela Superior de Ingenier�a y Tecnolog�a\n
/// Grado en Ingenier�a Inform�tica\n
/// Asignatura: Computabilidad y Algoritmia (CyA)\n
/// Curso: 2�\n
/// Pr�ctica #12: Algoritmos Voraces (Greedy)
/// @date 11/12/2019
/// @see Enunciado de la pr�ctica:
/// https://campusvirtual.ull.es/1920/mod/assign/view.php?id=21020
//////////////////////////////////////////////////////////////////
#pragma once
#include <set>
#include <cmath>

#include "solucion.hpp"

// Monedas y Billetes base de la Uni�n Europea
const Moneda UN_CENT (0.01);
const Moneda DOS_CENT (0.02);
const Moneda CINCO_CENT (0.05);
const Moneda DIEZ_CENT (0.10);
const Moneda VEINTE_CENT (0.20);
const Moneda CINCUENTA_CENT (0.50);
const Moneda UN_EURO (1);
const Moneda DOS_EUROS (2);
const Moneda CINCO_EUROS (5);
const Moneda DIEZ_EUROS (10);
const Moneda VEINTE_EUROS (20);
const Moneda CINCUENTA_EUROS (50);
const Moneda CIEN_EUROS (100);
const Moneda DOSCIENTOS_EUROS (200);
const Moneda QUINIENTOS_EUROS (500);

// Constante de precisi�n
const float EPSILON = 1E-4;

/// @class Greedy
class Greedy {
	private:
		/// Conjunto de las monedas disponibles. 
		set<Moneda> monedas_;
		/// �ltima soluci�n guardada.
		Solucion solucion_;
	public:
		Greedy(const set<Moneda>& = set<Moneda> { UN_CENT, DOS_CENT, CINCO_CENT, DIEZ_CENT, 
		                                          VEINTE_CENT, CINCUENTA_CENT, UN_EURO, DOS_EUROS, 
	                                              CINCO_EUROS, DIEZ_EUROS, VEINTE_EUROS, CINCUENTA_EUROS,
												  CIEN_EUROS, DOSCIENTOS_EUROS, QUINIENTOS_EUROS });
		
		set<Moneda> getMonedas() const;
		Solucion getSolucion() const;
		
		Solucion devolver_cambio(float);
		void insertarMoneda(const Moneda);
};
ostream& operator<<(ostream&, const Greedy&);
