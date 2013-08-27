include ../Makefile
run: normalDistributionHistogram timedLoop optimizedTimedLoop hello 
	./normalDistributionHistogram
	./timedLoop
	./optimizedTimedLoop
	./hello

normalDistributionHistogram: normalDistributionHistogram.cc
	$(CXX) $(CPPFLAGS) -o normalDistributionHistogram normalDistributionHistogram.cc

timedLoop: timedLoop.cc
	$(CXX) $(CPPFLAGS) -o timedLoop timedLoop.cc

optimizedTimedLoop: timedLoop.cc
	$(CXX) $(CPPFLAGS) -O3 -o optimizedTimedLoop timedLoop.cc

hello: hello.cc
	$(CXX) $(CPPFLAGS) -lpthread -o hello hello.cc
