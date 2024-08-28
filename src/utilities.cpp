#include <iostream>
#include <cstdint>

using u32 = std::uint32_t;

constexpr auto foo(const u32 num) { // NOLINT(*-no-recursion)
    if (num <= 1)
        return num;
    return foo(num - 1) + foo(num - 2);
}

int main() {
    std::cout << "Hello" << '\n';

    for (u32 test{foo(5)}; test < 1000; ++test) {
        if (!(test % 100))
            std::cout << std::hex << test << '\n';
    }
}