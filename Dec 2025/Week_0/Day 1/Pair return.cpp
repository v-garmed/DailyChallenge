// 1.-receive two integers 
// 2.- return sum and product using only one function
// 3.- Print the result

#include <iostream>
#include <utility> // needed for std::pair

using namespace std;

pair<int, int> calculate(int a, int b) {
    return {a + b, a * b};
}

int main () {

    int x = 2;
    int y = 3;

    auto [sum, product] = calculate (x,y);

    cout << "sum:" << sum << endl;
    cout << "product:" << product << endl;

    return 0;
    
}