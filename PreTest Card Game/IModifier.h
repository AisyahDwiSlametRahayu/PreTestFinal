#pragma once

class IModifier {
public:
    virtual int apply(int baseScore) = 0;
    virtual ~IModifier() {}
};