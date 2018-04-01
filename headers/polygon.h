#ifndef POLYGON_H
#define POLYGON_H
#include "shape.h"
// cps::Shape
// Shape::BoundBoxType
// Shape::PointType

#include <string>
// std::string
#include <utility>
// std::pair

namespace cps {
class Polygon : public Shape {
public:
  using Shape::BoundBoxType;
  using Shape::PointType;

private:
  unsigned int number_sides;
  unsigned int side_length;
  const std::string number_sides_str = "number_sides";
  const std::string side_length_str = "side_length";

public:
  Polygon() = default;
  ~Polygon() = default;
  bool operator==(const Polygon &rhs) const;
  Polygon(BoundBoxType bound_Box, PointType current_Point,
          unsigned int number_sides, unsigned int side_length);
  virtual void rotate(unsigned int rotation_angle) override;
  virtual void horizontal() override;
  virtual void vertical() override;
  virtual std::string toPostScript() override;

public:
  unsigned int getNumberOfSides();
  unsigned int getSideLength();
  pair<int,int> make_Bounding_Box(unsigned int number_sides, unsigned int side_length);
  pair<int,int> starting_Point(Shape::PointType current_point, int side_length, int number_sides);
};

Polygon getPolygon(Shape::PointType current_point, unsigned int number_sides,
                   unsigned int side_length);
} // namespace cps
#endif
