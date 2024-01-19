#include "Solution3.h"

// Don't forget to enable the exercise in the StudentConfiguration.h file !
#include "StudentConfiguration.h"
#include <algorithm>
#include <stdexcept>
#ifdef COMPILE_EXERCICE_3

void Solution3::SetWords(const std::vector<std::string>& _words)
{
    words = _words;
}

void Solution3::SortWords()
{
    if (words.empty())
    {
        throw std::logic_error("Cannot sort an empty vector of words.");
    }


    for (size_t i = 0; i < words.size() - 1; ++i)
    {
        for (size_t j = 0; j < words.size() - i - 1; ++j)
        {
            std::string lowerA = words[j];
            std::string lowerB = words[j + 1];
            std::transform(lowerA.begin(), lowerA.end(), lowerA.begin(), ::tolower);
            std::transform(lowerB.begin(), lowerB.end(), lowerB.begin(), ::tolower);

            if (lowerA > lowerB)
            {
                std::swap(words[j], words[j + 1]);
            }
        }
    }
}

std::vector<std::string> Solution3::GetSortedWords() const
{
    return words;
}

#endif
