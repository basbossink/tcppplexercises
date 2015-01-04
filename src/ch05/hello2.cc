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

#include<iostream>
#include<vector>
#include "person.h"

using namespace std;
using namespace tcppplexercises;

int main() {
  vector<Person> persons;
  Person p;
  while(cin >> p) {
    persons.push_back(p);
  }
  cout << endl << "You entered the following person(s): " << endl;
  for(auto p : persons) {
    cout << p << endl;
  }
  cout << "Total number of persons entered: " << persons.size() << " person(s)." << endl;
}
