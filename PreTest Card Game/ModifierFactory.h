#pragma once
#include <memory>
#include "DoubleScoreModifier.h"
#include "FlatBonusModifier.h"
#include "SquareScoreModifier.h"

class ModifierFactory {
public:
    static std::shared_ptr<IModifier> createModifier(int type);
};