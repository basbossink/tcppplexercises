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
#ifndef DATE_H_DEFINED
#define DATE_H_DEFINED
 
#include <iostream>
#include <string>

namespace X_9_4 {
  enum class Month {
    Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sept, Oct, Nov, Dec
  };

  struct Date {
    public:
      explicit Date(const std::string& dateString);
      Date() : year(0),day(0),month(Month::Jan) {}
      int getYear() const { return year; }
      Month getMonth() const { return month; }
      int getDay() const { return day; }
      friend std::istream& operator>>(std::istream &is, Date& inputDate);
      friend std::ostream& operator<<(std::ostream &os, const Date& dateToPrint);
    private:
      int year,day;
      Month month;
  };
}

#endif 
