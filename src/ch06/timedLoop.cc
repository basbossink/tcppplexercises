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

#include <chrono>
#include <iostream>

using namespace std;
using namespace std::chrono;

int main() {
  unsigned long long sum{0};
  auto t0 = high_resolution_clock::now();
  for (int i = 0; i < 10000000; i++) {
    sum += i;
  }
  auto t1 = high_resolution_clock::now();
  cout << "The loop took " << duration_cast<milliseconds>(t1 - t0).count()
       << " msec" << endl;
  cout << "The result of the calculation was: " << sum << endl;
}
