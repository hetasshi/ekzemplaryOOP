#include <iostream>
#include <string>
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
    Seconds* s1 = new Seconds(70);
    Seconds* s2 = new Seconds(300);

    cout << "s1: " << s1->toString() << endl;
    cout << "s2: " << s2->toString() << endl;

    delete s1;
    delete s2;

    return 0;
}
