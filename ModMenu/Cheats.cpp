#include "pch.h"
#include "ConsoleUtils.h"
#include "includes.h"
#include "SDK.h"


namespace Cheats
{

	bool UnlimPower = false;


	void SetPowerInOffice()
	{
		auto instances = CG::UObject::FindObjects<CG::ABP_RA_SL_Manager_C>();
		if (!instances.empty())
		{
			for (auto& mods : instances)
			{
				if (mods != nullptr)
				{
					mods->PowerRemaining = static_cast<float>(99.0);
				}
			}
		}
	}
	void SetPowerRoxyTalkie()
	{
		auto instances = CG::UObject::FindObjects<CG::ABP_RRM_RoxyTalkie_C>();
		if (!instances.empty())
		{
			for (auto& mods : instances)
			{
				if (mods != nullptr)
				{
					if (mods->RoxyTalkie != nullptr)
					{
						mods->CurrentPowerLevel = static_cast<float>(100);
					}
				}
			}
		}
	}
	void UnlockLevels()
	{
		auto instances = CG::UObject::FindObjects<CG::UThumperGameManager>();
		if (!instances.empty())
		{
			for (auto& mods : instances)
			{
				if (mods != nullptr)
				{
					if (mods->SaveGameData != nullptr)
					{
						mods->UnlockAllLevels();
					}
				}
			}
		}
	}
	void LoadCheatMenu()
	{
		auto instances = CG::UObject::FindObjects<CG::UThumperGameManager>();
		if (!instances.empty())
		{
			for (auto& mods : instances)
			{
				if (mods != nullptr)
				{
					if (mods->SaveGameData != nullptr)
					{
						mods->LoadCheatMenu();
					}
				}
			}
		}
	}

}
