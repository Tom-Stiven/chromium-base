#include <iostream>
#include "base/strings/stringprintf.h"
#include "base/time/time.h"

int main(int, char**) {
    base::Time::Exploded exploded;
    base::Time::Now().LocalExplode(&exploded);
    std::string str = base::StringPrintf(
        "%d-%02d-%02d", exploded.year, exploded.month, exploded.day_of_month);
    printf_s("%s\n", str.c_str());

    system("pause");
    return 0;
}