/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
int S0 = 0;
int V0 = 0;
int tempo = 0;
int aceleracão = 0;


cout << "digite o valor de S0" << endl;
cin >> S0;
cout << "digite o valor de V0" << endl;
cin >> V0;
cout << "digite o tempo" << endl;
cin >> tempo;
cout << "digite a aceleração" << endl;
cin >> aceleracão; 

float conta= (S0 + V0*tempo + aceleracão*tempo*tempo/2);


cout << "o valor de S(t) é " << conta; 
    

    return 0;
}
