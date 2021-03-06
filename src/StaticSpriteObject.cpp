#include "StaticSpriteObject.h"

StaticSpriteObject::StaticSpriteObject(const std::string textureFileName) 
	: Object(textureFileName) {
		size.x = texture->getSize().x;
		size.y = texture->getSize().y;
		mirror = false;
		theta = 0;
		pos.x = 0;
		pos.y = 0;
}

StaticSpriteObject::~StaticSpriteObject() {
}
