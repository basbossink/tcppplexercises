# Copyright (C) 2013 Bas Bossink <bas.bossink@gmail.com>

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
include ../Makefile.inc

TESTDIR = ../../test/ch08
SRCDIR = ../../src/ch08

all : Tests
	$(OUTPUTDIR)/Tests

swap.o : swap.cc swap.h 
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c swap.cc -o $(OUTPUTDIR)/swap.o

swapTest.o : $(TESTDIR)/swapTest.cc \
                     swap.h $(GTEST_HEADERS)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -I$(SRCDIR) -c $(TESTDIR)/swapTest.cc -o $(OUTPUTDIR)/swapTest.o

stringLiteralSizeTest.o : $(TESTDIR)/stringLiteralSizeTest.cc $(GTEST_HEADERS)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $(TESTDIR)/stringLiteralSizeTest.cc -o $(OUTPUTDIR)/stringLiteralSizeTest.o

Tests : \
	gtest_main.a \
	swap.o \
	swapTest.o \
	stringLiteralSizeTest.o \

	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -lpthread $(LDFLAGS) $(addprefix $(OUTPUTDIR)/, $^) -o $(OUTPUTDIR)/$@

include ../TestsMakefile.inc

.PHONY : all clean

clean : 
	rm -Rf $(OUTPUTDIR)/* 


