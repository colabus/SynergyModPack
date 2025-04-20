class Syn_BarrelHoles_Red extends Barrel_ColorBase
{
	void Syn_BarrelHoles_Red()
	{
		if (GetGame().IsDedicatedServer())
		{
			SetAllowDamage(false);
		}
	}

	override bool CanPutInCargo(EntityAI parent)
	{
		return false;
	}

	override bool CanPutIntoHands(EntityAI parent)
	{
		return false;
	}

	override void EEHitBy(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
	{
		return;
	}

	override void EOnInit(IEntity other, int extra)
	{
		super.EOnInit(other, extra);

		if (GetGame().IsDedicatedServer())
			SetHealth(GetMaxHealth());
	};
};
