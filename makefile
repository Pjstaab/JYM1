CC=g++
CFLAGS=-I.
DEPS = student.h roster.h degree.h

ODIR=obj
_OBJ = student.o roster.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS) makedir
	$(CC) -c -o $@ $< $(CFLAGS)

program: $(OBJ)
	$(CC) -o bin/program main.cpp $^ $(CFLAGS)

makedir:
	mkdir -p obj
	mkdir -p bin
