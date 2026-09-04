#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {

    double radianes;

    cout << "ANGULO\tSENO\t\tCOSENO\t\tTANGENTEt\tCOTANGENTEt\tSECANTEt\tCOSECANTE" << endl;

    for (int angulo = 0; angulo <= 180; angulo += 10) {

        radianes = angulo * 3.14159265 / 180;

        cout << angulo << "\t";

        cout << fixed << setprecision(4);

        cout << sin(radianes) << "\t\t";

        cout << cos(radianes) << "\t\t";


        if (angulo == 90) {

            cout << "No definida";

        }

        else {

            cout << tan(radianes);

        }

        cout << 1/tan(radianes) << "\t\t";

        cout << 1/sin(radianes) << "\t\t";

        cout << 1/cos(radianes) << "\t\t";

        cout << endl;

    }


    return 0;

}