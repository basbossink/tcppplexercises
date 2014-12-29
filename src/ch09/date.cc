// Copyright (C) 2014 Bas Bossink <bas.bossink@gmail.com>

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
#include "date.h"

namespace X_9_4 {
  Date::Date(const std::string &dateString) {
    auto yearPart = dateString.substr(0, 4);
    year = std::stoi(yearPart);
    auto monthPart = dateString.substr(4,2);
    month = static_cast<Month>(std::stoi(monthPart));
    auto dayPart = dateString.substr(6);
    day = std::stoi(dayPart);
  }
  std::istream& operator>>(std::istream& input, Date& dateToFill) {
    std::string dateString;
    input >> dateString;
    auto tempDate = Date(dateString);
    dateToFill.year = tempDate.getYear();
    dateToFill.month = tempDate.getMonth();
    dateToFill.day = tempDate.getDay();
    return input;
  }
}

