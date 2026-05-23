#include <atomic>
using namespace std;

class Foo {
    atomic<int> turn;
public:
    Foo() {
        turn = 0;
    }

    void first(function<void()> printFirst) {
        printFirst();
        turn = 1;
    }

    void second(function<void()> printSecond) {
        while (turn != 1);
        printSecond();
        turn = 2;
    }

    void third(function<void()> printThird) {
        while (turn != 2);
        printThird();
    }
};
