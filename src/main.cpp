#include <fmt/format.h>
#include <SFML/Config.hpp>

int main() {
    fmt::print("SFML VERSION: {}", SFML_VERSION_MAJOR);
    return 0;
}
