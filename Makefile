INCLUDE = include
LIB     = lib
OBJ     = obj
SRC = src
BIN = bin
CXX = g++
CPPFLAGS = -Wall -g -c 

all: clean $(BIN)/ejercicio01 $(BIN)/ejercicio02 $(BIN)/ejercicio03 $(BIN)/ejercicio04 \
	$(BIN)/ejercicio06 $(BIN)/ejercicio07 $(BIN)/ejercicio08 \
	$(BIN)/ejercicio09 $(BIN)/ejercicio10 $(BIN)/ejercicio11 \
	$(BIN)/ejercicio12 $(BIN)/ejercicio13 $(BIN)/ejercicio14 \
	$(BIN)/ejercicio15 $(BIN)/ejercicio16 $(BIN)/ejercicio17 \
	$(BIN)/ejercicio18 $(BIN)/ejercicio19 $(BIN)/ejercicio20 \
	$(BIN)/ejercicio21

$(BIN)/ejercicio01: $(SRC)/ejercicio01.cpp
	$(CXX) -o $(BIN)/ejercicio01 $(SRC)/ejercicio01.cpp

$(BIN)/ejercicio02: $(SRC)/ejercicio02.cpp
	$(CXX) -o $(BIN)/ejercicio02 $(SRC)/ejercicio02.cpp

$(BIN)/ejercicio03: $(SRC)/ejercicio03.cpp
	$(CXX) -o $(BIN)/ejercicio03 $(SRC)/ejercicio03.cpp

$(BIN)/ejercicio04: $(SRC)/ejercicio04.cpp
	$(CXX) -o $(BIN)/ejercicio04 $(SRC)/ejercicio04.cpp

$(BIN)/ejercicio06: $(SRC)/ejercicio06.cpp
	$(CXX) -o $(BIN)/ejercicio06 $(SRC)/ejercicio06.cpp

$(BIN)/ejercicio07: $(SRC)/ejercicio07.cpp
	$(CXX) -o $(BIN)/ejercicio07 $(SRC)/ejercicio07.cpp

$(BIN)/ejercicio08: $(SRC)/ejercicio08.cpp
	$(CXX) -o $(BIN)/ejercicio08 $(SRC)/ejercicio08.cpp

$(BIN)/ejercicio09: $(SRC)/ejercicio09.cpp
	$(CXX) -o $(BIN)/ejercicio09 $(SRC)/ejercicio09.cpp

$(BIN)/ejercicio10: $(SRC)/ejercicio10.cpp
	$(CXX) -o $(BIN)/ejercicio10 $(SRC)/ejercicio10.cpp

$(BIN)/ejercicio11: $(SRC)/ejercicio11.cpp
	$(CXX) -o $(BIN)/ejercicio11 $(SRC)/ejercicio11.cpp

$(BIN)/ejercicio12: $(SRC)/ejercicio12.cpp
	$(CXX) -o $(BIN)/ejercicio12 $(SRC)/ejercicio12.cpp

$(BIN)/ejercicio13: $(SRC)/ejercicio13.cpp
	$(CXX) -o $(BIN)/ejercicio13 $(SRC)/ejercicio13.cpp

$(BIN)/ejercicio14: $(SRC)/ejercicio14.cpp
	$(CXX) -o $(BIN)/ejercicio14 $(SRC)/ejercicio14.cpp

$(BIN)/ejercicio15: $(SRC)/ejercicio15.cpp
	$(CXX) -o $(BIN)/ejercicio15 $(SRC)/ejercicio15.cpp

$(BIN)/ejercicio16: $(SRC)/ejercicio16.cpp
	$(CXX) -o $(BIN)/ejercicio16 $(SRC)/ejercicio16.cpp

$(BIN)/ejercicio17: $(SRC)/ejercicio17.cpp
	$(CXX) -o $(BIN)/ejercicio17 $(SRC)/ejercicio17.cpp

$(BIN)/ejercicio18: $(SRC)/ejercicio18.cpp
	$(CXX) -o $(BIN)/ejercicio18 $(SRC)/ejercicio18.cpp

$(BIN)/ejercicio19: $(SRC)/ejercicio19.cpp
	$(CXX) -o $(BIN)/ejercicio19 $(SRC)/ejercicio19.cpp

$(BIN)/ejercicio20: $(SRC)/ejercicio20.cpp
	$(CXX) -o $(BIN)/ejercicio20 $(SRC)/ejercicio20.cpp

$(BIN)/ejercicio21: $(SRC)/ejercicio21.cpp
	$(CXX) -o $(BIN)/ejercicio21 $(SRC)/ejercicio21.cpp


# ************ Limpieza ************
clean :
	-rm $(BIN)/*

