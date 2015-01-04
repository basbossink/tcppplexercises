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
#include<string>
using namespace std;

int main() {
  cout << "type a bool: ";
  bool answer = false; 
  cin >> boolalpha >> answer;
  cout << "type a char: ";
  char answer2 = 0;
  cin >> answer2;
  cout << "type an int: ";
  int answer3 = 0;
  cin >> answer3;
  cout << "type a double: ";
  double answer4 = 0.0;
  cin >> answer4;
  cout << "type a string: ";
  string answer5 = "";
  cin.ignore(256,'\n');
  getline(cin, answer5);
  cout << endl << "Your answers were:" << endl;
  cout << boolalpha << answer << endl;
  cout << answer2 << endl;
  cout << answer3 << endl;
  cout << answer4 << endl;
  cout << answer5 << endl;
}
