PREFIX = /usr

all:
	make -C pkernel/

#install: all #this just work when $FUJDEV is set for root too, eh?
install:
	sed -e 's/%PREFIX%/\$(PREFIX)/g' frprog.py > $(PREFIX)/bin/frprog
	cp SerialPort_linux.pyc $(PREFIX)/bin/SerialPort_linux.pyc
	mkdir -p $(PREFIX)/share/frprog/
	cp pkernel/pkernel.mhx $(PREFIX)/share/frprog/pkernel.mhx
	chmod a+rx $(PREFIX)/bin/frprog
	chmod a+r $(PREFIX)/bin/SerialPort_linux.pyc
	chmod a+r $(PREFIX)/share/frprog/pkernel.mhx

uninstall:
	rm -R $(PREFIX)/share/frprog
	rm $(PREFIX)/bin/frprog
	rm $(PREFIX)/bin/SerialPort_linux.pyc

.PHONY: uninstall
