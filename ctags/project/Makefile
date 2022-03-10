
OBJS = main/src/main.o mod1/src/mod1_func.o mod2/src/mod2_func.o mod3/src/mod3_func.o mod4/src/mod4_func.o

INC = -Imain/include -Imod1/include -Imod2/include -Imod3/include -Imod4/include

output : $(OBJS)
	gcc -o output $(OBJS)

%.o : %.c
	gcc $(INC) -o $@ -c $<

clean :
	rm -f `find . -name '*.o'`
	rm -f output

