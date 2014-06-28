CC=gcc
CFLAGS=
SOURCES=driver.c linked-list.c cutest-1.5/CuTest.c
EXT=exe
DRIVER=driver

all: build test

build: $(SOURCES)
	$(CC) $(CFLAGS) -o $@.$(EXT) $^

test:
	./$(DRIVER).$(EXT)
	
clean:
	rm -rf *.$(EXT)
