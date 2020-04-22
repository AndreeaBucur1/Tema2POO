#include "Complex.h"
#include<iostream>
using namespace std;

Complex::Complex()
    {
        re=0;
        im=0;
    }

Complex::Complex(float x,float y)
{
    re=x;
    im=y;
}

Complex::Complex(const Complex &nr)
{
    this->re=nr.re;
    this->im=nr.im;
}

istream& operator>>(istream& in,Complex& nr)
            {
                in>>nr.re>>nr.im;
                return in;
            }

ostream& operator<<(ostream& out,Complex& nr)
            {

                out<<nr.re<<'+'<<nr.im<<"*i";
                return out;
            }
Complex& Complex::operator =(Complex &nr)
        {
           this->re=nr.re;
           this->im=nr.im;
          return *this;
        }
void Complex::afisare(Complex ob)
    {
        if(ob.re==0 && ob.im==0)
            cout<<"0";
            else if (ob.re==0)
                cout<<ob.im<<"*i";
               else if(ob.im==0)
                  cout<<ob.re;
                  else cout<<ob.re<<'+'<<ob.im<<"*i";
        cout<<endl;

    }
