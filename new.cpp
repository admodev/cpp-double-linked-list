// Implementacion para estandares mas nuevos de c++ (> c++98)

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <list>

using namespace std;

int main()
{
    list<int> lista_numerica = { 12, 5, 10, 9 };

    // Corrected the usage of end()
    auto final = lista_numerica.end();
    
    lista_numerica.insert(final, 20);

    for (int num : lista_numerica)
    {
        cout << num << endl;
    };

    return 0;
}

