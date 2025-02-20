#include <iostream>
using namespace std;

class Seconds {
private:
    int seconds;
public:
    Seconds(int s = 0) : seconds(s) {}
    void setSeconds(int s) { seconds = s; }
    int getSeconds() const { return seconds; }
    bool operator==(const Seconds& other) const {
        return seconds == other.seconds;
    }
};

void modifySeconds(Seconds& s, int newVal) {
    s.setSeconds(newVal);
}

int main() {
    setlocale(LC_ALL, "Rus");
    Seconds a(15), b(15);
    modifySeconds(b, 15);

    if (a == b) {
        cout << "Объекты равны" << endl;
    }
    else {
        cout << "Объекты различны" << endl;
    }

    return 0;
}
