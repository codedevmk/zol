#include <SFML/Graphics.hpp>
#include "../../include/Engine/Components/Component.hpp"
#include "../../include/Engine/Components/RenderComponent.hpp"

// Member functions definitions including constructor
RenderComponent::RenderComponent(char* filename) {
    // constructor
}

RenderComponent::~RenderComponent(void) {
    // destructor
}

void RenderComponent::Load(char* filename)
{
    int n, x, y;

    _texture.loadFromFile(filename);

    std::vector<sf::Sprite> Fishes(n,sf::Sprite(_texture));
    for (int n = 0; n < Fishes.size(); n++){
        Fishes[n].setOrigin(15, 15);
        Fishes[n].getPosition();
        Fishes[n].setPosition(x = rand() % 790 + 10, y = rand() % -10 - 50);
    }
}