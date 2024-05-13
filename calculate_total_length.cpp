#include "calculate_total_length.h"
#include <vector>
#include <string>

// calculate the length of all strings and return the sum
int CalculateTotalLength(const std::vector<std::string>& strings) {
    int totalLength = 0;
    // TODO error1: please fix
    for (int i = 0; i <strings.size(); ++i) {
      totalLength += strings[i].length();
    }
    return totalLength;
}
