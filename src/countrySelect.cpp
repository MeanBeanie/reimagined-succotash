#include "countrySelect.hpp"

bool Country::checkCol(float mX, float mY) {
  bool result = false;

  int next = 0;
  for (int current = 0; current < vertices.size(); current++) {
    next = current + 1;
    if (next == vertices.size()) {
      next = 0;
    }

    Vertex vc = vertices.at(current);
    Vertex vn = vertices.at(next);

    if (((vc.y >= mY && vn.y < mY) || (vc.y < mY && vn.y >= mY)) &&
        (mX < (vn.x - vc.x) * (mY - vc.y) / (vn.y - vc.y) + vc.x)) {
      result = !result;
    }
  }
  return result;
}