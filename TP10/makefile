CC=gcc
CFLAGS=-Wall -Wextra -Werror -ansi -g -pedantic-errors
DEPS=listorder.h in_out.h
OBJ=listorder.o in_out.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

tp10: listorder.o $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

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
	rm -rf $(OBJ) tp10 tp10.o doc