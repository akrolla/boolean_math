C = gcc
CFLAGS = -o 
LDFLAGS = -lm

OBJS = 
main.o 
a.out: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS)

clean: 
	rm $(OBJS) 
