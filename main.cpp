#include <iostream>

using namespace std;

int a,b;
int main()
{
    cout << "Enter the factor a" << endl;
    cin >> a;
    cout << "Enter the factor b" << endl;
    cin >>b;

    while(a !=b) {
        if (a>b) {
            a=a-b;
        }
            else
                b=b-a;
        }
    cout<< "The largest common divisor is: " << a << endl;
    return 0;
}
