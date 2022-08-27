// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EElementalType.h"
#include "CombatEntityClass.h"
#include "CombatEntity.generated.h"

/**
 * 
 */
USTRUCT()
struct DESENTINTOATLANTIS_API FCombatEntity : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

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

	virtual void SetHealth(int aHealth);
	
	virtual void DecrementHealth(int aDecremenby);
	void DecrementHealth(int aDecrementby, EElementalType aElementalType,float aTimeTillInitalDamage, float aTimeTillHoveringUiElement, float TimeTillDamage);

	virtual void IncrementHealth(int Increment);


	virtual Charactertype GetCharactertype();
	virtual void Resurrection();
	void DeathCheck();
	virtual void Death();

	virtual float GetHealthPercentage();
	
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

	UCombatEntityClass* currentClass;

	UPROPERTY( EditAnywhere )
	FString characterName;
	UPROPERTY( EditAnywhere )
	FString classDataTablePath;
	
	int currentHealth;
	int currentMana;
	
	int buffStrength;
	int debuffStrength;
	int domainStrength;

	int buffMagic;
	int debuffMagic;
	int domainMagic;
    

	int buffHit;
	int debuffHit;
	int domainHit;
	
	int buffEvasion;
	int debuffEvasion;
	int domainEvasion;
	
	int BuffDefence;
	int DebuffDefence;
	int DomainDefence;
    
	
	int BuffResistance;
	int DebuffResistance;
	int DomainResistance;

	int CurrentDomainpoints;
	int MaxDomainPoints = 3;

	int AmountOfTurns;
    

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
