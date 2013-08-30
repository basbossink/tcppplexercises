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

#include<iostream>

using namespace std;

#define PRINT_SIZE(type) cout << "The size of " << #type << " is " << sizeof(type) << endl;

enum class Flinstone { Fred, Barney, Wilma, Betty, Rubbles, Dino };

enum class Grades { shodan, nidan, sandan, rokudan, yondan};

int main() {
  PRINT_SIZE(bool)  
  PRINT_SIZE(char)  
  PRINT_SIZE(short)  
  PRINT_SIZE(int)  
  PRINT_SIZE(long)  
  PRINT_SIZE(long long)  
  PRINT_SIZE(float)  
  PRINT_SIZE(double)  
  PRINT_SIZE(long double)  
  PRINT_SIZE(int*)  
  PRINT_SIZE(double*)  
  PRINT_SIZE(Grades*)  
  PRINT_SIZE(Flinstone)  
  PRINT_SIZE(Grades)  
}
