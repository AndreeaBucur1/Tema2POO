#include "Vector.h"


Vector::~Vector()
    {
    if(dim)
       delete []v;
    dim=0;
    }
 Vector::Vector()
         {
        dim=0;
        v=new Complex[dim];
         }
Vector::Vector(int n,Complex *vect)
    { v=new Complex[n];
      dim=n;
      for(int i=0;i<n;i++)
        v[i]=vect[i];

    }
Vector::Vector(Vector &w)
{
    if(this!=&w)
     {  this->dim = w.dim;
        if(w.dim<0)
            this->v=NULL;
        else
        {
            v=new Complex[w.dim];
            for(int i=0;i<w.dim;i++)
                this->v[i]=w.v[i];
        }
     }
}

istream& operator>>(istream& in, Vector& w)
    {
        if(w.dim)
            delete []w.v;
        in>>w.dim;
        w.v=new Complex[w.dim];
        for(int i=0;i<w.dim;i++)
            {in>>w.v[i];}
        return in;
    }
ostream& operator<<(ostream& out,Vector& w)
     {
         out<<"Dimensiunea vectorului este: "<<w.dim<<endl;
         out<<"Elementele vectorului: ";
    for(int i=0;i<w.dim;i++)
        out<<w.v[i]<<' ';
    return out;
    }

Vector& Vector::operator =(const Vector *w)
{
    this->dim=w->dim;
    for(int i=0;i<w->dim;i++)
        this->v[i]=w->v[i];
    return *this;
}



