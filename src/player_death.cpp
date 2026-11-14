
struct PlayerDeath {
    bool isDead = false;
    bool hotbarVisible = true;

    void die() {
        isDead = true;
        hotbarVisible = false;
    }

    void respawn() {
        isDead = false;
        hotbarVisible = true;
    }
};

PlayerDeath playerDeath;
