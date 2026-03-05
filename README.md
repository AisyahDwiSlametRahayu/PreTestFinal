# PreTest Card Game

This project is a simple console-based card scoring simulation inspired by Balatro mechanics.

## Features
- 3 round gameplay
- Base score calculation
- Modifier system
- Shop system to buy modifiers
- Modifier stacking

## Design Pattern Used
This project implements the **Factory Pattern** to create modifier objects dynamically.

The `ModifierFactory` class is responsible for generating different modifier types such as:

- DoubleScoreModifier
- FlatBonusModifier
- SquareScoreModifier

Using the Factory Pattern allows the program to create objects without exposing the creation logic to the main game system.

## Gameplay Flow
1. Player starts a round and receives a base score.
2. Active modifiers modify the score.
3. Player enters the shop and can purchase a modifier.
4. The modifier will affect future rounds.
5. The game runs for 3 rounds.

## Example Output

```
--- Round 1 ---
Base Score: 53
Modified Score: 53

=== SHOP ===
1. Double Score
2. +50 Bonus
3. Square Score
Choose (0 to skip): 2
```

## Author
Aisyah Dwi Slamet Rahayu
