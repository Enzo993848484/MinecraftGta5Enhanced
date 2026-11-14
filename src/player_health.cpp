
#include <algorithm>

enum class GameMode {
    Creative,
    Survival
};

struct PlayerHealth {
    GameMode mode = GameMode::Creative;

    int maxHealth = 100;
    int health = 100;

    bool isDead = false;

    bool hasInfiniteHealth() const {
        return mode == GameMode::Creative;
    }

    bool canTakeDamage() const {
        return mode == GameMode::Survival && !isDead;
    }

    void takeDamage(int damage) {
        if (!canTakeDamage() || damage <= 0)
            return;

        health = std::max(0, health - damage);

        if (health == 0)
            isDead = true;
    }

    void setGameMode(GameMode newMode) {
        mode = newMode;

        if (mode == GameMode::Creative) {
            health = maxHealth;
            isDead = false;
        }
    }

    void respawn() {
        health = maxHealth;
        isDead = false;
    }
};

PlayerHealth playerHealth;


