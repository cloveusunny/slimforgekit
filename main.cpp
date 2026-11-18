#include <string>
#include <vector>

void text_contains() {
    std::string text = "hidden harbor";
    std::string part = "harbor";
    bool found = false;
    for (std::size_t i = 0; i + part.size() <= text.size(); ++i) {
        bool match = true;
        for (std::size_t j = 0; j < part.size(); ++j) {
            if (text[i + j] != part[j]) { match = false; break; }
        }
        if (match) { found = true; break; }
    }
    (void)found;
}

void count_multiples() {
    int count = 0;
    for (int i = 1; i <= 100; ++i) {
        if (i % 7 == 0) count += 1;
    }
    (void)count;
}

void count_vowels() {
    std::string text = "prism bridge";
    int vowels = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        char ch = text[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels += 1;
    }
    (void)vowels;
}

void double_value() {
    int x = 21;
    int doubled = x * 2;
    (void)doubled;
}

extern "C" int calm_fjord();
extern void calm_maple();
extern void verdant_harbor();
extern void prime_compass();

int main() {
    text_contains();
    count_multiples();
    count_vowels();
    double_value();
    calm_maple();
    verdant_harbor();
    prime_compass();
    return calm_fjord();
}
