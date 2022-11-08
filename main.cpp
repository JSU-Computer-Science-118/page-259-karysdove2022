//  KARYS DOVE J00964062
//  chapter4pg259
//
//  DUE NOVEMBER 9, 2022

#include <iostream>
#include <cmath>

using namespace std;

int main () {
    
    double a, b, c, x1, x2, discriminant;
    
    cout<< "Enter the coefficients a, b and c: ";
    cin>> a;
    cin>> b;
    cin>> c;
    
    discriminant = pow(b,2) - 4*a*c;
    
    if (discriminant == 0) {
        cout<< "The equation has a single root";
        x1 = -b/(2*a);
        cout<< "x1 = " << x1 << endl;
    }
    else if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant))/ 2*a;
        x2 = (-b - sqrt(discriminant))/ 2*a;
        cout<< "The equation has two real roots";
        cout<< "x1 = " << x1 << endl;
        cout<< "x2 = " << x2 << endl;
    }
    else {
        cout<< "The equation has two complex roots ";
    }
    
    return 0;
}
