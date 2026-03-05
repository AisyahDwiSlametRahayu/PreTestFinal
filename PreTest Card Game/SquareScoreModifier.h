#pragma once
#include "IModifier.h"

class SquareScoreModifier : public IModifier {
public:
    int apply(int baseScore) override {
        return baseScore * baseScore;
    }
};