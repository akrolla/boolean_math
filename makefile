C = gcc
CFLAGS = 
LDFLAGS = -lm

OBJS = 
main.o read_complex.o
a.out: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS)

clean: 
	rm $(OBJS) 
