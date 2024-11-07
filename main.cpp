#include <iostream>
using namespace std;

float converter_1, converter_2;

float c_to_f() {
    cout << "How many Celsius?\nType here: ";
    cin >> converter_1;
    float fahrenheit = (converter_1 * 9.0/5) + 32.0;
    return fahrenheit;
}

float f_to_c() {
    cout << "How many Fahrenheit?\nType here: ";
    cin >> converter_2;
    float celsius = (converter_2 - 32) * 5.0/9;
    return celsius;
}

int main() {
    int chooser;
    cout << "Converter!" << endl;
    cout << "1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius" << endl;
    cin >> chooser;

    if (chooser == 1) {
        float fahrenheit = c_to_f();
        cout << converter_1 << " C = " << fahrenheit << " F" << endl;
    }
    else if (chooser == 2) {
        float celsius = f_to_c();
        cout << converter_2 << " F = " << celsius << " C" << endl;
    }
    else {
        cout << "Invalid choice. Please enter 1 or 2." << endl;
    }

    return 0;
}
