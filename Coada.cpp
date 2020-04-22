#include "Coada.h"

Coada::Coada():Vector(){}
Coada::Coada(int n,Complex *vect):Vector(n,vect) {}
Coada::Coada(Coada &ob):Vector(ob){}
Coada::~Coada()
    {
    if(dim)
       delete []v;
    dim=0;
    }


istream& operator>>(istream& in, Coada& ob)
    {
        if(ob.dim)
            delete []ob.v;
        in>>ob.dim;
        for(int i=0;i<ob.dim;i++)
            {in>>ob.v[i]; cout<<ob.v[i];}
        return in;
    }


ostream& operator<<(ostream& out, Coada& ob)
    {
        out<<"Dimensiunea cozii: ";
        out<<ob.dim<<endl;
        if(ob.dim)
        {
            out<<"Elementele cozii: ";
            for(int i=0;i<ob.dim;i++)
                out<<ob.v[i]<<' ';
        }
        return out;
    }

Coada& Coada ::operator =(const Coada  *ob)
    {
        this->dim=ob->dim;
        for(int i=0;i<ob->dim;i++)
            this->v[i]=ob->v[i];
        return *this;
    }


void Coada::insert(Complex nr)
    {
        dim++;
        v[dim-1]=nr;
        for(int i=0;i<dim;i++)
            cout<<v[i]<<' ';
        cout<<endl;
    }


void Coada::del()
    {
        if(dim)
            {for(int i=0;i<dim-1;i++)
                v[i]=v[i+1];
            dim--;
            }

        if(dim)
          for(int i=0;i<dim;i++)
             cout<<v[i]<<' ';
         else cout<<"Coada goala"<<endl;
        cout<<endl;

    }


void Coada::verificare(Coada &ob)
    {
        int OK=1;
        for(int i=0;i<ob.dim;i++)
            if(v[i].getRe()!=0)
                {OK=0;
                break;
                }
        if(OK) cout<<"Coada este pur imaginara"<<endl;
            else cout<<"Coada nu este pur imaginara"<<endl;
    }

