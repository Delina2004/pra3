#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "number of rows: ";
    cin >> rows;

    for (int i = 0; i <= rows; i++) {
        //cout << "*" <<endl;
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
 return 0;
}
