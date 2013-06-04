#include <iostream>
#include <string>

#include "szablony.h"

/** Przykladowa klasa służąca do zademonstrowania działania funkcji szablonowych */
class Liczba {
    int a_;
public:
    bool operator>(const Liczba& p) const { return a_>p.a_;}
    bool operator<(const Liczba& p) const { return a_<p.a_;}
    Liczba(int a): a_(a) {}
    Liczba():a_(0){}       //gdy samodzielnie zdefiniuje się jakikolwiek konstruktor, trzeba też zdefiniować domyślny
};



//na początku kilka nadmiarowych funkcji:
unsigned max(unsigned a, unsigned b){
    return a>b ? a : b ;
}
std::string max(std::string a, std::string b){
    return a>b ? a : b ;
}
double max(double a, double b){
    return a>b ? a : b ;
}
Liczba max(Liczba a, Liczba b){
    return a>b ? a : b ;
}
long long max(long long  a, long long  b){
    return a>b ? a : b ;
}

/** Dla przypomnienia - makra w stylu C.
* Dlaczego nie należy używać?
*/
#define makro_max(a,b)    ((a)>(b) ? (a) : (b))






/** Funkcja szablonowa max, zwraca większy z dwóch elementów.
* Wymaga, by w klasie zdefiniowany był:
* operator>
* konstruktor kopiujący (jawnie zdefiniowany lub pozostawiony kompilatorowi)
*/
template <typename T>
T max (T a,  T b) {
    return a>b ? a : b ;
}

/** Funkcja szablonowa min, przyjmuje stałą referencję do obiektu ze względu na wydajność
* Nie wywołuje konstruktorów kopiujących ani destruktorów
* słowo kluczowe class i typename wewnątrz listy parametrów konstrukora jest
* w tym kontekcie (i nigdzie indziej) całkowicie wymienne
* <typename T> == <class T>
*/

template <class T>
const T& min (const T& a, const T& b) {
    return a<b ? a : b ;
}




/*
Zadanie do wykonania:
napisać parametryzowaną funkcję
createTable(int n);
zwracającą n-elementową tablicę o typie będącym parametrem szablonu


*/


//uwaga - czy łańcuchy w przykładzie poniżej porównywane są poprawnie? Dlaczego? jak poprawić?

template  <typename T>
T* createTable(int n) {
    T* table = new T [n];
    return table;
}


int main(int argv, char** argc) {

    Liczba p1(125), p2(139);
    Liczba p3 =  max<Liczba>(p1, p2);
    Liczba p4 =  min<Liczba>(p1, p2);

    int i = 224, j = 268;
    unsigned int ui = 13,  uj = 34;


    std::cout << min<unsigned>(i, uj) << " " << min<std::string> ("B", "a");


    char* c = createTable<char>(40);

    foo();
    return 0;
}
