# Copyright (C) 2016 Adrian Schollmeyer

### File specific variables
# Program version
VERSION=0.0.1R1
# Program name; Used to create the installation folders and the executables
NAME=ColorAPIExample
# Lower case program name; Used to create a symlink in /usr/bin for global access to the program
NAMELOWERCASE=capiexample
# The name of the executable file
EXEC=$(NAME)_v$(VERSION)

### All Object-files
# Must be adjusted when a new source file is created
OBJFILES:=main.o

### Compiler specific variables
# The compiler executable (default: g++)
CC:=g++
# The directory for header files (included with -I; default: head)
#HEAD=.
# The directory for source files (default: src)
SRC=src
# The directory for the compilated and linked program (default: bin)
BIN=bin
# Arguments for both compiling and linking
#ARGD=-std=c++11 -I $(HEAD) -Wall -pedantic ## Deprecated.
#ARGD=-std=c++11 -Wall -pedantic ## For extra output.
ARGD=-std=c++11
# Arguments for compiling only
ARGC=$(ARGD)
# Arguments for linking only
ARGL=$(ARGD)
# Arguments for compiling that have to be put at the end of the command
ARGCAFTER=
# Arguments for linking that have to be put at the end of the command
ARGLAFTER=

FCMDCOMPILE:=$(CC) $(ARGC) -c $(SRC)

### Make targets
# You have to add a new target for each new Object-file (=source-file)
# Just copy the default target (main.o) and adjust the target name and the file name
all: $(BIN)/$(EXEC)
	rm -f $(NAMELOWERCASE)
	ln -s $(BIN)/$(EXEC) $(NAMELOWERCASE)
force-all: full-clean all

$(BIN):
	mkdir -p $(BIN)
$(BIN)/$(EXEC): $(BIN) $(OBJFILES)
	$(CC) $(ARGL) $(OBJFILES) -o $(BIN)/$(EXEC) $(ARGLAFTER)

main.o:
	$(FCMDCOMPILE)/main.cpp $(ARGCAFTER)

clean:
	rm -f $(OBJFILES)
full-clean: clean
	rm -f $(BIN)/$(EXEC)

install:
	mkdir -p /opt/$(NAME)/$(VERSION)
	cp $(BIN)/$(EXEC) /opt/$(NAME)/$(VERSION)
	ln -s /opt/$(NAME)/$(VERSION)/$(EXEC) /usr/bin/$(NAMELOWERCASE)

update:
	rm -f /usr/bin/$(NAMELOWERCASE)
	make install

uninstall:
	rm -f /usr/bin/$(NAMELOWERCASE)
	rm -R -f /opt/$(NAME)/$(VERSION)

full-uninstall: uninstall
	rm -R -f /opt/$(NAME)
