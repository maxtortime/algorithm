all :
	@echo "make [problem num]"

% :
	clang++ -O2 -std=c++11 -Wall -o exec $@.cc
