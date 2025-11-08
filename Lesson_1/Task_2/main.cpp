#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double number_1=0, number_2=0;
    int choise=0;
    cout << "Enter two numbers:"<<endl;
    cin >> number_1 >> number_2;
    do
    {
        cout<<"\nChoose mathematical operation:"<<endl;
        cout<<"1 - addition"<<endl;
        cout<<"2 - substraction"<<endl;
        cout<<"3 - multiplication"<<endl;
        cout<<"4 - division"<<endl;
        cout<<"5 - power"<<endl;
        cout<<"6 - square root"<<endl;
        cin>>choise;
        if (choise > 6)
            cout<<"Wrong choise!"<<endl;
    }
    while (choise>6);
    switch(choise)
    {
    case 1: cout<<"Result: "<<number_1+number_2<<endl;
        break;
    case 2: cout<<"Result: "<<number_1-number_2<<endl;
        break;
    case 3: cout<<"Result: "<<number_1*number_2<<endl;
        break;
    case 4: cout<<"Result: "<<number_1/number_2<<endl;
        break;
    case 5:cout<<"Result: "<<pow(number_1,number_2)<<endl;
        break;
    default: cout<<"Result: "<<sqrt(number_1)<<" "<<sqrt(number_2)<<endl;
        break;
    }

    return 0;
}
