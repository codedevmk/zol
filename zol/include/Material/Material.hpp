#ifndef __MATERIAL_H_INCLUDED__   
#define __MATERIAL_H_INCLUDED__  
//This Wallet Breath For The Wild
//BE35ABD917155F6F81B15E593D7948E3CCC10D42B762F07FC72A37D99EC1F8ED
//https://minecraft.gamepedia.com/Materials#cite_note-4

enum class ObjectTypes{
    Tool,
    Material
};

class Property
{
    protected:
        char* _name;
        void* _data; 
        int _size;

    public:
        Property(char* name);
        ~Property();
};

class Material
{
    protected:
        float _durability;
        char* _name;
        bool _isLiquid;
        bool _isSolid;
        float _opaue;
        bool flamable;
        bool _canFreez;
        bool _blockLight;
        bool _blockMovement;
        float _luminance;
        float _transparency;
        float _blastResistance;
        bool _renewable;
        bool _stackable;
        int _drop;

        Property* _property;

    public:
        Material(char* name, bool liguid, bool solid);
        virtual ~Material();
};
#endif