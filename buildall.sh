#!/bin/bash

# Remove arquivos temporarios
rm -rf relatorio.gprof

# Para cada valor da planilha
for i in 10 20 30 40 50 60 70 80 90 100 120 140 160 180 200 1000 10000 27000 64000 125000 216000 
do
	# Substitui o valor no arquivo pelo valor atual
	sed -i "/#define QUANTIDADE/c\#define QUANTIDADE $i" *.c
	for f in *.c; do
		# Compila o programa
		gcc -pg -o prog $f
		# Roda o programa
		./prog
		# Adiciona dados ao relatorio
		echo "Fatorial de $i ========================" >> relatorio.gprof
		gprof --brief -p ./prog > "$f.gprof"
		echo " " >> relatorio.gprof
	done
done
