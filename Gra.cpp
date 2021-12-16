#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));

    int kostka[6] = { 1,2,3,4,5,6 };
    int runda = 1;
    int gracze; // zapisuje liczbe graczy
    int a = 1; // zmienna ktora mi sie przyda
    int b = 0;// zmienna ktora mi sie przyda
    string nick1, nick2, nick3, nick4;
    int wynik1, wynik2, wynik3, wynik4;
    string gracz[4];
    int wynik[4] = { wynik1 = 0, wynik2 = 0, wynik3 = 0, wynik4 = 0 };
    gracz[0] = nick1;
    gracz[1] = nick2;
    gracz[2] = nick3;
    gracz[3] = nick4;

    /*
    string nick[4];
    nick[0] = nick1;
    nick[1] = nick2;
    nick[2] = nick3;
    nick[3] = nick4; */

    cout << "Witaj w grze koscianej dla 2-4 osob " << endl; //Deklaruje liczbe graczy
    cout << "Podaj liczbe graczy: " << endl;
    cin >> gracze;

    do {   //Petla dopuszczajaca liczbe graczy miedzy 2 a 4

        if (gracze <= 4 && gracze >= 2)
        {
            cout << "Pomyslnie zadeklarowano liczbe graczy: " << gracze << endl;
        }
        else
        {
            cout << "Wprowadzono bledna liczbe graczy. Sprawdz czy, aby napewno liczba graczy nie przekracza liczby 4, badz nie jest rowna liczbie 1." << endl;
            cout << "Wpisz liczbe ponownie" << endl;
            cout << "Jesli liczba zostanie znow wpisana blednie, uruchom program ponownie" << endl;
            cin >> gracze;
            if (gracze <= 4 && gracze >= 2)
            {
                cout << "Pomyslnie zadeklarowano liczbe graczy: " << gracze << endl;
            }
            else
            {
                cout << "Urucham program ponownie" << endl;

            }
        }

    } while (gracze >= 2 && gracze >= 5);


    cout << "Liczba graczy wynosi: ";
    cout << gracze << endl;

    for (int i = 1; i <= 1; i++) //Wprowadzanie nickow graczy 
    {
        if (gracze == 2)
        {
            cout << "Wprowadz nick gracza nr 1: " << endl;
            cin >> gracz[0];
            cout << "Wprowadz nick gracza nr 2" << endl;
            cin >> gracz[1];

        }
        else
        {
            if (gracze == 3)
            {
                cout << "Wprowadz nick gracza nr 1: " << endl;
                cin >> gracz[0];
                cout << "Wprowadz nick gracza nr 2" << endl;
                cin >> gracz[1];
                cout << "Wprowadz nick gracza nr 3" << endl;
                cin >> gracz[2];
            }
            else
            {
                cout << "Wprowadz nick gracza nr 1: " << endl;
                cin >> gracz[0];
                cout << "Wprowadz nick gracza nr 2" << endl;
                cin >> gracz[1];
                cout << "Wprowadz nick gracza nr 3" << endl;
                cin >> gracz[2];
                cout << "Wprowadz nick gracza nr 4" << endl;
                cin >> gracz[3];
            }
        }

        cout << "Rozpocznijmy gre" << endl; //Rozpoczyna gre
        cout << "Zagramy do 6 rund " << endl;

        cout << "Runda 1" << endl;
        cout << "Rozpoczyna gracz o nicku " << gracz[b] << endl;
        int x = 0;
        for (int y = 1; y <= gracze; y++) // Wykonuje runde 1
        {
            cout << "Losuje gracz o nicku " << gracz[b] << endl;
            cout << " Trwa losowanie liczby... " << endl;

            int los = rand() % 7;
            int los2 = rand() % 7;
            cout << "Wylosowana liczba dla gracza o nicku " << gracz[b] << " to: " << kostka[los] << " i " << kostka[los2] << endl;
            wynik[a] = wynik[a] + kostka[los] + kostka[los2];
            cout << "Aktualna liczba punktow to: " << wynik[a] << endl;
            a++;
            b++;

        }


        wynik1 = wynik[0]; //Przypisuje wartosc z tablicy do zmiennej wynik ;d
        wynik2 = wynik[1];
        wynik3 = wynik[2];
        wynik4 = wynik[3];

        b = 0; // zeruje liczniki zeby petla nie miala dalna i wszystkie wyniki byly poprawne
        a = 0;

        cout << "Runda 2" << endl;
        for (int z = 1; z <= gracze; z++) //wykonuje runde 2
        {

            cout << "Losuje gracz o nicku " << gracz[b] << endl;
            cout << " Trwa losowanie liczby... " << endl;

            int los = rand() % 7;
            int los2 = rand() % 7;
            cout << "Wylosowana liczba dla gracza o nicku " << gracz[b] << " to: " << kostka[los] << " i " << kostka[los2] << endl;
            wynik[a] = wynik[a] + kostka[los] + kostka[los2]; // Dlaczego tablica z wynikami nie przechowuje ogolnego wyniku?
            cout << "Aktualna liczba punktow to: " << wynik[a] << endl;

            b++;
            a++;

        }
        wynik1 = wynik[0]; //Przypisuje wartosc z tablicy do zmiennej wynik ;d
        wynik2 = wynik[1];
        wynik3 = wynik[2];
        wynik4 = wynik[3];

        b = 0; // zeruje liczniki zeby petla nie miala dalna i wszystkie wyniki byly poprawne
        a = 0;

        cout << " Runda 3" << endl;
        for (int y = 1; y <= gracze; y++) // Wykonuje runde 1
        {
            cout << "Losuje gracz o nicku " << gracz[b] << endl;
            cout << " Trwa losowanie liczby... " << endl;

            int los = rand() % 7;
            int los2 = rand() % 7;
            cout << "Wylosowana liczba dla gracza o nicku " << gracz[b] << " to: " << kostka[los] << " i " << kostka[los2] << endl;
            wynik[a] = wynik[a] + kostka[los] + kostka[los2];
            cout << "Aktualna liczba punktow to: " << wynik[a] << endl;
            a++;
            b++;

        }

        wynik1 = wynik[0]; //Przypisuje wartosc z tablicy do zmiennej wynik ;d
        wynik2 = wynik[1];
        wynik3 = wynik[2];
        wynik4 = wynik[3];

        b = 0; // zeruje liczniki zeby petla nie miala dalna i wszystkie wyniki byly poprawne
        a = 0;

        cout << "Runda 4" << endl;
        for (int z = 1; z <= gracze; z++) //wykonuje runde 2
        {

            cout << "Losuje gracz o nicku " << gracz[b] << endl;
            cout << " Trwa losowanie liczby... " << endl;

            int los = rand() % 7;
            int los2 = rand() % 7;
            cout << "Wylosowana liczba dla gracza o nicku " << gracz[b] << " to: " << kostka[los] << " i " << kostka[los2] << endl;
            wynik[a] = wynik[a] + kostka[los] + kostka[los2]; // Dlaczego tablica z wynikami nie przechowuje ogolnego wyniku?
            cout << "Aktualna liczba punktow to: " << wynik[a] << endl;

            b++;
            a++;

        }

        wynik1 = wynik[0]; //Przypisuje wartosc z tablicy do zmiennej wynik ;d
        wynik2 = wynik[1];
        wynik3 = wynik[2];
        wynik4 = wynik[3];

        b = 0; // zeruje liczniki zeby petla nie miala dalna i wszystkie wyniki byly poprawne
        a = 0;

        cout << " Runda 5" << endl;
        for (int z = 1; z <= gracze; z++) //wykonuje runde 2
        {

            cout << "Losuje gracz o nicku " << gracz[b] << endl;
            cout << " Trwa losowanie liczby... " << endl;

            int los = rand() % 7;
            int los2 = rand() % 7;
            cout << "Wylosowana liczba dla gracza o nicku " << gracz[b] << " to: " << kostka[los] << " i " << kostka[los2] << endl;
            wynik[a] = wynik[a] + kostka[los] + kostka[los2]; // Dlaczego tablica z wynikami nie przechowuje ogolnego wyniku?
            cout << "Aktualna liczba punktow to: " << wynik[a] << endl;

            b++;
            a++;

        }

        wynik1 = wynik[0]; //Przypisuje wartosc z tablicy do zmiennej wynik ;d
        wynik2 = wynik[1];
        wynik3 = wynik[2];
        wynik4 = wynik[3];

        b = 0; // zeruje liczniki zeby petla nie miala dalna i wszystkie wyniki byly poprawne
        a = 0;

        cout << "Runda 6" << endl;
        for (int z = 1; z <= gracze; z++) //wykonuje runde 2
        {

            cout << "Losuje gracz o nicku " << gracz[b] << endl;
            cout << " Trwa losowanie liczby... " << endl;

            int los = rand() % 7;
            int los2 = rand() % 7;
            cout << "Wylosowana liczba dla gracza o nicku " << gracz[b] << " to: " << kostka[los] << " i " << kostka[los2] << endl;
            wynik[a] = wynik[a] + kostka[los] + kostka[los2]; // Dlaczego tablica z wynikami nie przechowuje ogolnego wyniku?
            cout << "Aktualna liczba punktow to: " << wynik[a] << endl;

            b++;
            a++;

        }

        
}


        
         //Dlaczego wynik nie zapisuje ogolnego wyniku ? 
         // Dlaczego po 2 petli wynik jest do dupy


    }

}