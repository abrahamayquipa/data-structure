#include <iostream>
#include <functional>
using namespace std;

int main() {
    auto lambdaComposicion = [](auto f, auto g) {
        return [=](double x) {
            return f(g(x));
        };
     };

    // f(x) = x²+2x +1
    auto f = [](double x) { return x * x + 2 * x + 1; };

    // g(x)= 2x-4
    auto g = [](double x) { return 2 * x - 4; };

    auto h = lambdaComposicion(f, g);

    double valor = 5.2;
    cout << h(valor);
    return 0;
}
