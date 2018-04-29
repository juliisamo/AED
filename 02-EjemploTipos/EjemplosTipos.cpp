/* Qué: Julian Saavedra M.
 * TP2: Ejemplo de tipos de datos
 * Julian Saavedra M.
 * 18/4/2018
 */

#include <iostream>
#include <cassert>

using namespace std;

int main() 
{
    bool a = true ;
    bool b = true;
    
    char c = 'j';
    char d = 'w';
    
    unsigned e = 43;
    unsigned f = 23;
    
    int g = -322 ;
    int h = -2 ;
    
    double i = 3.14 ;
    double j = 3.04;
    
    string k = "hola";
    string l = "mundo";
    
    
    assert (a == b);
    assert (c != d);
    assert (e + f == 66);
    assert (g%h == 0);
    assert (i - j == 0.1);
    assert (length(l) * length(k) == 16 );
    
     
    //cout << a << '\n' << b << '\n' << c << '\n' << d << '\n' << e << '\n' << f << '\n';
}
