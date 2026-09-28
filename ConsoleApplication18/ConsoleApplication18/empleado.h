#pragma once // Evita que el encabezado se incluya múltiples veces

// Declaración de las funciones sugeridas
double calcularAsignacion(double sueldoBasico);
double calcularHorasExtra(double sueldoBasico, int horasExtras);

// He dividido "calcularSueldo" en dos para mayor claridad:
double calcularSueldoBruto(double sueldoBasico, double asignacion, double pagoHorasExtra);
double calcularSueldoFinal(double sueldoBruto);

