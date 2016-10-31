#!/bin/bash

printf "Installing...\n"
make
pandoc -s -t man man/Dijktras.md -o ./man/Dijktras.1
mv ./man/Dijktras.1 /usr/local/share/man/man1
gzip /usr/local/share/man/man1/Dijktras.1
cp Dijktras ~/bin
printf "Done!\n"
