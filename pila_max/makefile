SRC = src
INC = include
OBJ = obj
BIN = bin
DOC = doc
CXX = g++
CPPFLAGS = -Wall -g -I$(INC) -I$(SRC) -c

#1: $(BIN)/usopilas_max

$(BIN)/usopilas_max: $(OBJ)/usopilas_max.o $(OBJ)/Pila_max.o
	$(CXX) -o $(BIN)/usopilas_max $(OBJ)/usopilas_max.o $(OBJ)/Pila_max.o

$(OBJ)/Pila_max.o: $(SRC)/Pila_max.cpp $(INC)/Pila_max.h
	$(CXX) $(CPPFLAGS)  $(SRC)/Pila_max.cpp  -o $(OBJ)/Pila_max.o 

$(OBJ)/usopilas_max.o: $(SRC)/usopilas_max.cpp
	$(CXX) $(CPPFLAGS)  $(SRC)/usopilas_max.cpp  -o $(OBJ)/usopilas_max.o

#******************************** GENERACIÓN DE DOCUMENTACIÓN ***************************************
documentacion: 
	@doxygen $(DOC)/Doxyfile

clean:
	echo Limpiando.
	-rm $(OBJ)/*.o
	-rm $(BIN)/*
	-rm -r $(DOC)/html

