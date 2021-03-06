#ifndef CELL
#define CELL

#include <iostream>
#include <array>
#include <cstdlib>
class Grid; //forward declaration, no hacer include ya que se llamarian una clase a la otra
using namespace std;
typedef int State;
typedef std::array<int, 2> Position;

class Cell {
  public:
    Cell();
    void updateState(); //método para actualizar el estado de una cécula (utiliza neighbords en su interior)
    int neighbords(const Grid& grid); //método para hallar la vecindad (número de células vecinas vivas)
    State get_state() const;
    void set_state(State x);
    Position get_position() const;
    void set_position(Position pos);
    friend std::ostream& operator<<(std::ostream& stream, const Cell& cell);
  private:
    State state; //estado muerta 0 o viva 1 
    Position position;
};




#endif