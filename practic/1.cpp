#include <iostream>
#include <string>
using namespace std;

class Seconds {
private:
    int seconds;
public:
    Seconds(int s = 0) : seconds(s) {}
    void setSeconds(int s) { seconds = s; }
    int getSeconds() const { return seconds; }
    string toString() const { return to_string(seconds); }
};

int main() {
    setlocale(LC_ALL, "Rus");
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    Seconds** arr = new Seconds * [size];
    for (int i = 0; i < size; ++i) {
        arr[i] = new Seconds(i * 10);
    }

    cout << "Значения в массиве:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i]->toString() << " ";
    }
    cout << endl;

    for (int i = 0; i < size; ++i) {
        delete arr[i];
    }
    delete[] arr;

    return 0;
}
