#include <iostream>
#include <string>

using namespace std;

string hexToString(const string &hex) {
  string result;
  for (size_t i = 0; i < hex.length(); i += 2) {
    string byte = hex.substr(i, 2);
    char ch = static_cast<char>(stoi(byte, nullptr, 16));
    result += ch;
  }
  return result;
}

int main() {
  string fizz = hexToString("46697A7A"); // "Fizz"
  string buzz = hexToString("42757A7A"); // "Buzz"

  for (int i = 1; i <= 100; i++) {
    string a;

    if (i % 3 == 0) {
      a.append(fizz);
    }
    if (i % 5 == 0) {
      a.append(buzz);
    }

    if (!a.empty()) {
      cout << a;
    } else {
      cout << i;
    }
    cout << endl;
  }
}
