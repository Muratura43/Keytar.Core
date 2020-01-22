# Keytar.Core

g++ -c main.cc keytar.cc
g++ -framework CoreFoundation -framework Security -shared -o keytar.dll main.o keytar.o