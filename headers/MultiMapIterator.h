#pragma once

#include "MultiMap.h"

class MultiMapIterator
{
    friend class MultiMap;

private:
    //the iterator stores a reference to the container
    const MultiMap &multiMap;
    //other specific attributes: current, etc

    explicit MultiMapIterator(const MultiMap &multiMap);

public:
    TElem getCurrent();

    bool valid();

    void next();

    void first();
};

