#include "IMiningLaser.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
#include "IAsteroid.hpp"
#include "Comet.hpp"
#include "Asteroid.hpp"
#include "MiningBarge.hpp"

int	main() {
	MiningBarge 	barge;

	IMiningLaser*	dcm = new DeepCoreMiner();
	IMiningLaser* 	sm = new StripMiner();

	IAsteroid*		comet = new Comet();
	IAsteroid*		asteroid = new Asteroid();

	barge.equip(dcm);
	barge.equip(sm);

	barge.mine(comet);
	barge.mine(asteroid);

	delete asteroid;
	delete comet;
}
