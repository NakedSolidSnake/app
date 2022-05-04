# -include dependecies

TARGET := app.out

all: $(TARGET)

$(TARGET): app.o 
	make -C mathe
	make -C print
	gcc app.o -o $(TARGET) -L./mathe -L./print -lmathe -lprint

app.o: app.c
	gcc -c -I. app.c -o app.o

clean:
	make -C mathe clean	
	make -C print clean
	rm -rf $(TARGET) *.o

