CXX=g++
EXEC=stack
NODE=node
MAIN=main
BIN=./bin
OBJ=./obj
INC=./include
SRC=./src
TEST=./test

all: setup ${EXEC} clean

setup:
	rm -rf $(BIN)
	mkdir -p $(BIN) $(OBJ)

${EXEC}: ${EXEC}.o ${NODE}.o $(MAIN).o test-$(EXEC).o
	$(CXX) -o $(BIN)/${EXEC} $(OBJ)/${EXEC}.o $(OBJ)/${NODE}.o $(OBJ)/$(MAIN).o $(OBJ)/test-$(EXEC).o
 
${EXEC}.o: $(SRC)/${EXEC}.cc $(INC)/${EXEC}.hh $(INC)/test-$(EXEC).hh
	$(CXX) -o $(OBJ)/${EXEC}.o -c $(SRC)/${EXEC}.cc

${NODE}.o: $(SRC)/${NODE}.cc $(INC)/${NODE}.hh $(INC)/test-$(EXEC).hh
	$(CXX) -o $(OBJ)/${NODE}.o -c $(SRC)/${NODE}.cc

$(MAIN).o: $(SRC)/$(MAIN).cc $(INC)/${EXEC}.hh $(INC)/test-$(EXEC).hh
	$(CXX) -o $(OBJ)/$(MAIN).o -c $(SRC)/$(MAIN).cc

test-$(EXEC).o: $(SRC)/$(MAIN).cc $(INC)/${EXEC}.hh $(INC)/test-$(EXEC).hh
	$(CXX) -o $(OBJ)/test-$(EXEC).o -c $(TEST)/test-$(EXEC).cc

clean:
	rm -rf $(OBJ)
