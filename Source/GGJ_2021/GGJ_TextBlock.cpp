// Fill out your copyright notice in the Description page of Project Settings.


#include "GGJ_TextBlock.h"
#include "Engine/Font.h"

UGGJ_TextBlock::UGGJ_TextBlock(const FObjectInitializer& initializer)
	: Super(initializer)
{
	static ConstructorHelpers::FObjectFinder<UFont> MyFontObj(TEXT("/Game/Assets/MyFonts/MilkieWylkie_Font.MilkieWylkie_Font"));
	Font = FSlateFontInfo(MyFontObj.Object, 24, FName("Regular"));
}
