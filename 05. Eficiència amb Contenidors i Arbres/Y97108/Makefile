CXX := g++
CXXFLAGS := -g3 -D_GLIBCXX_DEBUG -Wall -Wextra -Werror -Wno-sign-compare -std=c++11 -fno-extended-identifiers

program: *.cc
	$(CXX) $(CXXFLAGS) -o program *.cc
save:
	git add .
	git commit -m "Problema"
	git push
clean:
	rm -f program

.PHONY: clean
