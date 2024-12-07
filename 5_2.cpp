#include <iostream>
#include <vector>
using namespace std;


void zamiana(vector<int>& tab, int n) {
    int polowa = n / 2;
    for (int i = 0; i < polowa; i++) {
        swap(tab[i], tab[n - i - 1]);
    }
}

int main()
{   
    int n;
    cout << "Podaj rozmiar tablicy: " << endl;
    cin >> n;
    if (n <= 0) {
        cout << "Rozmiar tablicy musi być dodatni: " << endl;
        return 1;
    }
    vector<int> tab(n);

    cout << "Podaj " << n << " elementow tablicy" << endl;
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }

    zamiana(tab, n);

    cout << "Tablica po zamiane elementow: " << endl;
    for (int i = 0; i < n; i++) {
        cout << tab[i] << "";
    }
    cout << endl;
    return 0;
}

