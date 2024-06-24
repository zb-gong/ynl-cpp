# SPDX-License-Identifier: GPL-2.0

CC=gcc
CXX=g++
CFLAGS=-std=gnu11 -O2 -W -Wall -Wextra -Wno-unused-parameter -Wshadow -I../lib/
CXXFLAGS=-D_LINUX_ETHTOOL_H -I../lib/ -include../linux/ethtool_netlink.h  -include../linux/ethtool.h
ifeq ("$(DEBUG)","1")
  CFLAGS += -g -fsanitize=address -fsanitize=leak -static-libasan
endif

SRCS_ETHTOOL_CPP=$(wildcard ethtool-user.cpp)
OBJS_ETHTOOL_CPP=$(patsubst %.cpp,%.o,${SRCS_ETHTOOL_CPP})

include $(wildcard *.d)

all: ethtool_lib.a

ethtool_lib.a: $@ $(OBJS_ETHTOOL_CPP)
	ar rcs $@ $(OBJS_ETHTOOL_CPP)

clean:
	rm -f *.o *.d *~

distclean: clean
	rm -f *.a

%.cpp.o: %.cpp
	$(COMPILE.cxx) -MMD -c -o $@ $<

.PHONY: all clean distclean
.DEFAULT_GOAL=all
