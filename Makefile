TARGET  := $(shell basename `pwd`)

# Create the target lists
SOURCES := $(wildcard *.c)
SOURCES += $(wildcard lib/*.c)
SOURCES += $(wildcard modules/*/*.c)
SOURCES := $(filter-out $(wildcard modules/*/test.c), $(SOURCES))
OBJECTS := $(patsubst %.c,%.o,$(SOURCES))
DEPENDS := $(SOURCES:.c=.d)

CFLAGS += -I./include
CFLAGS += -g -Wall
CFLAGS += -Werror
LDLIBS += 

# Top level Build Rule
all: ${TARGET}

# Manage Dependancy Generation
# These dependency rules have been generated based on guidance from
#    http://mad-scientist.net/make/autodep.html
# The sed extension adds the dependancies to the .d file as well
# Note its important here not to use the usual 's/find/replace/g'
# as paths of the files include the '/' character
%.d: %.c
	@$(CC) -M $(CFLAGS) $(CPPFLAGS) -MQ '$*.o' $< | sed 's|$*\.o[ :]*|&$@ |g' > $@

-include $(DEPENDS)

# Build the application
$(TARGET): $(OBJECTS)
	$(CC) -o $@ $^ $(LDLIBS)

clean:
	rm -f $(TARGET) $(OBJECTS) $(DEPENDS)

