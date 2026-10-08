#include "Game.hpp"
#include <iostream>

Game::Game() : m_isRunning(true) {}

Game::~Game() = default;

void Game::run() {
    std::cout << "Le jeu démarre !\n";

    while (m_isRunning) {
        m_isRunning = false; 
    }
    
    std::cout << "Le jeu s'arrête proprement.\n";
}