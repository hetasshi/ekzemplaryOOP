#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Seconds {
private:
    int seconds;
public:
    Seconds(int s = 0) : seconds(s) {}
    void setSeconds(int s) { seconds = s; }
    string toString() const { return to_string(seconds); }
};

int main() {
    setlocale(LC_ALL, "Rus");
    vector<Seconds> vec;

    vec.push_back(Seconds(10));
    vec.push_back(Seconds(20));
    vec.push_back(Seconds(30));

    cout << "Текущие значения:" << endl;
    for (const auto& s : vec) {
        cout << s.toString() << endl;
    }

    int index, value;
    cout << "Введите индекс и новое значение: ";
    cin >> index >> value;

    if (index >= 0 && index < vec.size()) {
        vec[index].setSeconds(value);
    }
    else {
        cout << "Неверный индекс!" << endl;
    }

    cout << "Обновлённые значения:" << endl;
    for (const auto& s : vec) {
        cout << s.toString() << endl;
    }

    return 0;
}


