// Implementacion para el standard c++98

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <list>

using namespace std;

int main()
{
    list<int> lista_numerica;
    lista_numerica.push_back(12);
    lista_numerica.push_back(5);
    lista_numerica.push_back(10);
    lista_numerica.push_back(9);
    
    list<int>::iterator final = lista_numerica.end();
    
    lista_numerica.insert(final, 20);

		// it = iterator...
    for (list<int>::iterator it = lista_numerica.begin(); it != lista_numerica.end(); ++it)
    {
        cout << *it << endl;
    };

    return 0;
}

