#include <iostream>
#include <string>

using namespace std;

int main() {
  for (int i = 1; i <= 100; i++) {
    string a;
    if (i % 3 == 0) {
      a.append("Fizz");
    }
    if (i % 5 == 0) {
      a.append("Buzz");
    }
    if (!a.empty()) {
      cout << a;
    } else {
      cout << i;
    }
    cout << endl;
  }
}
