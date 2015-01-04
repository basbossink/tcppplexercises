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

#include <string>
#include <algorithm>
#include "pairCounter.h"
#include <cstring>

namespace tcppplexercises {
  int countPairs(std::string pair, std::string searchString) {
    int returnValue = 0;
    auto start = searchString.begin();
    while((start = std::find(start, searchString.end(), pair[0])) != searchString.end()) {
      auto next = start+1;
      if(*next == pair[1]) {
        returnValue++;
      }
      start++;
    }
    return returnValue;
  }

  int countPairs(const char* pair, const char* searchString) {
    int returnValue = 0;
    auto start = searchString;
    auto end = start+strlen(searchString)+1;
    while((start = std::find(start, end, pair[0])) != end) {
      if(*(++start) == pair[1]) {
        returnValue++;
      }
    }
    return returnValue;
  }
}
