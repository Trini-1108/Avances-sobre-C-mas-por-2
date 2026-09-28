#ifndef VENDEDOR_H
#define VENDEDOR_H
float calcularComision(float ventas);
float calcularSueldoBruto(float sueldoBasico, float comision);
float calcularDescuento(float sueldoBruto);
float calcularSueldoNeto(float sueldoBruto, float descuento);
void mostrarBoleta(
	int codigo,
	char nombre[],
	float ventas,
	float sueldoBasico,
	float comision,
	float sueldoBruto,
	float descuento,
	float sueldoNeto
);
#endif
