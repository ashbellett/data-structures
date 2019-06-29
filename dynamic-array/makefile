CXX=g++
EXEC=dynamic-array
MAIN=main
BIN=./bin
OBJ=./obj
INC=./include
SRC=./src
TEST=./test

all: setup ${EXEC} clean

setup:
	mkdir -p $(BIN) $(OBJ)

${EXEC}: ${EXEC}.o $(MAIN).o test-$(EXEC).o
	$(CXX) -o $(BIN)/${EXEC} $(OBJ)/${EXEC}.o $(OBJ)/$(MAIN).o $(OBJ)/test-$(EXEC).o
 
${EXEC}.o: $(SRC)/${EXEC}.cc $(INC)/${EXEC}.hh $(INC)/test-$(EXEC).hh
	$(CXX) -o $(OBJ)/${EXEC}.o -c $(SRC)/${EXEC}.cc
 
$(MAIN).o: $(SRC)/$(MAIN).cc $(INC)/${EXEC}.hh $(INC)/test-$(EXEC).hh
	$(CXX) -o $(OBJ)/$(MAIN).o -c $(SRC)/$(MAIN).cc

test-$(EXEC).o: $(SRC)/$(MAIN).cc $(INC)/${EXEC}.hh $(INC)/test-$(EXEC).hh
	$(CXX) -o $(OBJ)/test-$(EXEC).o -c $(TEST)/test-$(EXEC).cc

clean:
	rm -rf $(OBJ)
