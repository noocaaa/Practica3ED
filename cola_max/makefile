SRC = src
INC = include
OBJ = obj
BIN = bin
DOC = doc
CXX = g++
CPPFLAGS = -Wall -g -I$(INC) -I$(SRC) -c

$(BIN)/usocolas_max: $(OBJ)/usocolas_max.o
	$(CXX) -o $(BIN)/usocolas_max $(OBJ)/usocolas_max.o

$(OBJ)/Cola_max.o: $(SRC)/Cola_max.cpp $(INC)/Cola_max.h
	$(CXX) $(CPPFLAGS)  $(SRC)/Cola_max.cpp  -o $(OBJ)/Cola_max.o 

$(OBJ)/usocolas_max.o: $(SRC)/usocolas_max.cpp
	$(CXX) $(CPPFLAGS)  $(SRC)/usocolas_max.cpp  -o $(OBJ)/usocolas_max.o

#******************************** GENERACIÓN DE DOCUMENTACIÓN ***************************************
documentacion: 
	@doxygen $(DOC)/Doxyfile

clean:
	echo Limpiando.
	-rm $(OBJ)/*.o
	-rm $(BIN)/*
	-rm -r $(DOC)/html

