#include <iostream>
using namespace std;

int main() {
    char grade;
    int studentCount = 0;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

    cout << "Please input grade of each student (A-F) or input 0 to exit.\n";

    while (true) {
        cout << "Student [" << studentCount + 1 << "]: ";
        cin >> grade;

        if (grade == '0') break;

        switch (grade) {
            case 'A':
                countA++;
                studentCount++;
                break;
            case 'B':
                countB++;
                studentCount++;
                break;
            case 'C':
                countC++;
                studentCount++;
                break;
            case 'D':
                countD++;
                studentCount++;
                break;
            case 'F':
                countF++;
                studentCount++;
                break;
            default:
                cout << "Wrong input. Please input again.\n";
        }
    }

    cout << "In total " << studentCount << " students.\n";
    cout << "A = " << countA << ", B = " << countB << ", C = " << countC
         << ", D = " << countD << ", F = " << countF << endl;

    return 0;
}