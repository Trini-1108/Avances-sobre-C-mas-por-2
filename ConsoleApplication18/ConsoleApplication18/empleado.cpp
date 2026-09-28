#include "empleado.h" // Incluimos nuestro propio encabezado

double calcularAsignacion(double sueldoBasico) {
    // Suponemos que la asignación familiar es el 10% del sueldo básico
    return sueldoBasico * 0.10;
}

double calcularHorasExtra(double sueldoBasico, int horasExtras) {
    // Calculamos el valor de una hora normal (30 días * 8 horas = 240 horas al mes)
    double valorHora = sueldoBasico / 240.0;

    // La hora extra se paga al 150% (50% adicional)
    return valorHora * 1.5 * horasExtras;
}

double calcularSueldoBruto(double sueldoBasico, double asignacion, double pagoHorasExtra) {
    return sueldoBasico + asignacion + pagoHorasExtra;
}

double calcularSueldoFinal(double sueldoBruto) {
    // Aplicamos un descuento del 10% (impuestos/seguridad) para obtener el neto
    double descuentos = sueldoBruto * 0.10;
    return sueldoBruto - descuentos;
}
