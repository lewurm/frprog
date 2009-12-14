# TODO: make upload, remove warnings

# hinweise:
# wenn folgende meldung kommt
#> "*** F9012D : tool execute is failed (fasm911s)"
# per 'wine regedit' den string "Path" in
#> HKEY_CURRENT_USER/Environment
# setzen, naemlich auf die ausgabe von
#> winepath $FUJDEV/Bin
# natuerlich muss $FUJDEV richtig gesetzt sein!

ifeq ($(strip $(FUJDEV)),)
$(error "Set FUJDEV in your environment. Ususally this is the Rootpath of the Softune installer. You MUST NOT install it through wine.")
endif

PREFIX = wine $(FUJDEV)/Bin/

CPUT = -cpu MB91F465K#TODO: change to X

CFLAGS = -w 1 -O 4 -B -K SPEED -K LONGADDRESS
CFLAGS += -K SCHEDULE -K A1 -K SARG -Xdof
CFLAGS += -K EOPT -K LIB -K UNROLL -Xalign
CFLAGS += -c -cwno $(CPUT)

ASFLAGS = -w 2 -O 0 -linf ON -lsrc ON -lsec ON
ASFLAGS += -lcros OFF -linc ON -lexp OBJ -pl 60
ASFLAGS += -pw 100 -tab 8 -Xdof -cwno $(CPUT)

LDFLAGS = -AL 2
LDFLAGS += -ra D_RAM=0x0002E000/0x0002FFFF #TODO try 2C000
LDFLAGS += -ra ID_RAM=0x00030000/0x00031FFF
LDFLAGS += -ro ROM_AREA=0x00080000/0x000FFFFF
LDFLAGS += -ro ROM_AREA_2=0x00148000/0x0014FFFF
LDFLAGS += -sc DATA/Data+INIT/Data+SSTACK/Data+USTACK/Data=D_RAM
LDFLAGS += -sc IRAM/Code=ID_RAM
LDFLAGS += -sc CODE+@INIT+@IRAM+CONST=ROM_AREA
LDFLAGS += -sc CODE_START/Code=0x000F4000
LDFLAGS += -sc INTVECT/Const=0x000FFC00
LDFLAGS += -check_locate -pl 60 -pw 132 -Xals
LDFLAGS += -Xalr -na -w 1 -Xdof -Xset_rora -cwno -a $(CPUT)

LIBRFLAGS = -dt s,d,r,a -pl 60 -pw 132 -cwno $(CPUT)

CONVFLAGS = -cwno -Xdof

DEFINES =

TNAME = pkernel
TARGET_MHX = $(TNAME).mhx
TARGET = $(TNAME).abs
DEPDIR = .deps

#add all objects here

OBJS = start91460.obj mb91465k.obj main.obj uart.obj flash.obj 

AS = $(PREFIX)fasm911s
CC = $(PREFIX)fcc911s
LD = $(PREFIX)flnk911s
LIBR = $(PREFIX)flibs
CONV = $(PREFIX)f2ms

all: $(TARGET_MHX)

upload: $(TARGET_MHX)
	@echo "  TODO upload"

$(TARGET_MHX): $(TARGET)
	@echo "  MAKEMHX   $@"
	@$(CONV) $(CONVFLAGS) $< -o $@

$(TARGET): $(OBJS)
	@echo "  LINK      $@"
	@$(LD) $(LDFLAGS) -o $@ $(OBJS) -m $(TNAME).map

%.obj: %.c
	@echo "  COMPILE   $<"
	@mkdir -p $(DEPDIR)
	@echo -n "$@: " > $(DEPDIR)/$<.d
	@$(CC) -H $(CPUT) $< | dos2unix | paste -s -d " " >> $(DEPDIR)/$<.d
	@$(CC) $(CFLAGS) $(DEFINES) $< -o $@

%.obj: %.asm
	@echo "  ASSEMBLE  $<"
	@$(AS) $(ASFLAGS) $(DEFINES) $< -o $@

.PHONY: clean
clean:
	rm -fr $(DEPDIR)
	rm -f $(TARGET) $(TARGET_MHX) $(OBJS) *.map

-include $(DEPDIR)/*

