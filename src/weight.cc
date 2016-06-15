#include "weight.h"

namespace dd {

Weight::Weight(WeightIndex id, weight_value_t weight, bool isfixed)
    : id(id), weight(weight), isfixed(isfixed) {}

Weight::Weight() : Weight(INVALID_ID, 0.0, false) {}

}  // namespace dd
