C = gcc
CFLAGS =  
LDFLAGS = -lm
OBJS = main_menu.o  Complex_IO.o Complex_arith.o   
a.out: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS)

clean: 
	rm $(OBJS) 
