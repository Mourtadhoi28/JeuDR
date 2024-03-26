
#ifndef JEUDR_RANDOMDRAW_H
#define JEUDR_RANDOMDRAW_H

#endif //JEUDR_RANDOMDRAW_H

#include <vector>
#include "RandomDrawResult.h"

class RandomDraw {
public:
    RandomDraw(const std::vector<RandomDrawResult>& results);

    RandomDrawResult::ResultType draw();

private:
    std::vector<RandomDrawResult> m_results;
};

#endif //RANDOMDRAW_H
