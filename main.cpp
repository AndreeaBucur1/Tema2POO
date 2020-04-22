#include<iostream>
#include "Complex.h"
#include "Vector.h"
#include "Stiva.h"
#include "Coada.h"
using namespace std;
int main()
{



   /* Vector v;
    cin>>v;
    cout<<v;
    cout<<endl;*/

    Complex nr;
    Complex *w=nr.read_n(4);

    Stiva s(4,w);


   Complex x;
    cin>>x;
    s.insert(x);
    s.del();
    s.del();
    s.del();
    s.verificare(s);

    Coada c;
    cin>>c;
    c.verificare(c);
    cout<<c;



    return 0;
}
