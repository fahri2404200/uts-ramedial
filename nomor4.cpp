#include <iostream>
using namespace std;

int main()
{
    int bil;
    cout << "masukkan nilai: ";
    cin >> bil;
    if (bil==80) {
       cout << "nilai " << bil << " = A";
    } else if (bil==50) {
       cout << "nilai " << bil << " = B";
    } else if (bil==10) {
       cout << "nilai " << bil << " = C";
    } else if (bil==0) {
       cout << "nilai " << bil << " = E";
    }
return 0;
}
