#include "Stiva.h"
#include<iostream>
using namespace std;




Stiva::Stiva():Vector(){}

Stiva::Stiva(int n,Complex *vect):Vector(n,vect) {}
Stiva::Stiva(Stiva &ob):Vector(ob){}
Stiva::~Stiva()
{
    if(dim)
       delete []v;
    dim=0;
}


istream& operator>>(istream& in, Stiva& ob)
    {
        if(ob.dim)
            delete []ob.v;
        in>>ob.dim;
        for(int i=0;i<ob.dim;i++)
            {in>>ob.v[i]; cout<<ob.v[i];}
        return in;
    }


ostream& operator<<(ostream& out, Stiva& ob)
    {
        out<<"Dimensiunea stivei: ";
        out<<ob.dim<<endl;
        if(ob.dim)
        {
            out<<"Elementele stivei: ";
            for(int i=0;i<ob.dim;i++)
                out<<ob.v[i]<<' ';
        }
        return out;
    }


Stiva& Stiva::operator =(const Stiva *ob)
    {
        this->dim=ob->dim;
        for(int i=0;i<ob->dim;i++)
            this->v[i]=ob->v[i];
        return *this;
    }


void Stiva::insert(Complex nr)
    {
        dim++;
        v[dim-1]=nr;
        for(int i=0;i<dim;i++)
            cout<<v[i]<<' ';
        cout<<endl;
    }


void Stiva::del()
{
  if(dim>0)
    {dim--;
  for(int i=0;i<dim;i++)
     cout<<v[i]<<' ';
  cout<<endl;
    }
    else cout<<"Stiva goala"<<endl;

}


void Stiva::verificare(Stiva &ob)
    {   int OK=1;
        for(int i=0;i<ob.dim;i++)
            if(v[i].getRe()!=0)
                {OK=0;
                break;
                }
        if(OK) cout<<"Stiva este pur imaginara"<<endl;
            else cout<<"Stiva nu este pur imaginara"<<endl;
    }









