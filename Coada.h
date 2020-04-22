#ifndef COADA_H
#define COADA_H

#include "Vector.h"


class Coada : public Vector
{
    public:
        Coada();
        Coada(int n,Complex *vect);
        Coada(Coada &ob);
        ~Coada();
        friend istream& operator>>(istream& in, Coada& ob);
        friend ostream& operator<<(ostream& out, Coada& ob);
        Coada& operator =(const Coada *ob);
        void insert(Complex nr);
        void del();
        void verificare(Coada &ob);
        Coada* read_n(int n)
                {
                    Coada* c=new Coada[n];
                    for(int i=0;i<n;i++)
                        cin>>c[i];
                    for(int i=0;i<n;i++)
                        {cout<<c[i]<<' ';
                        cout<<endl;
                        }
                    cout<<endl;
                    return c;
                }

    protected:

    private:
};

#endif // COADA_H
