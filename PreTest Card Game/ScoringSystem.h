#pragma once
#include <vector>
#include <memory>
#include <iostream>
#include "IModifier.h"

class ScoringSystem {
private:
    std::vector<std::shared_ptr<IModifier>> modifiers;

public:
    void addModifier(std::shared_ptr<IModifier> mod);
    int calculateScore(int baseScore);
};