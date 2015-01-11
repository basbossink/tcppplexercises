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

#ifndef PERSON_H_DEFINED
#define PERSON_H_DEFINED

#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <cctype>
#include <locale>

using namespace std;

namespace tcppplexercises {
  // trim from start
  static inline std::string& ltrim(std::string& s) {
    s.erase(s.begin(),
            std::find_if(s.begin(), s.end(),
                         std::not1(std::ptr_fun<int, int>(std::isspace))));
    return s;
  }

  // trim from end
  static inline std::string& rtrim(std::string& s) {
    s.erase(
      std::find_if(s.rbegin(), s.rend(),
                   std::not1(std::ptr_fun<int, int>(std::isspace))).base(),
      s.end());
    return s;
  }

  // trim from both ends
  static inline std::string& trim(std::string& s) { return ltrim(rtrim(s)); }

  class Person {
  public:
    friend ostream& operator<<(ostream& out, const Person& person);
    friend istream& operator>>(istream& in, Person& person);

  private:
    string name;
    int age;
  };

  ostream& operator<<(ostream& out, const Person& person) {
    out << "Name: " << person.name << " Age: " << person.age;
    return out;
  }

  istream& operator>>(istream& in, Person& person) {
    cout << "Please provide a name ";
    getline(in, person.name);
    person.name = trim(person.name);
    cout << "Provide " << person.name << "'s age ";
    in >> person.age;
    in.ignore(256, '\n');
    return in;
  }
}
#endif
