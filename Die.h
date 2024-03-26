
#ifndef JEUDR_DIE_H
#define JEUDR_DIE_H

#endif //JEUDR_DIE_H

#include "RandomDrawResult.h"

class Die : public RandomDrawResult {
public:
    Die(int numFaces);
    Die(const std::vector<int>& faces);

    int roll() override;

private:
    std::vector<int> m_faces;
};

#endif
