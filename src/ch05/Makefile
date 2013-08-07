include ../Makefile

run: hello hello2 int_vector
	./hello.exe
	./hello2.exe
	./int_vector

hello2: hello2.cc person.h
	g++ $(CPPFLAGS) -o hello2.exe hello2.cc 

write_ints: write_ints.cc
	g++ $(CPPFLAGS) -o write_ints.exe write_ints.cc 

names: names.cc
	g++ $(CPPFLAGS) -o names.exe names.cc 

int_vector: int_vector.cc
	g++ $(CPPFLAGS) -o int_vector.exe int_vector.cc 

hello: hello.cc
	g++ $(CPPFLAGS) -o hello.exe hello.cc
