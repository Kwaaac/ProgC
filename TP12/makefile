CC=gcc
CFLAGS=-Wall -Wextra -Werror -ansi -g -pedantic-errors
LDFLAGS=-lm
DEPS=hash.h in_out.
OBJ=hash.o in_out.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

tp12: main.o $(OBJ)
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
	rm -f $(OBJ) tp12 main.o