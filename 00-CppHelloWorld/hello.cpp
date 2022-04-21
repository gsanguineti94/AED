/* Hello World
Guido Sanguineti
20220407
*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    std::cout << "Hello, World!\n";
    ofstream MyFile("output.txt");
    MyFile << "Hello, World!";
    MyFile.close();
}
