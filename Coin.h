
#ifndef JEUDR_COIN_H
#define JEUDR_COIN_H

#endif //JEUDR_COIN_H

#include "RandomDrawResult.h"

class Coin : public RandomDrawResult {
public:
    Coin(int numFlips);

    int flip() override;

private:
    int m_numFlips;
};

#endif