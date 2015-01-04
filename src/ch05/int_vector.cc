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

#include<vector>
#include<iostream>
#include<algorithm>
#include "print_vector.h"

using namespace std;


int main() {
  vector<int> numbers{ 5, 9, -1, 200, 0 };
  printVector(numbers);
  sort(numbers.begin(), numbers.end());
  cout << endl;
  printVector(numbers);
}
