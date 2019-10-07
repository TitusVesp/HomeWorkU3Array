#pragma once
#include "OOP_Menu.h"
#include "Array.h"

class Init : protected MenuChepter
{
private:
	MenuChepter FirstBlock;
	MenuChepter SecondBlock;
	MenuChepter ThirdBlock;
	MenuChepter FourthBlock;
	MenuChepter FifthBlock;
	MenuChepter SixthBlock;
	MenuChepter SeventhBlock;
	Menu MainMenu;
public:

	Init()
	{
		FirstBlock.AddMenuItem("������ - 7 � 140", Array7);
		FirstBlock.AddMenuItem("������- 11 � 140", Array11);
		FirstBlock.AddMenuItem("������- 16 � 140", Array16);
		SecondBlock.AddMenuItem("������- 22 � 140", Array22);
		SecondBlock.AddMenuItem("������- 33 � 140", Array33);
		SecondBlock.AddMenuItem("������- 43 � 140", Array43);
		ThirdBlock.AddMenuItem("������- 54 � 140", Array54);
		ThirdBlock.AddMenuItem("������- 60 � 140", Array60);
		ThirdBlock.AddMenuItem("������- 63 � 140", Array63);
		FourthBlock.AddMenuItem("������- 68 � 140", Array68);
		FourthBlock.AddMenuItem("������- 77 � 140", Array77);
		FourthBlock.AddMenuItem("������- 88 � 140", Array88);
		FifthBlock.AddMenuItem("������- 92 � 140", Array92);
		FifthBlock.AddMenuItem("������- 101 � 140", Array101);
		FifthBlock.AddMenuItem("������- 110 � 140", Array110);
		SixthBlock.AddMenuItem("������- 119 � 140", Array119);
		SixthBlock.AddMenuItem("������- 123 � 140", Array123);
		SixthBlock.AddMenuItem("������- 129 � 140", Array129);
		SeventhBlock.AddMenuItem("������- 131 � 140", Array131);
		SeventhBlock.AddMenuItem("������- 136 � 140", Array136);
		SeventhBlock.AddMenuItem("������- 132 � 140", Array132);
		MainMenu.AddMenuItem("FirstBlock", FirstBlock);
		MainMenu.AddMenuItem("SecondBlock", SecondBlock);
		MainMenu.AddMenuItem("ThirdBlock", ThirdBlock);
		MainMenu.AddMenuItem("FourthBlock", FourthBlock);
		MainMenu.AddMenuItem("FifthBlock", FifthBlock);
		MainMenu.AddMenuItem("SixthBlock", SixthBlock);
		MainMenu.AddMenuItem("SeventhBlock", SeventhBlock);
	}

	void Show_Main()
	{
		MainMenu.ShowMenu();
	}
};