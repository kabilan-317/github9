#include <stdio.h>

int main(void)
{
    const char *items[] = {
        "Aarav", "Maya", "Liam", "Sofia", "Noah",
        "Amara", "Ethan", "Isla", "Arjun", "Zara",
        "Oliver", "Anaya", "Leo", "Mila", "Kai",
        "river", "mountain", "forest", "ocean", "meadow",
        "sunshine", "rainbow", "thunder", "breeze", "starlight",
        "apple", "orange", "mango", "peach", "cherry",
        "pencil", "notebook", "window", "garden", "lantern",
        "harmony", "curiosity", "courage", "kindness", "wonder",
        "journey", "discovery", "adventure", "dream", "smile",
        "cloud", "island", "bridge", "feather", "compass"
    };
    const size_t count = sizeof items / sizeof items[0];

    for (size_t i = 0; i < count; ++i) {
        printf("%2zu. %s\n", i + 1, items[i]);
    }

    return 0;
}
