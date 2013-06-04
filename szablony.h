#ifndef szablony_h
#define szablony_h


class TablicaChar10elem {
    char dane [10];
public:
    void setElement(int x, char value);
    char getElement(int x);
};

void TablicaChar10elem::setElement(int x, char value) {
    dane[x]=value;
}

char TablicaChar10elem::getElement(int x) {
    return dane[x];
}




template <typename T, int N>
class TablicaSparametryzowana {
    T dane [N];
public:
    void setElement(int x, T value);
    T getElement(int x);
};

template <typename T, int N>
void TablicaSparametryzowana<T,N>::setElement(int x, T value) {
    dane[x]=value;
}

template <typename T, int N>
T TablicaSparametryzowana<T,N>::getElement(int x) {
    return dane[x];
}




//Jak widać, poza deklaracją, użycie jest takie samo

//zmodyfiować klasę TablicaSparametryzowana tak, by można było ją wywoływać bez parametrów
void foo() {

    TablicaChar10elem t1;
    TablicaSparametryzowana<char, 10> t2;


    t1.setElement(3, 'e');
    t2.setElement(5, 'R');

    char c;
    c = t1.getElement(3);
    c = t2.getElement(5);



}





#endif  //szablony_h