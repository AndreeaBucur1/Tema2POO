#ifndef VECTOR_H
#define VECTOR_H
#include<iostream>
#include "Complex.h"

class Vector
{
    protected:
        int dim;
        Complex *v;

    public:
        Vector();
        Vector(int n,Complex *vect);

        Vector(Vector &w);
        virtual ~Vector();
        friend istream& operator>>(istream& in, Vector& nr);
        friend ostream& operator<<(ostream& out,Vector& nr);
        Vector& operator =(const Vector *w);
        virtual Vector* read_n(int n)
                {
                    Vector* v=new Vector[n];
                    for(int i=0;i<n;i++)
                        cin>>v[i];
                    for(int i=0;i<n;i++)
                        {cout<<v[i]<<' ';
                        cout<<endl;
                        }
                    cout<<endl;
                    return v;
                }



};

#endif // VECTOR_H
