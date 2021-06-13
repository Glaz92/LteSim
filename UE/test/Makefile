CC		:= g++
CFLAGS	:= -std=gnu++17 -Wall -Wextra

SRC 	:= src
INC		:= -Iinc -I../inc -I../../Utils/inc -I../../Interfaces/inc
TEST	:= test
LIB		:= -lgtest -lpthread -llibgmock_main

BIN 	:= bin
EXE		:= UeTest.exe

OBJ		:= $(wildcard src/*.cpp) \
         $(wildcard ../src/*.cpp) \
				 $(wildcard ../../Utils/src/*.cpp)

all: $(BIN)/$(EXE)

$(BIN)/$(EXE): $(OBJ)
	$(CC) $(CFLAGS) $(INC) $^ -o $@ $(LIB)

clean:
	rm *.o $(EXECUTABLE)

run: all
	./$(BIN)/$(EXECUTABLE)