#ifndef STIVA_H
#define STIVA_H
#include<iostream>
using namespace std;
#include "Vector.h"


class Stiva : public Vector
{
    public:
        Stiva();
        Stiva(int n,Complex *vect);
        Stiva(Stiva &ob);
        ~Stiva();
        friend istream& operator>>(istream& in, Stiva& ob);
        friend ostream& operator<<(ostream& out,Stiva& ob);
        Stiva& operator =(const Stiva *ob);
        void insert(Complex nr);
        void del();
        void verificare(Stiva &ob);
        Stiva* read_n(int n)
                {
                    Stiva* v=new Stiva[n];
                    for(int i=0;i<n;i++)
                        cin>>v[i];
                    for(int i=0;i<n;i++)
                        {cout<<v[i]<<' ';
                        cout<<endl;
                        }
                    cout<<endl;
                    return v;

                }



    protected:

    private:
};

#endif // STIVA_H
