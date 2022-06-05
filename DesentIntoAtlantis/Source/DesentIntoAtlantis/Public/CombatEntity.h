// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EElementalType.h"
#include "CombatEntity.generated.h"

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCombatEntity : public UObject
{
	GENERATED_BODY()

	 enum Charactertype
	{
		Undefined,
        Ally,
        Enemy
    };

	 enum CreaturesAilment
	{
		None,
        Poison,
        Daze,
        Sleep,
        Rage,
    };


public:


	void SetTacticsEntity();
	void EndTurn();

	virtual int GetAllStrength();
	virtual int GetAllMagic();
	virtual int GetAllHit();
	virtual int GetAllEvasion();
	virtual int GetAllDefence();
	virtual int GetAllResistance();

	//SetStatusEffect(StatusEffects aStatusEffect);

	virtual void DecrementHealth(int Decremenby);
	void DecrementHealth(int Decrementby, EElementalType elementalType,float TimeTillInitalDamage, float TimeTillHoveringUiElement, float TimeTillDamage);

	virtual void IncrementHealth(int Increment);


	virtual Charactertype GetCharactertype();
	virtual void Resurrection();
	void DeathCheck();
	virtual void Death();

	
//	Skills m_Attack;
//	List<Skills> m_Skills { get; protected set; }
//	List<Skills> m_BloodArts { get; protected set; }

//	AiController m_CreatureAi;

	//CreaturesAilment m_creaturesAilment;
	Charactertype m_Charactertype;
	EElementalType m_ElementalStrength;
	EElementalType m_ElementalWeakness;
//	MovementType m_CreaturesMovementType;

//	MovementList m_MovementList;
    
	int m_CurrentHealth;
	int m_MaxHealth;
    
    
	int m_BaseStrength;
	int m_BuffStrength;
	int m_DebuffStrength;
	int m_DomainStrength;

	int m_BaseMagic;
	int m_BuffMagic;
	int m_DebuffMagic;
	int m_DomainMagic;
    
	int m_BaseHit;
	int m_BuffHit;
	int m_DebuffHit;
	int m_DomainHit;
    
	int m_BaseEvasion;
	int m_BuffEvasion;
	int m_DebuffEvasion;
	int m_DomainEvasion;
    
	int m_BaseDefence;
	int m_BuffDefence;
	int m_DebuffDefence;
	int m_DomainDefence;
    
    
	int m_BaseResistance;
	int m_BuffResistance;
	int m_DebuffResistance;
	int m_DomainResistance;

	int m_CurrentDomainpoints;
	int m_MaxDomainPoints = 3;

	int m_CreatureMovement = 4;

	int m_AmountOfTurns;
    

//	string DomainAffectingCreature;
//	string m_Name = "No Name";

//	Material m_PortaitMaterial;

	//GameObject Model;
//	GameObject ModelInGame;

	//DomainList.DomainListEnum m_DomainList;
	//Domain m_Domain;
	//Devour m_Devour;
//
	//List<StatusEffects> m_StatusEffectsOnCreature;
    
	bool m_IsAlive;
	// SkillList m_CreatureSkillList;

	
	
};
