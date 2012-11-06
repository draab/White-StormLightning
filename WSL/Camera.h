/*
This file is part of White - Storm: Lightning (alpha).

	Copyright 2012 Christopher Augustus Greeley

    White - Storm: Lightning (alpha) is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    White - Storm: Lightning (alpha) is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with White - Storm: Lightning (alpha).  If not, see <http://www.gnu.org/licenses/>.
*/
#include "Mobile.h"
namespace WSL
{
	namespace Global
	{
		struct Camera
		{
			inline Camera( float x_, float y_, float z_, float width_, float height_, float depth_, sf::View *camera_ )
			{
				x = x_;
				y = y_;
				z = z_;
				width = width_;
				height = height_;
				depth = depth_;
				camera = camera_;
			}
			inline Camera() {}
			float x, y, z, width, height, depth;
			sf::View *camera;
			void Move( float x_, float y_, float z_ )
			{
				x += x_;
				y += y_;
				z += z_;
				camera->Move( x_, y_ );
			}
			void SetX( float x_ );
			void SetY( float y_ );
			void SetZ( float z_ );
			void SetWidth( float width_ );
			void SetHeight( float height_ );
			void SetDepth( float depth_ );
			void SetCamera( sf::View *camera_ );
			float GetX();
			float GetY();
			float GetZ();
			float GetWidth();
			float GetHeight();
			float GetDepth();
			sf::View* GetCamera();
			void Zoom( float zOffset );
			void SetZoom( float z_ );
		};
	}
}