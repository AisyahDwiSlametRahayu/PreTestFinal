#include "ScoringSystem.h"

void ScoringSystem::addModifier(std::shared_ptr<IModifier> mod) {
    modifiers.push_back(mod);
}

int ScoringSystem::calculateScore(int baseScore) {
    int score = baseScore;

    std::cout << "Base Score: " << score << std::endl;

    for (auto& mod : modifiers) {
        score = mod->apply(score);
    }

    return score;
}