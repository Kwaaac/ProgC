CC=gcc
CFLAGS=-Wall -ansi -pedantic-errors
LDFLAGS= -lMLV
DEPS=board.h display.h
OBJ=main.o board.o display.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

taquin: main.o $(OBJ)
	gcc -o $@ $^ $(LDFLAGS)

cleandoc:
	@echo "Cleaning documentation..."
	@rm -rf doc
	@echo "Documentation cleaned !"

doc: cleandoc
	@echo "Creating documentation in doc/..."
	@doxygen Doxyfile
	@echo "Documentation created"



.PHONY: clean
clean:
	rm -rf $(OBJ) taquin doc