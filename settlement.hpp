#ifndef SETTELMENT_HPP
#define SETTELMENT_HPP

#include "piece.hpp"
#include "point.hpp"

class Settlement : public Piece {
 public:
  explicit Settlement(Player *Owner, Point *point, QObject *parent = nullptr);
  // To Map
  // To String
  Point *getPoint() const;

 private:
  Point *point;
};

#endif  // SETTELMENT_HPP