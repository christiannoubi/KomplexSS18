#include <iostream>
using namespace std;

template<typename T=int>

struct Komplex {

    T re, im;

    Komplex (const T& re,  const T& im) : re(re), im(im) {

    }

    template <typename S>
    Komplex ( const Komplex<S>& k)  {
        re = k.re;
        im = k.im;
    }
};
    template <typename T>
    ostream& operator <<(ostream& os, const Komplex<T>& k) {
        os << k.re <<" "<< k.im << endl;
        return os;
    }






