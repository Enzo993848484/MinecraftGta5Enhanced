
#include <array>
#include <string>
#include <algorithm>

struct InventoryItem {
    std::string id;
    int quantity = 0;
};

class PlayerInventory {
public:
    static constexpr int HOTBAR_SIZE = 9;

    std::array<InventoryItem, HOTBAR_SIZE> hotbar{};

    int selectedSlot = 0;
    bool visible = true;

    void addItem(const std::string& id, int quantity = 1) {
        if (id.empty() || quantity <= 0)
            return;

        for (auto& slot : hotbar) {
            if (slot.id == id) {
                slot.quantity += quantity;
                return;
            }
        }

        for (auto& slot : hotbar) {
            if (slot.id.empty()) {
                slot.id = id;
                slot.quantity = quantity;
                return;
            }
        }
    }

    void selectSlot(int slot) {
        if (slot >= 0 && slot < HOTBAR_SIZE)
            selectedSlot = slot;
    }

    void hideHotbar() {
        visible = false;
    }

    void showHotbar() {
        visible = true;
    }

    void clear() {
        for (auto& slot : hotbar)
            slot = {};
    }
};

PlayerInventory playerInventory;

