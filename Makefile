default: main.out

main.out: hospitalCharges.cpp Patient.cpp 
	g++ -Wall hospitalCharges.cpp Patient.cpp -o main.out

run:
	./main.out

clean:
	rm -f main.out
