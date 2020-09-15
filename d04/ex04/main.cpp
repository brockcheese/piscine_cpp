#include "MiningBarge.hpp"
#include "KoalaSteroid.hpp"
#include "AsteroKreog.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"

int main() {

	MiningBarge barge;

	DeepCoreMiner a;
	StripMiner b;

	barge.equip(&a);
	barge.equip(&b);

	AsteroBocal c;
	BocalSteroid d;

	barge.mine(&c);
	barge.mine(&d);

	return (0);
}
