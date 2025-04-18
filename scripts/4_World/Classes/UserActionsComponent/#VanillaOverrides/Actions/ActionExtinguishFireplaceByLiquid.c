modded class ActionExtinguishFireplaceByLiquid: ActionContinuousBase
{
	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		Object target_object = target.GetObject();
		
		//! Don't allow extinguishing eternal fireplace
		if (target_object.IsInherited(Syn_EternalFireplace))
			return false;

		return super.ActionCondition(player, target, item);
	}
};