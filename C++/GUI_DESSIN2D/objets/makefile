all: main

main: Point2D.o Figure.o Segment.o Cercle.o ArcCercle.o Triangle.o TRectangle.o Equilateral.o Isocele.o Quadrilatere.o Carre.o Losange.o Parallelogramme.o Quadrangle.o Rectangle.o main.o
	g++ Point2D.o Figure.o Segment.o Cercle.o ArcCercle.o Triangle.o TRectangle.o Equilateral.o Isocele.o Quadrilatere.o Carre.o Losange.o Parallelogramme.o Quadrangle.o Rectangle.o main.o -o executable 

Point2D.o: ./Base/Point2D.cpp
	g++ -c ./Base/Point2D.cpp -o Point2D.o

Figure.o: ./Base/Figure.cpp Point2D.o
	g++ -c ./Base/Figure.cpp -o Figure.o

Segment.o: ./Base/Segment.cpp Point2D.o Figure.o
	g++ -c ./Base/Segment.cpp -o Segment.o

Cercle.o: ./Cercle/Cercle.cpp Point2D.o Figure.o
	g++ -c ./Cercle/Cercle.cpp -o Cercle.o

ArcCercle.o: ./Cercle/ArcCercle.cpp Point2D.o
	g++ -c ./Cercle/ArcCercle.cpp -o ArcCercle.o

Triangle.o: ./Triangle/Triangle.cpp Point2D.o Segment.o
	g++ -c ./Triangle/Triangle.cpp -o Triangle.o

TRectangle.o: ./Triangle/TRectangle.cpp Point2D.o Segment.o Triangle.o
	g++ -c ./Triangle/TRectangle.cpp -o TRectangle.o

Equilateral.o: ./Triangle/Equilateral.cpp Point2D.o Segment.o Triangle.o
	g++ -c ./Triangle/Equilateral.cpp -o Equilateral.o

Isocele.o: ./Triangle/Isocele.cpp Point2D.o Segment.o Triangle.o
	g++ -c ./Triangle/Isocele.cpp -o Isocele.o

Quadrilatere.o: ./Quadrilatere/Quadrilatere.cpp Segment.o Point2D.o
	g++ -c ./Quadrilatere/Quadrilatere.cpp -o Quadrilatere.o

Carre.o:./Quadrilatere/Carre.cpp Segment.o Point2D.o Parallelogramme.o
	g++ -c ./Quadrilatere/Carre.cpp -o Carre.o

Losange.o:./Quadrilatere/Losange.cpp Segment.o Point2D.o Parallelogramme.o
	g++ -c ./Quadrilatere/Losange.cpp -o Losange.o

Parallelogramme.o:./Quadrilatere/Parallelogramme.cpp Segment.o Point2D.o
	g++ -c ./Quadrilatere/Parallelogramme.cpp -o Parallelogramme.o

Quadrangle.o:./Quadrilatere/Quadrangle.cpp Segment.o Point2D.o Quadrilatere.o
	g++ -c ./Quadrilatere/Quadrangle.cpp -o Quadrangle.o

Rectangle.o:./Quadrilatere/Rectangle.cpp Segment.o Point2D.o Parallelogramme.o
	g++ -c ./Quadrilatere/Rectangle.cpp -o Rectangle.o

main.o: main.cpp ./Base/Point2D.h
	g++ -c main.cpp -o main.o

clean:
	rm -rf *.o */*.o

mrproper: clean
	rm -rf executable *~ */*~
