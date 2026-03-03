#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //NELEMENTS nincs definiálva
    int *b = new int[NELEMENTS];

    //rossz idézőjel (' '), ez char literál, nem string + hiányzik a pontosvessző
    std::cout << '1-100 ertekek duplazasa'

    //hiányos for ciklus
    for (int i = 0;)
    {
        b[i] = i * 2;
    }

    //hibás ciklusfeltétel (i; i++) → nincs felső határ
    for (int i = 0; i; i++)
    {
        // HIBA: hiányzik a kiírandó változó és a pontosvessző
        std::cout << "Ertek:"
    }    

    std::cout << "Atlag szamitasa: " << std::endl;

    int atlag;

    //vessző van ; helyett a for ciklusban
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        //hiányzik a pontosvessző
        atlag += b[i]
    }

    atlag /= N_ELEMENTS;

    std::cout << "Atlag: " << atlag << std::endl;

    return 0;
}