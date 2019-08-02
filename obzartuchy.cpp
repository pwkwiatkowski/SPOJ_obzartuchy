#include <iostream>

using namespace std;

int main()
{
    int zestawow;
    cin>>zestawow;

    int * wyniki;
    wyniki = new int [zestawow];

    for(int i=1; i<=zestawow; i++)
    {
        int obzartuchow, ciastek;
        cin>>obzartuchow>>ciastek;

        int * czasy;
        czasy = new int [obzartuchow];

        for(int i=0; i<obzartuchow; i++)
        {
            cin>>czasy[i];
        }

        int zjedzonych=0;
        for(int i=0; i<obzartuchow; i++)
        {
            zjedzonych += (24*60*60) / czasy[i];
        }
        int ile_paczek;
        if(zjedzonych % ciastek != 0)
            ile_paczek = (zjedzonych/ciastek) +1;
        else
            ile_paczek = (zjedzonych/ciastek);

        wyniki[i-1]=ile_paczek;
        delete [] czasy;
    }

    for(int i=0; i<zestawow; i++)
    {
        cout<<wyniki[i]<<endl;
    }

    delete [] wyniki;

    return 0;
}
