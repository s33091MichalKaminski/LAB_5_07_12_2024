#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    int liczba_n;
    vector<int> wektor;
    int element;

    cout << "Podaj liczbe elementow wektora: " << endl;
    cin >> liczba_n;

    cout << "Podaj " << liczba_n << " elementow wektora: " << endl;
    for (int i = 0; i < liczba_n; i++) {
        cout << "Element " << i + 1 << " : " << endl;
        cin >> element;
        wektor.push_back(element);
    }

    int max_w = wektor[0];
    int max_i = 0;

    for (int i = 1; i < wektor.size(); i++) {
        if (wektor[i] > max_w) {
            max_w = wektor[i];
            max_i = i;
        }

       
    }
    cout << "Max wartosc wektora: " << max_w << endl;
    cout << "Indeks max wartosci wektora: " << max_i << endl;
    return 0;
}

