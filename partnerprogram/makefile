# the environment
CXXFLAGS=`fltk-config --cxxflags` --std=c++11
LDFLAGS=`fltk-config --ldflags`
CXX=`fltk-config --cxx`

# the app
TARGETS=partner_programing
all: $(TARGETS)

partner_programing: partner_programing.o main.o partner_programing_callback.o
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LDFLAGS)

# the ingrediants
partner_programing.o: partner_programing.cxx partner_programing.h
	$(CXX) $(CXXFLAGS) -c -o $@ partner_programing.cxx 
partner_programing_callback.o: partner_programing_callback.cpp partner_programing_callback.h partner_programing.h
main.o: main.cpp partner_programing.h partner_programing_callback.h
partner_programing.cxx: partner_programing.fl
	fluid -c partner_programing.fl
# utility
clean:
	rm -f *.o $(TARGETS)