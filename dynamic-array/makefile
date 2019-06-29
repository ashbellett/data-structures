CXX=g++
EXEC=dynamic-array
BIN=./bin
OBJ=./obj
INC=./include
SRC=./src

all: setup ${EXEC} clean

setup:
	mkdir -p ./bin ./obj

${EXEC}: dynamic-array.o main.o
	$(CXX) -o $(BIN)/dynamic-array $(OBJ)/dynamic-array.o $(OBJ)/main.o
 
dynamic-array.o: $(SRC)/dynamic-array.cc $(INC)/dynamic-array.hh
	$(CXX) -o $(OBJ)/dynamic-array.o -c $(SRC)/dynamic-array.cc
 
main.o: $(SRC)/main.cc $(INC)/dynamic-array.hh
	$(CXX) -o $(OBJ)/main.o -c $(SRC)/main.cc

clean:
	rm -rf ./obj
