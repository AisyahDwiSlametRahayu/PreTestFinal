#pragma once
#include "IModifier.h"

class DoubleScoreModifier : public IModifier {
public:
    int apply(int baseScore) override {
        return baseScore * 2;
    }
};