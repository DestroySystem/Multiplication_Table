#include <iostream>
using namespace std;

int main()
{
    int value = 1, sum = 0;
    cout<<"\t\t\tMultiplication table of the entered number\n";
    cout<<"\t\t\t----------------------------------\n";
    cout << " Enter number to print the sum of multiply:" << endl;
    cin >> value;
    for( int i = 1; i <= 10; i++)
    {
        sum = i * value;
        cout << i << " * " << value << " = " << sum << endl;
    }
    return 0;
}