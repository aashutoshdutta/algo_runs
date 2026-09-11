CC := gcc
CFLAGS := -Wall -Wextra -std=c11 -O2

SRCS := $(shell find . -name '*.c' -not -path './bin/*')
BINS := $(patsubst %.c,bin/%,$(SRCS))

.PHONY: all clean

all: $(BINS)

bin/%: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -rf bin
