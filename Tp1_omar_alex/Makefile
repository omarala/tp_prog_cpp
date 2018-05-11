BUILDIR=build 
SRCDIR=src
TSTDIR=test
PROG=Dvector
OBJS=Dvector.o 
CXX=g++
CXXFLAGS= -g -Wall

all:$(PROG) clean


$(PROG):$(SRCDIR)/$(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

$(SRCDIR)/$(OBJS): 
	$(CXX) -c $(CXXFLAGS) $(SRCDIR)/$(PROG).cpp


doc:

clean:
	rm -r *.o

