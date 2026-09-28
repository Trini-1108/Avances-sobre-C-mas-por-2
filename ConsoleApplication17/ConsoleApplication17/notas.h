#ifndef NOTAS_H
#define NOTAS_H

#include <string>

// Constantes del sistema
const double NOTA_MINIMA = 0.0;
const double NOTA_MAXIMA = 20.0;
const double NOTA_APROBATORIA = 10.5;

// Declaraciones de las funciones
int leerOpcion(int minimo, int maximo);
double ingresarNota(int numeroNota);
double calcularPromedio(double nota1, double nota2, double nota3);
std::string determinarEstado(double promedio);
void mostrarResultado(double nota1, double nota2, double nota3,
    double promedio, std::string estado);
void mostrarMenu();

#endif
