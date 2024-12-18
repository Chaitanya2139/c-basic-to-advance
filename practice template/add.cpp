#include <iostream>
using namespace std;
template <typename T1>
class Num1 {
public:
    T1 num1;
    Num1(T1 n) : num1(n) {}
};
template <typename T2>
class Num2 {
public:
    T2 num2;
    Num2(T2 n) : num2(n) {}
};
template <typename T1, typename T2>
auto add(Num1<T1> obj1, Num2<T2> obj2) -> decltype(obj1.num1 + obj2.num2) {
    return obj1.num1 + obj2.num2;
}

int main() {
    Num1<int> intObj(10);
    Num2<double> doubleObj(20.5);

    cout << "Addition of 10 and 20.5: " << add(intObj, doubleObj) << endl;

    return 0;
}
