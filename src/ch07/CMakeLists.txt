# Copyright (C) 2015 Bas Bossink <bas.bossink@gmail.com>

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

add_executable(fundamental-type-sizes fundamental_type_sizes.cc)
add_test(fundamental-type-sizes-test fundamental-type-sizes)

add_executable(limits limits.cc)
add_test(limits-test limits)

add_executable(print-chars print_chars.cc)
add_test(print-chars-test print-chars)

add_executable(signed-unsigned-chars signed_unsigned_chars.cc)
add_test(signed-unsigned-chars-test signed-unsigned-chars)
