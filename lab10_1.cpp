#include <iostream>
using namespace std;

int main() {
    int count[5] = {};
    char grade;
    int total = 0;

    cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;

    while (true) {
        cout << "Student [" << total + 1 << "]: ";
        cin >> grade;

        if (grade == '0') {
            break;
        } else if (grade == 'A') {
            count[0]++;
        } else if (grade == 'B') {
            count[1]++;
        } else if (grade == 'C') {
            count[2]++;
        } else if (grade == 'D') {
            count[3]++;
        } else if (grade == 'F') {
            count[4]++;
        } else {
            cout << "Wrong input. Please input again." << endl;
            continue;
        }
        total++;
    }

    cout << "In total " << total << " students." << endl;
    cout << "A = " << count[0] << ", ";
    cout << "B = " << count[1] << ", ";
    cout << "C = " << count[2] << ", ";
    cout << "D = " << count[3] << ", ";
    cout << "F = " << count[4] << endl;

    return 0;
}