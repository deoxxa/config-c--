#!/bin/sh

rm -f app

g++ -c -o config_scanner.o config/scanner.cpp
g++ -c -o config_lexer.o config/lexer.cpp
g++ -c -o config_parser.o config/parser.cpp
g++ -c -o config_node.o config/node.cpp
g++ -c -o config.o config.cpp
g++ -o app app.cpp *.o

rm -f *.o
