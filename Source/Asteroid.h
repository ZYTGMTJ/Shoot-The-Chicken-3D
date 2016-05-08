#pragma once

namespace GamePlay
{
	enum AsteroidType
	{
		AsteroidType_Rock1 = 0,
		AsteroidType_Rock2 = 1,
		AsteroidType_Rock3 =2,
	};


	class IAsteroid
	{
	public:

		void		Init(UINT asteroidType);

		void		Update();

		void		Render();

	private:
		IPicture					mTexture;
		IMesh					mMesh;
		VECTOR3				mRotateSpeed;
		VECTOR3				mMoveSpeed;

	};
}