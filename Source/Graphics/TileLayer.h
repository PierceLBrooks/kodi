﻿#pragma once

#include "Layer.h"
#include "BatchRenderer2D.h"

namespace kodi
{
	namespace graphics
	{
		class TileLayer : public Layer
		{
		public:
			TileLayer(Shader * _shader);
			~TileLayer();
		};
	}
}


