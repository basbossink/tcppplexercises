include ../Makefile

run: hello hello2
	./hello.exe
	./hello2.exe

hello2: hello2.cc person.h
	g++ $(CPPFLAGS) -o hello2.exe hello2.cc 

hello: hello.cc
	g++ $(CPPFLAGS) -o hello.exe hello.cc
