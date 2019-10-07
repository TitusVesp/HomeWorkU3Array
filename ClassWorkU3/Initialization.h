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
		FirstBlock.AddMenuItem("Задача - 7 з 140", Array7);
		FirstBlock.AddMenuItem("Задача- 11 з 140", Array11);
		FirstBlock.AddMenuItem("Задача- 16 з 140", Array16);
		SecondBlock.AddMenuItem("Задача- 22 з 140", Array22);
		SecondBlock.AddMenuItem("Задача- 33 з 140", Array33);
		SecondBlock.AddMenuItem("Задача- 43 з 140", Array43);
		ThirdBlock.AddMenuItem("Задача- 54 з 140", Array54);
		ThirdBlock.AddMenuItem("Задача- 60 з 140", Array60);
		ThirdBlock.AddMenuItem("Задача- 63 з 140", Array63);
		FourthBlock.AddMenuItem("Задача- 68 з 140", Array68);
		FourthBlock.AddMenuItem("Задача- 77 з 140", Array77);
		FourthBlock.AddMenuItem("Задача- 88 з 140", Array88);
		FifthBlock.AddMenuItem("Задача- 92 з 140", Array92);
		FifthBlock.AddMenuItem("Задача- 101 з 140", Array101);
		FifthBlock.AddMenuItem("Задача- 110 з 140", Array110);
		SixthBlock.AddMenuItem("Задача- 119 з 140", Array119);
		SixthBlock.AddMenuItem("Задача- 123 з 140", Array123);
		SixthBlock.AddMenuItem("Задача- 129 з 140", Array129);
		SeventhBlock.AddMenuItem("Задача- 131 з 140", Array131);
		SeventhBlock.AddMenuItem("Задача- 136 з 140", Array136);
		SeventhBlock.AddMenuItem("Задача- 132 з 140", Array132);
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