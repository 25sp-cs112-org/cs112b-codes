# assignment name (generate executable with this name)
TEST_TARGET = tester
# .cpp files that do not contain a main() function.
SOURCES = PyList.cpp

CPP       = g++ --std=c++11 -c
CPPFLAGS   = -Wall -I. -g
LINKER   = g++ -o
LFLAGS   = -Wall

INCLUDES := $(wildcard *.h)
OBJECTS  := $(SOURCES:.cpp=.o)
rm       = rm -f

.PHONY: obj clean all

all: $(TEST_TARGET) clean_objs

$(TEST_TARGET): obj tests.o
	$(LINKER) $(TEST_TARGET) $(LFLAGS) $(OBJECTS) tests.o
	@echo "Linking complete!"


obj: $(SOURCES) $(INCLUDES) tests.cpp
	$(CPP) $(CPPFLAGS) $(SOURCES) tests.cpp
	@echo "Compilation complete!"

clean_objs:
	$(rm) $(OBJECTS) tests.o

clean:
	$(rm) $(TARGET) $(TEST_TARGET) $(OBJECTS) tests.o
	@echo "Cleanup complete!"

