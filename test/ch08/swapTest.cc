// Copyright (C) 2015 Bas Bossink <bas.bossink@gmail.com>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#include <gtest/gtest.h>
#include "swap.h"

using namespace X_8_7;

namespace test {
  namespace {
    TEST(X_8_7 , SwapUsingPointers) {
      int fred { 37 };
      int barney { 42 };
      swap(&fred, &barney);
      ASSERT_EQ( 42, fred);
      ASSERT_EQ( 37, barney);
    }

    TEST(X_8_7 , SwapUsingReferences) {
      int fred { 37 };
      int barney { 42 };
      swap(fred, barney);
      ASSERT_EQ( 42, fred);
      ASSERT_EQ( 37, barney);
    }
  }
}
