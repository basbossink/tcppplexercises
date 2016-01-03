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
#include <gtest/gtest.h>
#include <iostream>
#include <sstream>
#include <string>
#include "season.h"

using namespace X_9_5;

namespace test {
  namespace {
    TEST(SeasonTest, ShouldReadFromStream) {
      Season sut;
      const std::string seasonString{"summer"};
      std::istringstream inputStream{seasonString};
      inputStream >> sut;
      EXPECT_EQ(Season::summer, sut);
    }

    TEST(SeasonTest, ShouldWriteToStream) {
      std::ostringstream outputStream;
      outputStream << Season::summer;
      EXPECT_EQ("summer", outputStream.str());
    }

    TEST(SeasonTest, ShouldSupportIncrement) {
      Season actual{Season::summer};
      actual++;
      EXPECT_EQ(Season::autumn, actual);
    }

    TEST(SeasonTest, IncrementShouldWrapAround) {
      Season actual{Season::winter};
      actual++;
      EXPECT_EQ(Season::spring, actual);
    }

    TEST(SeasonTest, ShouldSupportDecrement) {
      Season actual{Season::summer};
      actual--;
      EXPECT_EQ(Season::spring, actual);
    }

    TEST(SeasonTest, DecrementShouldWrapAround) {
      Season actual{Season::spring};
      actual--;
      EXPECT_EQ(Season::winter, actual);
    }
  }
}
