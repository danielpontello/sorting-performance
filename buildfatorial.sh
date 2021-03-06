#!/bin/bash

# Remove arquivos temporarios
rm -rf fatorial.gprof

# Para cada valor da planilha
for i in 10 20 30 40 50 60 70 80 90 100 120 140 160 180 200 1000 10000 27000 64000 125000 216000  
do
	# Substitui o valor no arquivo pelo valor atual
	sed -i "/#define QUANTIDADE/c\#define QUANTIDADE $i" fatorial.c
	# Compila o programa
	gcc -pg -o prog fatorial.c
	# Roda o programa
	./prog
	# Adiciona dados ao relatorio
	echo "Fatorial de $i ========================" >> fatorial.gprof
	gprof --brief -p ./prog >> fatorial.gprof
	echo " " >> fatorial.gprof
done
