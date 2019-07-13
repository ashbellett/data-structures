CXX=g++
CXXFLAGS = -g -O2 -std=gnu++17 -Wall
EXEC=dynamic-array
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

${EXEC}: ${EXEC}.o $(MAIN).o test-$(EXEC).o
	$(CXX) $(CXXFLAGS) -o $(BIN)/${EXEC} $(OBJ)/${EXEC}.o $(OBJ)/$(MAIN).o $(OBJ)/test-$(EXEC).o
 
${EXEC}.o: $(SRC)/${EXEC}.cc $(INC)/${EXEC}.hh $(INC)/test-$(EXEC).hh
	$(CXX) $(CXXFLAGS) -o $(OBJ)/${EXEC}.o -c $(SRC)/${EXEC}.cc
 
$(MAIN).o: $(SRC)/$(MAIN).cc $(INC)/${EXEC}.hh $(INC)/test-$(EXEC).hh
	$(CXX) $(CXXFLAGS) -o $(OBJ)/$(MAIN).o -c $(SRC)/$(MAIN).cc

test-$(EXEC).o: $(SRC)/$(MAIN).cc $(INC)/${EXEC}.hh $(INC)/test-$(EXEC).hh
	$(CXX) $(CXXFLAGS) -o $(OBJ)/test-$(EXEC).o -c $(TEST)/test-$(EXEC).cc

clean:
	rm -rf $(OBJ)
