CXX := g++
CXXFLAGS := -g3 -D_GLIBCXX_DEBUG -Wall -Wextra -Werror -Wno-sign-compare -std=c++17 -fno-extended-identifiers


program: *.cc
	$(CXX) $(CXXFLAGS) -o program *.cc
save: 
	git add .
	git commit -m "Problemas"
	git push

clean:
	rm -f program

.PHONY: clean