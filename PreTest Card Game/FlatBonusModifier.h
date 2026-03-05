#pragma once
#include "IModifier.h"

class FlatBonusModifier : public IModifier {
public:
    int apply(int baseScore) override {
        return baseScore + 50;
    }
};