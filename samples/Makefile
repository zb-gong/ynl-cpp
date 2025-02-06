# SPDX-License-Identifier: GPL-2.0

include ../Makefile.deps

LDLIBS=../lib/ynl.a ../lib/ynl-cpp.a

CPPFLAGS += -O2 -W -Wall -Wextra -Wno-unused-parameter -Wshadow \
	-I../lib/ -I../generated/ -idirafter $(UAPI_PATH)

SRCS=$(wildcard *.cpp)
BINS=$(patsubst %.cpp,%,${SRCS})
PROTOS=$(wildcard ../generated/*.a)

include $(wildcard *.d)

all: $(BINS)

$(BINS): ../lib/ynl.a $(PROTOS) $(SRCS)
	@echo -e '\tCXX sample $@  '
	@$(COMPILE.cpp) $(CFLAGS_$@) $@.cpp -o $@.o
	@$(LINK.cpp) $@.o -o $@ ../generated/$(patsubst %,%_lib.a,$@) $(LDLIBS)

clean:
	rm -f *.o *.d *~

distclean: clean
	rm -f $(BINS)

.PHONY: all clean distclean
.DEFAULT_GOAL=all
