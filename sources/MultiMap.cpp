#include "../headers/MultiMap.h"
#include "../headers/MultiMapIterator.h"

MultiMap::MultiMap()
{
    length = 0;
    head = nullptr;
}

void MultiMap::add(TKey c, TValue v)
{
    ListItem *newItem = new ListItem();
    newItem->element = TElem{c, v};
    newItem->next = nullptr;
    if (head == nullptr)
    {
        head = newItem;
        return;
    }
    ListItem *lastItem = head;
    ListItem *currentItem = head->next;
    while (currentItem != nullptr)
    {
        lastItem = currentItem;
        currentItem = currentItem->next;
    }
    lastItem->next = newItem;
    length++;
}

bool MultiMap::remove(TKey c, TValue v)
{
    return false;
}

vector<TValue> MultiMap::search(TKey c) const
{
    return vector<TValue>();
}

int MultiMap::size() const
{
    return length;
}

bool MultiMap::isEmpty() const
{
    return length == 0;
}

MultiMap::~MultiMap()
{
    ListItem *lastItem;
    ListItem *currentItem = head->next;
    while (currentItem != nullptr)
    {
        lastItem = currentItem;
        currentItem = currentItem->next;
        delete lastItem;
    }
}

MultiMapIterator MultiMap::iterator() const
{
    return MultiMapIterator(*this);
}
