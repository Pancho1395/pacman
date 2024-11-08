run : bin/tazo
	./bin/tazo

runMem : bin/mem
		./bin/mem
		
runAnimacion : bin/animacion
		./bin/animacion

runPrueba : bin/prueba
		./bin/prueba
		

bin/tazo : src/main.cpp
	g++ src/main.cpp -Iinclude -o bin/tazo

assets/mensaje : bin/tazo
	./bin/tazo > assets/mensaje

bin/mem : src/memoria.cpp
	g++ src/memoria.cpp -Iinclude -o bin/mem

bin/animacion : src/canvas_animated.cpp
	g++ src/canvas_animated.cpp -Iinclude -o bin/animacion -std=c++2a -lftxui-screen -lftxui-dom -lftxui-component


bin/prueba : src/Prueba.cpp
	g++ src/Prueba.cpp -Iinclude -o bin/prueba -std=c++2a -lftxui-screen -lftxui-dom -lftxui-component


