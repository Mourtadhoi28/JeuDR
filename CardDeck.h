
#ifndef JEUDR_CARDDECK_H
#define JEUDR_CARDDECK_H

#endif //JEUDR_CARDDECK_H

#include "RandomDrawResult.h"

class CardDeck : public RandomDrawResult {
public:
    CardDeck(int numColors, int numValues);

    int draw() override;

private:
    int m_numColors;
    int m_numValues;
};

#endif //CARDDECK_H