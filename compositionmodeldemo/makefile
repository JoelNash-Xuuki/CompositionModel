SRCS=score.cpp Note.cpp Performer.cpp PerformerGroup.cpp
OBJS=score.o Note.o Performer.o PerformerGroup.o

all: score

score: $(OBJS)
	g++ -o score $(OBJS)

score.o: $(SRCS)
	g++ -g $(SRCS)

sco: score
	./score > example.sco

wav: sco
	csound example.orc example.sco -Wo example.wav
#
#clean:
#	-rm *.o *.exe score score.exe example.sco example.wav example.mp3
