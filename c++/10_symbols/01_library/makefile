EXE = exe
CXX = c++
LIBSRC = source/hello.cc
LIBOBJ = $(LIBSRC:.cc=.o)
CXXFLAGS = -I include -std=c++11
LFLAGS = -lhello -L ./  -Wl,-rpath,./

all: $(EXE)

install: libhello.so

$(EXE): libhello.so main.cc
	$(CXX) main.cc -o $@ $(CXXFLAGS) $(LFLAGS)

libhello.so: $(LIBOBJ)

	$(CXX) -shared -o $@ $^

%.o:%.cc
	$(CXX) -fpic -o $@ -c $< -I include

src/hello.o: include/hello.h

clean:
	@rm -rf *~ */*~ prefix main.o source/*.o


.PHONY: clean all install
