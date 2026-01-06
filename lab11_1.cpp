#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    int size = 9;

    cout << "Press Enter 3 times to reveal your future." << endl;

    for (int i = 0; i < 3; i++) {
        cin.get();
    }

    srand(time(0));
    int luktao = rand() % size;

    cout << "\nYou will get " << grades[luktao] << " in this 261102." << endl;

    return 0;
}