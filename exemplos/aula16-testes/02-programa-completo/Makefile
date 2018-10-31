CC := g++
SRCDIR := src
TSTDIR := tests
OBJDIR := build
BINDIR := bin

MAIN := program/main.cpp
TESTER := program/tester.cpp

SRCEXT := cpp
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS := $(patsubst $(SRCDIR)/%,$(OBJDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
TSTSOURCES := $(shell find $(TSTDIR) -type f -name *.$(SRCEXT))

# -g debug, --coverage para cobertura
CFLAGS := --coverage -g -Wall -O3 -std=c++14
INC := -I include/ -I third_party/

$(OBJDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INC) -c -o $@ $<

main: $(OBJECTS)
	@mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) $(INC) $(MAIN) $^ -o $(BINDIR)/main

tests: $(OBJECTS)
	@mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) $(INC) $(TESTER) $(TSTSOURCES) $^ -o $(BINDIR)/tester
	$(BINDIR)/tester

all: main

coverage:
	@mkdir -p coverage/
	@gcov $(SOURCES) -l -p -o build/
	@lcov -c --no-external --directory . --output-file coverage/coverage.info
	@genhtml coverage/coverage.info --output-directory coverage/
	$(RM) *.gcda *.gcno

clean:
	$(RM) -r $(OBJDIR)/* $(BINDIR)/* coverage/* *.gcda *.gcno

.PHONY: clean coverage
