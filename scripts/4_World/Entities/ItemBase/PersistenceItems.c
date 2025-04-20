modded class Barrel_ColorBase
{
	// Force item to re-spawn every 2 hours when they are created by the Central Loot Economy (once touched by players, regular types.xml lifetime applies)
	override void EEOnCECreate()
	{
		super.EEOnCECreate();
		this.SetLifetime(7200);
	}
};