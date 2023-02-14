#include <iostream>
using namespace  std;

// number of Fibonacci terms to generate
void Fibonacci(int n){
    double t1 = 0, t2 = 1, nextTerm;

    std::cout << "Fibonacci Series:" << std::endl;

    for (int i = 1; i <= n; ++i) {
        std::cout << t1 << " ";

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << "" << endl;
}

int main() {

    Fibonacci(10);

    return 0;
}