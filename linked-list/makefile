CXX=g++
EXEC=linked-list
MAIN=main
BIN=./bin
OBJ=./obj
INC=./include
SRC=./src

all: setup ${EXEC} clean

setup:
	mkdir -p $(BIN) $(OBJ)

${EXEC}: ${EXEC}.o $(MAIN).o
	$(CXX) -o $(BIN)/${EXEC} $(OBJ)/${EXEC}.o $(OBJ)/$(MAIN).o
 
${EXEC}.o: $(SRC)/${EXEC}.cc $(INC)/${EXEC}.hh
	$(CXX) -o $(OBJ)/${EXEC}.o -c $(SRC)/${EXEC}.cc
 
$(MAIN).o: $(SRC)/$(MAIN).cc $(INC)/${EXEC}.hh
	$(CXX) -o $(OBJ)/$(MAIN).o -c $(SRC)/$(MAIN).cc

clean:
	rm -rf $(OBJ)
