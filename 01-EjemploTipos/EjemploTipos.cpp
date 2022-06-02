/* EjemploTipos.cpp
 * Ejemplos de Valores y Operaciones de Tipos de Datos
 * Sanguineti, Guido
 * 20220519
 */

#include <string>
#include <cassert>
#include <limits>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    assert(true);
    assert(false or true);
    assert(not false);
    assert(91218 == 91218);
    assert('a' != 'b');
    assert(2 == 'C' - 'A');
    assert(3 > 1);
    assert(3 == 1 + 1 + 1);
    assert(2 == 3 - 1);
    assert(4 == 12 / 3);
    assert(std::numeric_limits<short>::min() == -32768);
    assert(13 == std::string("Aguante River").length());
    assert(sizeof(char) == 1);
    assert(sizeof(short) == 2);
    assert(sizeof(int) == 4);
    assert(sizeof(double) == 8);
    assert(sizeof(long double) == 16);
}