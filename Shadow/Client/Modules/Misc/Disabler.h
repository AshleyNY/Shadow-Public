#pragma once

class Disabler : public Module
{
public:
    Disabler(int keybind = 7, bool enabled = true) :
        Module("Disabler", "Misc", "Disable certain anticheats.", keybind, enabled)
    {

    }

    void onEvent(RenderContextEvent* event) override {
        
    }

    std::string getModeName() override {
        return " " + std::string("Flareon");
    }
};