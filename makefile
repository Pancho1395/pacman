run : bin/tazo
	./bin/tazo

runMen : bin/mem
		./bin/mem
		
bin/tazo : src/main.cpp
	g++ src/main.cpp -Iinclude -o bin/tazo

assets/mensaje : bin/tazo
	./bin/tazo > assets/mensaje

bin/mem : src/memoria.cpp
	g++ src/memoria.cpp -Iinclude -o bin/mem

