#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    // Twoja implementacja tutaj
    std::vector< char > potwor(people.size());
    std::vector< char >::reverse_iterator rit = potwor.rbegin();

    for (auto& osoba : people)
    {
        osoba.birthday();

        if (osoba.isMonster())
            *rit = 'n';
        else
            *rit = 'y';

        rit++;
    }

    return potwor;
}
