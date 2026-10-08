#pragma once 

class Game {
public:
    Game();
    ~Game();
    void run();

private:
    bool m_isRunning;
};