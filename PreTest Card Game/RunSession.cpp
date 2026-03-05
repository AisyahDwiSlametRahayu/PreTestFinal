#include <iostream>
#include <cstdlib>
#include <ctime>
#include "RunSession.h"

void RunSession::start() {
    ScoringSystem scoring;
    ShopSystem shop;
    int totalScore = 0;

    std::srand(static_cast<unsigned>(std::time(nullptr)));

    std::cout << "=== Start Run ===\n";

    for (int round = 1; round <= 3; round++) {
        std::cout << "\n--- Round " << round << " ---\n";

        int baseScore = std::rand() % 100 + 1;
        int finalScore = scoring.calculateScore(baseScore);

        std::cout << "Modified Score: " << finalScore << std::endl;

        totalScore += finalScore;

        auto mod = shop.openShop();
        if (mod)
            scoring.addModifier(mod);
    }

    std::cout << "\n=== End Run ===\n";
    std::cout << "Total Score: " << totalScore << std::endl;
}