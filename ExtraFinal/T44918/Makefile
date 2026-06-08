CXX := g++
CXXFLAGS := -std=c++17 -g3 -D_GLIBCXX_DEBUG -Wall -Wextra -Werror -Wno-sign-compare -fno-extended-identifiers

program.exe: queue.hh main.cc
	$(CXX) $(CXXFLAGS) -o program.exe main.cc

clean:
	rm -f program.exe

.PHONY: test
