#include "ModifierFactory.h"

std::shared_ptr<IModifier> ModifierFactory::createModifier(int type) {
    switch (type) {
    case 1:
        return std::make_shared<DoubleScoreModifier>();
    case 2:
        return std::make_shared<FlatBonusModifier>();
    case 3:
        return std::make_shared<SquareScoreModifier>();
    default:
        return nullptr;
    }
}