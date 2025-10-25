#include <iostream>

using namespace std;

int main()
{
    int choise=0, size=0;
    do
    {
        cout << "Choose a shape" << endl;
        cout<<"1 - rectangle"<<endl;
        cout<<"2 - triangle"<<endl;
        cout<<"Enter choise:"<<endl;
        cin>>choise;
        if (choise>2)
            cout<<"Wrong choise!"<<endl;
    }
    while(choise>2);
    cout<<"Enter size"<<endl;
    cin>>size;
    char star ='*';
    if (choise==1)
    {
        for (int iterator_1=0; iterator_1<size; iterator_1++)
        {
            for (int iterator_2=0; iterator_2<size; iterator_2++)
            {
                cout<<star;
            }
            cout << endl;
        }
    }
    else
    {
        for (int iterator_1=0; iterator_1<size; iterator_1++)
        {
            for (int iterator_2=0; iterator_2<(iterator_1+1); iterator_2++)
            {
                cout<< star;
            }
            cout<<endl;
        }

    }
    return 0;
}
