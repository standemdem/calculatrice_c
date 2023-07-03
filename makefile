# faire fichier de test de fonction
# 

# variables
CC = gcc
CFLAGS = -Wall -g

TARGET = makeit
SRCS = main.c addition.c division.c multiplication.c soustraction.c
OBJS = $(SRCS:.c=.o)
TESTSRCS = do_it_test/main_test.c do_it_test/test_addition.c do_it_test/test_division.c \
		do_it_test/test_multiplication.c do_it_test/test_soustraction.c
TESTOBJS = $(TESTSRCS:.c=.o)

# Rules

build: $(OBJS)
	$(CC) $(FLAGS) -o $(TARGET) $(SRCS)

test: $(TESTOBJS)
	$(CC) $(FLAGS) -o test $(SRCS) $(TESTSRCS)
	./test

run:
	./$(TARGET)
clean:
	rm -f $(OBJS) $(TARGET)
	rm -f $(TESTOBJS) test
	