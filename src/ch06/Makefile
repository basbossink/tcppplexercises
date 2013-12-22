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

CPPFLAGS += $(LDFLAGS)

all : \
	$(OUTPUTDIR)/normalDistributionHistogram \
	$(OUTPUTDIR)/timedLoop \
	$(OUTPUTDIR)/hello \
	$(OUTPUTDIR)/regex
.PHONY : all clean

run : all
	$(OUTPUTDIR)/normalDistributionHistogram
	$(OUTPUTDIR)/timedLoop
	$(OUTPUTDIR)/optimizedTimedLoop
	$(OUTPUTDIR)/hello

$(OUTPUTDIR)/normalDistributionHistogram : normalDistributionHistogram.cc
	$(CXX) $(CPPFLAGS) -o $(OUTPUTDIR)/normalDistributionHistogram normalDistributionHistogram.cc

$(OUTPUTDIR)/timedLoop : timedLoop.cc
	$(CXX) $(CPPFLAGS) -o $(OUTPUTDIR)/timedLoop timedLoop.cc

$(OUTPUTDIR)/optimizedTimedLoop : timedLoop.cc
	$(CXX) $(CPPFLAGS) -O3 -o $(OUTPUTDIR)/optimizedTimedLoop timedLoop.cc

$(OUTPUTDIR)/hello : hello.cc
	$(CXX) $(CPPFLAGS) -lpthread -o $(OUTPUTDIR)/hello hello.cc

$(OUTPUTDIR)/regex : regex.cc
	$(CXX) $(CPPFLAGS) -o $(OUTPUTDIR)/regex regex.cc

clean : 
	rm -Rf $(OUTPUTDIR)/* 


