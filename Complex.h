#include<iostream>
#ifndef COMPLEX_H
#define COMPLEX_H
using namespace std;

class Complex
{
    private:
           float re;
           float im;
    public:
        Complex();
        Complex(float x,float y);
        ~Complex() {};
        Complex(const Complex& nr);
        void setRe(float x)
            {
                re=x;
            }
        void setIm(float x)
            {
                im=x;
            }
        int getRe()
            {
                return re;
            }
        int getIm()
            {
                return im;
            }
        friend istream& operator>>(istream& in, Complex& nr);
        friend ostream& operator<<(ostream& out,Complex& nr);
        Complex& operator =(Complex &nr);
        Complex* read_n(int n)
                {
                    Complex* v=new Complex[n];
                    for(int i=0;i<n;i++)
                        cin>>v[i];
                    for(int i=0;i<n;i++)
                        {cout<<v[i]<<' ';

                        }
                    cout<<endl;
                    return v;
                }
        void afisare(Complex ob);




};

#endif // COMPLEX_H
