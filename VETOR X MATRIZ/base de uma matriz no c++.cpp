#include <iostream>
using namespace std;

int main()
{
    int vetor[5][5], resu;
    
    for(int i =0; i<5; i++)
    {
        for(int j =0;j<5;j++)
        {
            resu = i + j;
            cout << "[ " << resu << " ]";
        }
        cout << "\n";
    }
}
