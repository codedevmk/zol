#ifndef __RENDERCOMPONENT_H_INCLUDED__   
#define __RENDERCOMPONENT_H_INCLUDED__  

#include <SFML/Graphics.hpp>
#include "Component.hpp"
//https://stackoverflow.com/questions/47530289/sfml-vertical-sync-is-not-supported
//https://www.sfml-dev.org/documentation/2.5.0/structsf_1_1BlendMode.php
//https://gist.github.com/Bromeon/9447338

// OpenGL
//https://www.youtube.com/watch?v=WTNE0uAl0Q0

class RenderComponent : public Component
{
    private:
        void Load(char* filename);

    protected:
        sf::BlendMode _blendMode;
        sf::Texture _texture;
        sf::Vector3f _position;
        sf::Vector3f _origin;

    public:
        RenderComponent(char* filename);
        ~RenderComponent();
};
#endif