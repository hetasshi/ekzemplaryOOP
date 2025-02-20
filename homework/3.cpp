#include <iostream>
using namespace std;

class Seconds {
private:
    int seconds;
public:
    Seconds(int s = 0) : seconds(s) {}
};

int main() {
    // создадим объект без имени, типа утечка памяти
    new Seconds(10);

    // чем это черевато?
    // объект создаётся просто в куче, но указатель на него не сохраняется,
    // поэтому его и нельзя удалить) так и случается утечка памяти

    return 0;
}
