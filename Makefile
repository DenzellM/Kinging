# -DNDEBUG: turns off e.g. assertion checks
# -O3: enables optimizations in the compiler

FLAGS = -std=c++23
PROD_FLAGS = -O3 -DNDEBUG -ffast-math
DEBUG_FLAGS = -g -Wall -Wextra -Wpedantic -fstandalone-debug
SOURCEDIR = src
BUILDDIR = build

FILES = $(wildcard $(SOURCEDIR)/*.cpp)
HEADERS = $(wildcard $(SOURCEDIR)/*.h)

.PHONY: build

king: $(FILES)
	$(CXX) $(FLAGS) $(PROD_FLAGS) -o $(BUILDDIR)/Kinging $(FILES)


run: king
	./build/Kinging
clean:
	-$(RM) -r $(wildcard $(BUILDDIR)/*)