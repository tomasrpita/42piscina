NAME = bsq
IDIR =../include
CC=gcc
CFLAGS=-Wall -Wextra -Werror -I$(IDIR)

ODIR=obj

_DEPS = bsqfunct.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = largest_square.c
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean fclean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~ 

fclean: clean
	rm -f $(NAME)
