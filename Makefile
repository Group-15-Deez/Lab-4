all: main.out

run: main.out
	./main.out

main.out: hospitalCharges.cpp Patient.cpp
	g++ -Wall hospitalCharges.cpp Patient.cpp -o main.out

clean: rm *.out
