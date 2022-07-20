#include <iostream>

using namespace std;

int population=1;
int hours=(0);

int main()
{
    cout<<"This program simulates multiplication of bacteria."
    "After how many hours there will be over 1000000000 bacterias starting from one?"<<endl;

    while(population<=1000000000)
    {
        hours++;
        population = population*2;
        cout<<"Hours passed: "<<hours<<". ";
        cout<<"Number of bacteria:"<<population<<endl;
    }
    cout<<"\nPress any key to exit";
    getchar();
   return 0;
}
