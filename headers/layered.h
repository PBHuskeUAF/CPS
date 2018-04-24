#ifndef LAYERED_H
#define LAYERED_H
#include "multishape.h"
// cps::MultiShape

#include <initializer_list>
// std::initializer_list
#include <string>
// std::string
#include <vector>
// std::vector

namespace cps {
class Layered : public MultiShape {
public:
  Layered() = default;
  ~Layered() = default;
  Layered(std::initializer_list<ShapePtr> shapes);

protected:
  virtual PointType findNextCurrentPoint(int i) override;
  virtual void getBoundBoxDimensionInLoop(int i) override;
};
} // namespace cps
#endif
