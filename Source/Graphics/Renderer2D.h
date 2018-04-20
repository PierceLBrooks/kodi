#pragma once
#include "Renderable2D.h"

#include <GL/glew.h>
#include "../Math/Math.h"

namespace kodi {
	namespace graphics {

		class Renderer2D {

		public:

			virtual void Submit(const Renderable2D* _renderable) = 0;
			virtual void Flush() = 0;

			// Ivi Implement Cheyyakapoyinaa Simple2DRendererki pedhdha nashtam ledhu.
			virtual void Begin() {}
			virtual void End() {}

		};

	}
}