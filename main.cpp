#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];//rossz valtozo nev
    std::cout << "1-100 ertekek duplazasa" <<std::endl;//''hasznalata, ehelyett:"", valamint pontovesszo hiany
    for (int i = 1;  i <= N_ELEMENTS; i++)//hianyos for ciklus, i kezdoerteke 0 helyett 1 kell hogy legyen
    {
        b[i] = i * 2;
    }
    for (int i = 1; i <= N_ELEMENTS; i++)//i kezdoerteke 0 helyett 1 kell hogy legyen, a for-ciklus masodik parametere i <= N_ELEMENTS kell hogy legyen
    {
        std::cout << "Ertek:" << " " <<b[i] << std::endl;//hianyzo pontosvesszo, illetve hianyos kiiras
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag=0;// a valtozonak nincs megadva kezdoertek 
    for (int i = 1; i <= N_ELEMENTS; i++)//i kezdoerteke 0 helyett 1 kell hogy legyen, a for-ciklus masodik parametere i <= N_ELEMENTS kell hogy legyen, i <= N_ELEMENTS utan nem sima, hanem pontosvesszo szukseges
    {
        atlag += b[i];//hianyzo pontosvesszo
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "A MOSZE a legjobb tárgy!" << std::endl;
    return 0;
}
