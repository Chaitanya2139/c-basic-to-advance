#include <iostream>
using namespace std;

template <typename T1, typename T2>
auto add(T1 a, T2 b) -> decltype(a + b) {
    return a + b;
}

int main() {
    int num1 = 10;     
    float num2 = 5.5; 
    auto result = add(num1, num2);

    cout << "Addition of " << num1 << " (int) and " << num2 << " (float) is: " << result << endl;

    return 0;
}
