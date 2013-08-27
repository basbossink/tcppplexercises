include ../Makefile

run: hello hello2 int_vector
	./hello
	./hello2
	./int_vector

hello2: hello2.cc person.h
	$(CXX) $(CPPFLAGS) -o hello2 hello2.cc 

read_ints: read_ints.cc
	$(CXX) $(CPPFLAGS) -o read_ints read_ints.cc 

write_ints: write_ints.cc
	$(CXX) $(CPPFLAGS) -o write_ints write_ints.cc 

names: names.cc
	$(CXX) $(CPPFLAGS) -o names names.cc 

int_vector: int_vector.cc
	$(CXX) $(CPPFLAGS) -o int_vector int_vector.cc 

hello: hello.cc
	$(CXX) $(CPPFLAGS) -o hello hello.cc
