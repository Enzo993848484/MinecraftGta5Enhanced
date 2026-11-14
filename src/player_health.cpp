
#include <algorithm>

struct PlayerHealth {
    int maxHealth = 100;
    int health = 100;
    bool isDead = false;

    void takeDamage(int damage) {
        if (isDead || damage <= 0)
            return;

        health = std::max(0, health - damage);

        if (health == 0) {
            isDead = true;
        }
    }

    void heal(int amount) {
        if (isDead || amount <= 0)
            return;

        health = std::min(maxHealth, health + amount);
    }

    void respawn() {
        health = maxHealth;
        isDead = false;
    }
};

PlayerHealth playerHealth;

