# Copyright (C) 2014 Bas Bossink <bas.bossink@gmail.com>

# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.

# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

add_executable(hello3 hello.cc)

add_executable(histogram normalDistributionHistogram.cc)
add_test(histogramTest histogram)

add_executable(regex regex.cc)
add_test(regexTest regex "${CMAKE_CURRENT_LIST_DIR}/names.txt")

add_executable(timedLoop timedLoop.cc)
add_test(timedLoopTest timedLoop)
