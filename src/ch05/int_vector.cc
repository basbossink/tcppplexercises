// Copyright (C) 2013 Bas Bossink <bas.bossink@gmail.com>

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

#include<vector>
#include<iostream>
#include<algorithm>
#include<sstream>
#include<string>

using namespace std;

template <typename T>
string join(const T& v, const string& delim) {
    ostringstream s;
    for (const auto& i : v) {
        if (&i != &v[0]) {
            s << delim;
        }
        s << i;
    }
    return s.str();
}

void printVector(vector<int>& numbers) {
  cout << "(" << join(numbers, ", ") << ")" << endl;
}

int main() {
  vector<int> numbers{ 5, 9, -1, 200, 0 };
  printVector(numbers);
  sort(numbers.begin(), numbers.end());
  cout << endl;
  printVector(numbers);
}
