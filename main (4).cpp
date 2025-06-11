#include <iostream>
#include <limits>
using namespace std;

int getValidatedInteger() {
    int num;
    while (true) {
        cout << "Enter a integer: "; 
        cin >> num;
 
        if (cin.fail()) {
            cout << "Invalid input! Please enter a valid integer." << endl;

            
            cin.clear();

         
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            // Valid integer
            return num;
        }
    }
}

int main() {
    int value = getValidatedInteger();
    cout << "You entered number :: " << value << endl; 
    return 0;
}
