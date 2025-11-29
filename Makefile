# Makefile para el Sistema de Zoologico

CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

# Archivos fuente
SOURCES = main.cpp Persona.cpp Visitante.cpp Boleto.cpp Tratamiento.cpp Receta.cpp
HEADERS = Persona.h Visitante.h Boleto.h Tratamiento.h Receta.h
OBJECTS = $(SOURCES:.cpp=.o)

# Nombre del ejecutable
TARGET = zoologico

# Regla principal
all: $(TARGET)

# Enlazar
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Compilar archivos fuente
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar archivos generados
clean:
	rm -f $(OBJECTS) $(TARGET)

# Ejecutar el programa
run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run
