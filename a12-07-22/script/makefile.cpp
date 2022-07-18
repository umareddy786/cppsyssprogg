CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall _Werror
INC = ./inc
IFLAGS = -I$(INC)
	BIN = ./bin
	OBJ = ./obj
	SRC = ./src
	all: sysPrg1
	sysPrg1: $(OBJ)/sysPrg1.o
	$(CC) $(LFLAGS) $(BIN)/sysPrg1 $(OBJ)/sysPrg1.o
	$(OBJ)/sysPrg1.o: $(SRC)/sysPrg1.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/sysPrg1.cpp
	mv *.o $(OBJ)
	clean:
	@echo "Cleaning is in progress"
	rm -f a.out sysPrg1
	rm -f *.o
	rm -f $(OBJ)/*.o
		      rm -f $(BIN)/sysPrg1 $(BIN)/sysPrg2 $(BIN)/sysPrg3
		      rm -f $(BIN)/sysPrg4 $(BIN)/sysPrg5
		      @echo "Done!"

