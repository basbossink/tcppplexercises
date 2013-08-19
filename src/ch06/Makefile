include ../Makefile
run: normalDistributionHistogram timedLoop optimizedTimedLoop hello 
	./normalDistributionHistogram.exe
	./timedLoop.exe
	./optimizedTimedLoop.exe
	./hello.exe

normalDistributionHistogram: normalDistributionHistogram.cc
	g++ $(CPPFLAGS) -o normalDistributionHistogram.exe normalDistributionHistogram.cc

timedLoop: timedLoop.cc
	g++ $(CPPFLAGS) -o timedLoop.exe timedLoop.cc

optimizedTimedLoop: timedLoop.cc
	g++ $(CPPFLAGS) -O3 -o optimizedTimedLoop.exe timedLoop.cc

hello: hello.cc
	g++ $(CPPFLAGS) -o hello.exe hello.cc
