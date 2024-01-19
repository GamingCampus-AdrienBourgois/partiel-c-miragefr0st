#include "Solution3.h"

// Don't forget to enable the exercise in the StudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_3

#include <algorithm>
#include <stdexcept>

void Solution3::SetWords(const std::vector<std::string>& _words)
{
    words = _words;
}

void Solution3::SortWords()
{
    // Check if the vector is empty before attempting to sort
    if (words.empty())
    {
        throw std::logic_error("Cannot sort an empty vector of words.");
    }

    // Bubble sort for simplicity
    for (size_t i = 0; i < words.size() - 1; ++i)
    {
        for (size_t j = 0; j < words.size() - i - 1; ++j)
        {
            // Convert both strings to lowercase for case-insensitive comparison
            std::string lowerA = words[j];
            std::string lowerB = words[j + 1];
            std::transform(lowerA.begin(), lowerA.end(), lowerA.begin(), ::tolower);
            std::transform(lowerB.begin(), lowerB.end(), lowerB.begin(), ::tolower);

            // Swap if they are in the wrong order
            if (lowerA > lowerB)
            {
                std::swap(words[j], words[j + 1]);
            }
        }
    }
}

const std::vector<std::string>& Solution3::GetSortedWords() const
{
    return words;
}

#endif

