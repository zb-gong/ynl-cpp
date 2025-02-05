# SPDX-License-Identifier: GPL-2.0

all: generated lib samples

lib:
	$(MAKE) -C $@

generated:
	$(MAKE) -C $@

samples:
	$(MAKE) -C $@

libynl.a: ynl.o generated
	@echo -e "\tAR $@"
	@ar rcs $@ ynl.o $(GENERATED)

clean:
	rm -f *.o *.d *~
	$(MAKE) -C generated $@

distclean: clean
	rm -f *.a

.PHONY: all clean generated lib samples
.DEFAULT_GOAL=all
