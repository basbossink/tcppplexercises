// Copyright (C) 2015 Bas Bossink <bas.bossink@gmail.com>

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include <iostream>
#include <limits>
#include <typeinfo>

using namespace std;

template <typename T>
class printMinAndMax {
public:
  void operator()() {
    cout << "The smallest " << typeid(T).name() << " is "
         << numeric_limits<T>::min() << endl;
    cout << "The largest " << typeid(T).name() << " is "
         << numeric_limits<T>::max() << endl;
    cout << "The size of " << typeid(T).name() << " is " << sizeof(T)
         << " bytes" << endl;
  }
};

int main() {
  printMinAndMax<bool>{}();
  printMinAndMax<char>{}();
  printMinAndMax<short>{}();
  printMinAndMax<int>{}();
  printMinAndMax<long>{}();
  printMinAndMax<long long>{}();
  printMinAndMax<float>{}();
  printMinAndMax<double>{}();
  printMinAndMax<long double>{}();
  printMinAndMax<unsigned>{}();
  printMinAndMax<unsigned long>{}();
}
