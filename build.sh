#!/bin/sh

rm -f app

g++ -c -Wall -Werror -o config_scanner.o config/scanner.cpp
g++ -c -Wall -Werror -o config_lexer.o config/lexer.cpp
g++ -c -Wall -Werror -o config_parser.o config/parser.cpp
g++ -c -Wall -Werror -o config_node.o config/node.cpp
g++ -c -Wall -Werror -o config.o config.cpp
g++ -Wall -Werror -o app app.cpp *.o

rm -f *.o
