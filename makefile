all:
	g++ -c utils.cpp -o utils.o
	g++ -c main.cpp -o main.o
	g++ utils.o main.o -o vitoNet

up:
	./virtualSocket ./tmp/p1 ./tmp/p2

down:
	pkill -f socat

stop:
	pkill -f vitocosmicNetwork	