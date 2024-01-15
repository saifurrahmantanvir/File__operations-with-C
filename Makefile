# Makefile

CXX = gcc
CXXFLAGS = -std=c++11
SRC_DIRS = FgetcFputc FgetsFputs
BUILD_DIR = build
TARGET = main.exe

SOURCES = main.c $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.c))
# OBJECTS = $(patsubst %.c,$(BUILD_DIR)/%.o,$(SOURCES))

# $(TARGET): $(OBJECTS)
# 	$(CXX) -o $@ $^

# $(BUILD_DIR)/%.o: %.c | $(BUILD_DIR)
# 	$(CXX) -c -o $@ $<

# $(BUILD_DIR): 
# 	for dir in $(SRC_DIRS); do mkdir -p $(BUILD_DIR)/$$dir; done

$(TARGET):
	$(CXX) $(SOURCES) -o $@ $^

.PHONY: clean
clean:
	rm -rf $(BUILD_DIR) $(TARGET)

.PHONY: run
run: $(TARGET)
	./$(TARGET)


# main: main.o fread_fwrite.o
# 	gcc -o main main.o fread_fwrite.o

# main.o: main.c fread_fwrite.c
# 	gcc -c main.c fread_fwrite.c