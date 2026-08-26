// My first Git practice change
// Changed directly on GitHub

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

<<<<<<< HEAD
   cout << "Result = " << a + b << endl;
=======
   cout << "Total = " << a + b << endl;
>>>>>>> practice-branch

    return 0;
}
