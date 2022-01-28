#include <iostream>
#include <fstream>

using namespace std;

int gnfile(int cc = 1)
{
    ofstream myfile;
    myfile.open ("testfpf.txt");
    myfile << "Wow <3.";
    myfile.close();   
}

int arraym(int dd = 1)
{
    const int HEIGHT = 3, WIDTH = 3;
    double marray1[HEIGHT][WIDTH] = {{0,1,2},{9,8,7},{100,500,900}}; 
    int n,m;

    for(n = 0;n < HEIGHT;n++)
    {
        for(m = 0;m < WIDTH;m++)
        {
            cout << "Elemento a x [" << n << "][" << m << "]: ";
            cout << marray1[n][m] << endl;
        }
    }

    cout << "" << endl;

    for(n = 0;n < HEIGHT;n++)
    {
        for(m = 0;m < WIDTH;m++)
        {
            cout << "Elemento a x [" << n << "][" << m << "]: ";
            cin >> marray1[n][m];
        }
    }

    cout << "" << endl;

    for(n = 0;n < HEIGHT;n++)
    {
        for(m = 0;m < WIDTH;m++)
        {
            cout << "Elemento a x [" << n << "][" << m << "]: ";
            cout << marray1[n][m] << endl;
        }
    }
}

int switchsample(int ee = 1)
{
    int nmenu;

    do
    {
        cout << "Inserisci un numero: ";
        cin >> nmenu;

        switch(nmenu)
        {
            case 1:
            cout << "EHYYY" << endl;
            break;

            case 2:
            cout << "SUS" << endl;
            break;

            case 3:
            cout << "WOW" << endl;
            break;

            case 4:
            break;

            default:
            cout << "Non valido" << endl;
            break;
        } 
    } while (nmenu != 4);   
}

int main()
{
    gnfile(1);

    arraym(1);

    switchsample(1);

    int ffpower;

    cout << "Inserire potenza final flash (1 a 10): ";
    cin >> ffpower;

    while(ffpower < 1 || ffpower > 10)
    {
        cout << "Reinserire: ";
        cin >> ffpower;
    }

    cout << "FINAL FLASH DI " << ffpower << " LIVELLOOOOO!";

    return(0);
}