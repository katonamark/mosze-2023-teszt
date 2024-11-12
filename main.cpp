#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];//rossz valtozo nev
    std::cout << '1-100 ertekek duplazasa'//''hasznalata, ehelyett:"", valamint pontovesszo hiany
    for (int i = 0;)//hianyos for ciklus, i kezdoerteke 0 helyett 1 kell hogy legyen
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)//i kezdoerteke 0 helyett 1 kell hogy legyen, a for-ciklus masodik parametere i <= N_ELEMENTS kell hogy legyen
    {
        std::cout << "Ertek:"//hianyzo pontosvesszo, illetve hianyos kiiras
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;// a valtozonak nincs megadva kezdoertek 
    for (int i = 0; i < N_ELEMENTS, i++)//i kezdoerteke 0 helyett 1 kell hogy legyen, a for-ciklus masodik parametere i <= N_ELEMENTS kell hogy legyen, i <= N_ELEMENTS utan nem sima, hanem pontosvesszo szukseges
    {
        atlag += b[i]//hianyzo pontosvesszo
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}