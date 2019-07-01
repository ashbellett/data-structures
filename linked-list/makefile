CXX=g++
LIST=linked-list
NODE=node
MAIN=main
BIN=./bin
OBJ=./obj
INC=./include
SRC=./src

all: setup ${LIST} clean

setup:
	rm -rf $(BIN)
	mkdir -p $(BIN) $(OBJ)

${LIST}: ${LIST}.o ${NODE}.o $(MAIN).o
	$(CXX) -o $(BIN)/${LIST} $(OBJ)/${LIST}.o $(OBJ)/${NODE}.o $(OBJ)/$(MAIN).o
 
${LIST}.o: $(SRC)/${LIST}.cc $(INC)/${LIST}.hh
	$(CXX) -o $(OBJ)/${LIST}.o -c $(SRC)/${LIST}.cc

${NODE}.o: $(SRC)/${NODE}.cc $(INC)/${NODE}.hh
	$(CXX) -o $(OBJ)/${NODE}.o -c $(SRC)/${NODE}.cc
 
$(MAIN).o: $(SRC)/$(MAIN).cc $(INC)/${LIST}.hh
	$(CXX) -o $(OBJ)/$(MAIN).o -c $(SRC)/$(MAIN).cc

clean:
	rm -rf $(OBJ)
