include ../Makefile
run: timedLoop optimizedTimedLoop hello 
	./timedLoop.exe
	./optimizedTimedLoop.exe
	./hello.exe

timedLoop: timedLoop.cc
	g++ $(CPPFLAGS) -o timedLoop.exe timedLoop.cc

optimizedTimedLoop: timedLoop.cc
	g++ $(CPPFLAGS) -O3 -o optimizedTimedLoop.exe timedLoop.cc

hello: hello.cc
	g++ $(CPPFLAGS) -o hello.exe hello.cc
