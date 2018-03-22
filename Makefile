PROG = a.out
CC = cc
SRCS = main13.c fun.c
BIN = korolev_12_input.txt
OBJS = $(SRCS:.c=.o)

all: $(PROG)

$(PROG): $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

clean:
	rm -f $(PROG) $(OBJS) $(BIN)

.c.o : fun.h; $(CC) -c $*.c