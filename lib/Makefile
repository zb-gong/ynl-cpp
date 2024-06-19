# SPDX-License-Identifier: GPL-2.0

CC=gcc
CXX=g++
CFLAGS=-std=gnu11 -O2 -W -Wall -Wextra -Wno-unused-parameter -Wshadow
ifeq ("$(DEBUG)","1")
  CFLAGS += -g -fsanitize=address -fsanitize=leak -static-libasan
endif

SRCS_C=$(wildcard *.c)
OBJS_C=$(patsubst %.c,%.o,${SRCS_C})

SRCS_CPP=$(wildcard *.cpp)
OBJS_CPP=$(patsubst %.cpp,%.o,${SRCS_CPP})

include $(wildcard *.d)

all: ynl.a ynl-cpp.a

ynl.a: $(OBJS_C)
	ar rcs $@ $(OBJS_C)

ynl-cpp.a: $(OBJS_CPP)
	ar rcs $@ $(OBJS_CPP)
clean:
	rm -f *.o *.d *~
	rm -rf __pycache__

distclean: clean
	rm -f *.a

%.o: %.c
	$(COMPILE.c) -MMD -c -o $@ $<

%.cpp.o: %.c
	$(COMPILE.cxx) -MMD -c -o $@ $<

.PHONY: all clean distclean
.DEFAULT_GOAL=all
