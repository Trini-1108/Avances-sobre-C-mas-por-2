#include <iostream>
#include "geometria.h"  // Incluir el archivo de cabecera

int main() {
    double radio = 5.0;
    double largo = 10.0;
    double ancho = 4.0;

    // Calcular el área del círculo
    double areaC = areaCirculo(radio);
    std::cout << "El area del circulo con radio " << radio << " es: " << areaC << std::endl;

    // Calcular el área del rectángulo
    double areaR = areaRectangulo(largo, ancho);
    std::cout << "El area del rectangulo con largo " << largo << " y ancho " << ancho << " es: " << areaR << std::endl;

    return 0;
}




