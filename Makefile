plot.png: sol.dat sol.py
	python sol.py

%.dat : a.out
	./a.out 

a.out: NathaliaCalderon_Ejercicio30.cpp
	g++ NathaliaCalderon_Ejercicio30.cpp

clean:
	rm -rf a.out sol.dat plot.png *~