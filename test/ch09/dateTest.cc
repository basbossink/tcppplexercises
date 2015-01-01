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
#include <gtest/gtest.h>
#include <iostream>
#include <sstream>
#include <string>
#include "date.h"

using namespace X_9_4;

namespace test {
    namespace  {
        TEST(DateTest, ShouldInitializeFromString) {
          Date sut { "20141228" };
          EXPECT_EQ(2014, sut.getYear());
          EXPECT_EQ(Month::Dec, sut.getMonth());
          EXPECT_EQ(28, sut.getDay());
        }

        TEST(DateTest, ShouldReadFromStream) {
          Date sut;
          const std::string dateString { "20141228" };
          std::istringstream inputStream { dateString };
          inputStream >> sut;
          EXPECT_EQ(2014, sut.getYear());
          EXPECT_EQ(Month::Dec, sut.getMonth());
          EXPECT_EQ(28, sut.getDay());
        }

        TEST(DateTest, ShouldWriteToStream) {
          const std::string someDate { "20150101" };
          const Date sut { someDate };
          std::ostringstream outputStream;
          outputStream << sut;
          EXPECT_EQ(someDate, outputStream.str());
        }
    }
}
