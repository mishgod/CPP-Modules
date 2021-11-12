#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	{
		Weapon rifle("rifle");
		HumanA luke("Luke", rifle);
		luke.attack();
		rifle.setType("assault rifle");
		luke.attack();

		HumanB bred("Bred");
		Weapon sword("sword");
		bred.setWeapon(sword);
		bred.attack();
		sword.setType("ion cannon");
		bred.attack();
	}
}
