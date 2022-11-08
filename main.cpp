//  KARYS DOVE J00964062
//  chapter4pg259
//
//  DUE NOVEMBER 9, 2022

#include <iostream>
#include <cmath>

using namespace std;

int main () {
    
    double a, b, c, x1, x2, discriminant;
    
    cout<< "Enter the coefficient a: ";
    cin>> a;
    cout<< "Enter the coefficient b: ";
    cin>> b;
    cout<< "Enter the coefficient c: ";
    cin>> c;
    
    discriminant = pow(b,2) - 4*a*c;
    
    if (discriminant < 0) {
        cout<< "Complex Roots";
    }
    else if (discriminant == 0) {
        x1 = -b/(2*a);
        cout<< "The Single root is" << x1 << endl;
    }
    else if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant))/ 2*a;
        x2 = (-b - sqrt(discriminant))/ 2*a;
        cout<< "Two Real Roots \n";
        cout<< "Root1 = " << x1 << endl;
        cout<< "Root2 = " << x2 << endl;
    }
    if (a==0) {
        cout<< "Invalid Entry";
    }
    
    return 0;
}
