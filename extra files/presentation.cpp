#include <iostream>
#include <chrono>

extern "C" {
    void cpp_loop(long long& sum) {
        for (int i = 0; i < 1000000; ++i) {
            sum += i;
        }
    }
}

/*
int main() {
    // Define a variable to store the sum
    long long sum = 0;

    // Measure C++ loop execution time
    auto start = std::chrono::steady_clock::now();
    cpp_loop(sum);
    auto end = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "C++ loop execution time: " << duration << " milliseconds" << std::endl;
    return 0;
}
*/