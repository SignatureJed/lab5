#include<iostream>
using namespace std;




int main(){


int integer_number;
int Even_number=0;
int Odd_number=0;

    while (1)
    {
        cout << "Enter an integer: ";
        cin >> integer_number;

        if (integer_number==0)
        {
            cout << "#Even numbers = "<< Even_number<<endl;
            cout << "#Odd numbers = " << Odd_number;
            
            break;
        }
        
        if (integer_number%2==0)
        {
            Even_number = Even_number+1;
        }else
        {
            Odd_number = Odd_number+1;
        }
        
        
        
    }
    return 0;
}