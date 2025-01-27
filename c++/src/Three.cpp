#include <coroutine>
#include <iostream>

using namespace std;

struct ReturnType {
    struct promise_type {
        ReturnType get_return_object() { return {}; }
        std::suspend_never initial_suspend() { return {}; }
        std::suspend_never final_suspend() noexcept { return {}; }
        void return_void() {}
        void unhandled_exception() {}
    };
};

int sum(int a, int b) { return a + b; }

ReturnType simple() {
    co_return;
}

int main() {
    simple();

    return 0;
}
