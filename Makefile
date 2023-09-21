CXX = c++

EXECUTABLE = petShop


OBJS = VirtualPet.o Pokemon.o Pikachu.o Gatomon.o petShop.o

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CXX) -o $@ $(OBJS)

%.o: %.cpp
	$(CXX) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXECUTABLE)
