# The MIT License (MIT)

# Copyright (c) 2015 Lorhan Sohaky

# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:

# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.

# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

all: Main

Main:main.o GenericField.o Stack.o
	gcc -Wall -o Main.exe main.o GenericField.o Stack.o

main.o:main.c ../src/Stack.h ../src/lib/GenericField.h
	gcc -c main.c -I../src/ -I../src/lib/

Stack.o:../src/Stack.c ../src/Stack.h ../src/lib/GenericField.h
	gcc -c ../src/Stack.c -I../src/ -I../src/lib/

GenericField.o:../src/lib/GenericField.c ../src/lib/GenericField.h
	gcc -c ../src/lib/GenericField.c -I../src/lib/

clean:
	rm -rf *.o
