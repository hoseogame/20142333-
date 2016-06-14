#include "system.h"

void Print::Mangchi(int x, int y)
{
	SCREEN->ScreenPrint(x - 4, y - 1, "≧旨收旬");
	SCREEN->ScreenPrint(x - 4, y,     "↖早統早㏑㏑↖↗");
	SCREEN->ScreenPrint(x - 4, y + 1, "≧曲收旭");
}

void Print::MangchiReady(int x, int y)
{
	SCREEN->ScreenPrint(x - 4, y - 2, "    ↘");
	SCREEN->ScreenPrint(x - 4, y - 1, "  旨收旬");
	SCREEN->ScreenPrint(x - 4, y,     "  早  早");
	SCREEN->ScreenPrint(x - 4, y + 1, "  曲收旭");
	SCREEN->ScreenPrint(x - 4, y + 2, "    ‵");
	SCREEN->ScreenPrint(x - 4, y + 3, "    ‵");
	SCREEN->ScreenPrint(x - 4, y + 4, "    ↘");
	SCREEN->ScreenPrint(x - 4, y + 5, "    ↙");
}

void Print::InitScreen()
{
	SCREEN->ScreenPrint(0,  0, "旨收收收收收收收收收收收收收收收收收收收收旬");
	SCREEN->ScreenPrint(0,  1, "早                                        早");
	SCREEN->ScreenPrint(0,  2, "早                                        早");
	SCREEN->ScreenPrint(0,  3, "早                                        早");
	SCREEN->ScreenPrint(0,  4, "早                                        早");
	SCREEN->ScreenPrint(0,  5, "早                                        早");
	SCREEN->ScreenPrint(0,  6, "早                                        早");
	SCREEN->ScreenPrint(0,  7, "早                                        早");
	SCREEN->ScreenPrint(0,  8, "早             ////////                   早");
	SCREEN->ScreenPrint(0,  9, "早             早′ /早 ′弛/             早");
	SCREEN->ScreenPrint(0, 10, "早             早﹞﹞早旨有有旬           早");
	SCREEN->ScreenPrint(0, 11, "早             曲旬旨旭曲旬旨旭           早");
	SCREEN->ScreenPrint(0, 12, "早                                        早");
	SCREEN->ScreenPrint(0, 13, "早                                        早");
	SCREEN->ScreenPrint(0, 14, "早                                        早");
	SCREEN->ScreenPrint(0, 15, "早             舒渦雖 濩晦 啪歜           早");
	SCREEN->ScreenPrint(0, 16, "早                                        早");
	SCREEN->ScreenPrint(0, 17, "早          space 酈蒂 揚楝輿撮蹂         早");
	SCREEN->ScreenPrint(0, 18, "早                                        早");
	SCREEN->ScreenPrint(0, 19, "早                                        早");
	SCREEN->ScreenPrint(0, 20, "早                                        早");
	SCREEN->ScreenPrint(0, 21, "早                                        早");
	SCREEN->ScreenPrint(0, 22, "早                                        早");
	SCREEN->ScreenPrint(0, 23, "曲收收收收收收收收收收收收收收收收收收收收旭");
}

void Print::ReadyScreen()
{
	SCREEN->ScreenPrint(0,  0, "旨收收收收收收收收收收收收收收收收收收收收旬");
	SCREEN->ScreenPrint(0,  1, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0,  2, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0,  3, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0,  4, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0,  5, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0,  6, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0,  7, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0,  8, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0,  9, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 10, "早﹥﹥﹥﹥﹥                    ﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 11, "早﹥﹥﹥﹥﹥        蝶纔檜雖    ﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 12, "早﹥﹥﹥﹥﹥                    ﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 13, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 14, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 15, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 16, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 17, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 18, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 19, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 20, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 21, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 22, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 23, "曲收收收收收收收收收收收收收收收收收收收收旭");
}

void Print::SuccessScreen()
{
	SCREEN->ScreenPrint(0,  0, "旨收收收收收收收收收收收收收收收收收收收收旬");
	SCREEN->ScreenPrint(0,  1, "早                                        早");
	SCREEN->ScreenPrint(0,  2, "早                                        早");
	SCREEN->ScreenPrint(0,  3, "早                                        早");
	SCREEN->ScreenPrint(0,  4, "早             // / // ′′′             早");
	SCREEN->ScreenPrint(0,  5, "早             弛/′    /′弛Ｏ           早");
	SCREEN->ScreenPrint(0,  6, "早             弛＜  ∩  ＜弛∞           早");
	SCREEN->ScreenPrint(0,  7, "早              ′_________///            早");
	SCREEN->ScreenPrint(0,  8, "早                                        早");
	SCREEN->ScreenPrint(0,  9, "早                                        早");
	SCREEN->ScreenPrint(0, 10, "早                                        早");
	SCREEN->ScreenPrint(0, 11, "早                       蝶纔檜雖         早");
	SCREEN->ScreenPrint(0, 12, "早                                        早");
	SCREEN->ScreenPrint(0, 13, "早                   嘐暮 撩奢 !!!!       早");
	SCREEN->ScreenPrint(0, 14, "早                                        早");
	SCREEN->ScreenPrint(0, 15, "早                                        早");
	SCREEN->ScreenPrint(0, 16, "早                                        早");
	SCREEN->ScreenPrint(0, 17, "早     濩擎 舒渦雖 :                      早");
	SCREEN->ScreenPrint(0, 18, "早                                        早");
	SCREEN->ScreenPrint(0, 19, "早     識薄 :                             早");
	SCREEN->ScreenPrint(0, 20, "早                                        早");
	SCREEN->ScreenPrint(0, 21, "早                                        早");
	SCREEN->ScreenPrint(0, 22, "早                                        早");
	SCREEN->ScreenPrint(0, 23, "曲收收收收收收收收收收收收收收收收收收收收旭");
}

void Print::RunningScreen()
{
	SCREEN->ScreenPrint(0,  0, "旨收收收收收收收收收收收收收收收收收收收收旬");
	SCREEN->ScreenPrint(0,  1, "早                                        早");
	SCREEN->ScreenPrint(0,  2, "早                                        早");
	SCREEN->ScreenPrint(0,  3, "早                                        早");
	SCREEN->ScreenPrint(0,  4, "早                                        早");
	SCREEN->ScreenPrint(0,  5, "早                                        早");
	SCREEN->ScreenPrint(0,  6, "早                                        早");
	SCREEN->ScreenPrint(0,  7, "早                                        早");
	SCREEN->ScreenPrint(0,  8, "早                                        早");
	SCREEN->ScreenPrint(0,  9, "早                                        早");
	SCREEN->ScreenPrint(0, 10, "早                                        早");
	SCREEN->ScreenPrint(0, 11, "早                                        早");
	SCREEN->ScreenPrint(0, 12, "早                                        早");
	SCREEN->ScreenPrint(0, 13, "早                                        早");
	SCREEN->ScreenPrint(0, 14, "早                                        早");
	SCREEN->ScreenPrint(0, 15, "早                                        早");
	SCREEN->ScreenPrint(0, 16, "早                                        早");
	SCREEN->ScreenPrint(0, 17, "早                                        早");
	SCREEN->ScreenPrint(0, 18, "早                                        早");
	SCREEN->ScreenPrint(0, 19, "早                            ∞    ≒    早");
	SCREEN->ScreenPrint(0, 20, "早                          旨﹥旭旨﹤旭  早");
	SCREEN->ScreenPrint(0, 21, "早                            旭旬  旭旬  早");
	SCREEN->ScreenPrint(0, 22, "早                                        早");
	SCREEN->ScreenPrint(0, 23, "曲收收收收收收收收收收收收收收收收收收收收旭");
}

void Print::FailureScreen()
{
	SCREEN->ScreenPrint(0,  0, "旨收收收收收收收收收收收收收收收收收收收收旬");
	SCREEN->ScreenPrint(0,  1, "早                                        早");
	SCREEN->ScreenPrint(0,  2, "早                                        早");
	SCREEN->ScreenPrint(0,  3, "早                                        早");
	SCREEN->ScreenPrint(0,  4, "早                                        早");
	SCREEN->ScreenPrint(0,  5, "早                                        早");
	SCREEN->ScreenPrint(0,  6, "早             灰-收收-汐                 早");
	SCREEN->ScreenPrint(0,  7, "早             d 玫,.玫 b                 早");
	SCREEN->ScreenPrint(0,  8, "早             早老式考早                 早");
	SCREEN->ScreenPrint(0,  9, "早             汍糸弛牝污                 早");
	SCREEN->ScreenPrint(0, 10, "早               汎死汛                   早");
	SCREEN->ScreenPrint(0, 11, "早                    蝶纔檜雖            早");
	SCREEN->ScreenPrint(0, 12, "早                                        早");
	SCREEN->ScreenPrint(0, 13, "早            嘐暮 褒ぬ !!!!              早");
	SCREEN->ScreenPrint(0, 14, "早                                        早");
	SCREEN->ScreenPrint(0, 15, "早                                        早");
	SCREEN->ScreenPrint(0, 16, "早                                        早");
	SCREEN->ScreenPrint(0, 17, "早      棻衛 ж衛啊蝗棲梱? ( y/n )        早");
	SCREEN->ScreenPrint(0, 18, "早                                        早");
	SCREEN->ScreenPrint(0, 19, "早                                        早");
	SCREEN->ScreenPrint(0, 20, "早                                        早");
	SCREEN->ScreenPrint(0, 21, "早                                        早");
	SCREEN->ScreenPrint(0, 22, "早                                        早");
	SCREEN->ScreenPrint(0, 23, "曲收收收收收收收收收收收收收收收收收收收收旭");
}

// Note: 褒ぬ ц擊 唳辦縑 轎溘腎賊憮 棻衛 й匙檣雖蒂 僖朝 �飛橉抴�.

void Print::ResultScreen()
{
	SCREEN->ScreenPrint(0,  0, "旨收收收收收收收收收收收收收收收收收收收收旬");
	SCREEN->ScreenPrint(0,  1, "早                                        早");
	SCREEN->ScreenPrint(0,  2, "早                                        早");
	SCREEN->ScreenPrint(0,  3, "早                                        早");
	SCREEN->ScreenPrint(0,  4, "早                                        早");
	SCREEN->ScreenPrint(0,  5, "早                                        早");
	SCREEN->ScreenPrint(0,  6, "早                                        早");
	SCREEN->ScreenPrint(0,  7, "早  (((    舒渦雖 濩晦 啪歜 Score  ))))   早");
	SCREEN->ScreenPrint(0,  8, "早                                        早");
	SCREEN->ScreenPrint(0,  9, "早                                        早");
	SCREEN->ScreenPrint(0, 10, "早                                        早");
	SCREEN->ScreenPrint(0, 11, "早           識 薄熱  :                   早");
	SCREEN->ScreenPrint(0, 12, "早                                        早");
	SCREEN->ScreenPrint(0, 13, "早                                        早");
	SCREEN->ScreenPrint(0, 14, "早                                        早");
	SCREEN->ScreenPrint(0, 15, "早                                        早");
	SCREEN->ScreenPrint(0, 16, "早                                        早");
	SCREEN->ScreenPrint(0, 17, "早                                        早");
	SCREEN->ScreenPrint(0, 18, "早                                        早");
	SCREEN->ScreenPrint(0, 19, "早                                        早");
	SCREEN->ScreenPrint(0, 20, "早                                        早");
	SCREEN->ScreenPrint(0, 21, "早                                        早");
	SCREEN->ScreenPrint(0, 22, "早                                        早");
	SCREEN->ScreenPrint(0, 23, "曲收收收收收收收收收收收收收收收收收收收收旭");
}

void Print::fInitScreen()
{

	SCREEN->ScreenPrint(0,  0, "旨收收收收收收收收收收收收收收收收收收收收收旬");
	SCREEN->ScreenPrint(0,  1, "早                                          早");
	SCREEN->ScreenPrint(0,  2, "早             ﹤收收收﹤                   早");
	SCREEN->ScreenPrint(0,  3, "早                                          早");
	SCREEN->ScreenPrint(0,  4, "早                        ///.   螂~~~      早");
	SCREEN->ScreenPrint(0,  5, "早                       (^.^)              早");
	SCREEN->ScreenPrint(0,  6, "早                      曲朽 曳旬           早");
	SCREEN->ScreenPrint(0,  7, "早                         旨旭             早");
	SCREEN->ScreenPrint(0,  8, "早                     Ⅸ  旭′             早");
	SCREEN->ScreenPrint(0,  9, "早                                          早");
	SCREEN->ScreenPrint(0, 10, "早                                          早");
	SCREEN->ScreenPrint(0, 11, "早       螂 埤檣 啪歜  Go! Go!              早");
	SCREEN->ScreenPrint(0, 12, "早                                          早");
	SCREEN->ScreenPrint(0, 13, "早                                          早");
	SCREEN->ScreenPrint(0, 14, "早       j :豭薹 l : 螃艇薹 k :螂           早");
	SCREEN->ScreenPrint(0, 15, "早                                          早");
	SCREEN->ScreenPrint(0, 16, "早                                          早");
	SCREEN->ScreenPrint(0, 17, "早                                          早");
	SCREEN->ScreenPrint(0, 18, "早        曲≒旭  space 酈蒂 揚楝輿撮蹂     早");
	SCREEN->ScreenPrint(0, 19, "早                                          早");
	SCREEN->ScreenPrint(0, 20, "早                                          早");
	SCREEN->ScreenPrint(0, 21, "早                                          早");
	SCREEN->ScreenPrint(0, 22, "曲收收收收收收收收收收收收收收收收收收收收收旭");
}
void Print::fBackScreen()
{
	char string[100];

	SCREEN->ScreenPrint(0,  0, "旨收收收收收收收收收收收收收收收收收收收收收旬");
	SCREEN->ScreenPrint(0,  1, "早                                          早");
	SCREEN->ScreenPrint(0,  2, "早                                          早");
	SCREEN->ScreenPrint(0,  3, "早                                          早");
	sprintf_s		  (string, "早                                          早蝶纔檜雖: %d", SYSTEM->Get_Instance(0) + 1);						SCREEN->ScreenPrint(0, 4, string);
	SCREEN->ScreenPrint(0,  5, "早                                          早");
	sprintf_s		  (string, "曳收收收收收收收收收收收收收收收收收收收收收朽薯и 衛除: %d", SYSTEM->Get_Instance(1) / 1000);					SCREEN->ScreenPrint(0, 6, string);
	SCREEN->ScreenPrint(0,  7, "早                                          早");
	sprintf_s		  (string, "早                                          早⑷營 衛除: %d", (clock() - SYSTEM->Get_Instance(2)) / 1000 );		SCREEN->ScreenPrint(0, 8, string);
	SCREEN->ScreenPrint(0,  9, "早                                          早");
	sprintf_s		  (string, "早                                          早跡ル 埤檣: %d ", SYSTEM->Get_Instance(3));						SCREEN->ScreenPrint(0, 10, string);
	SCREEN->ScreenPrint(0, 11, "早                                          早");
	sprintf_s		  (string, "早                                          早埤檣 奢 偃熱: %d ", SYSTEM->Get_Instance(4));						SCREEN->ScreenPrint(0, 12, string);
	SCREEN->ScreenPrint(0, 13, "早                                          早");
	sprintf_s		  (string, "早                                          早");																SCREEN->ScreenPrint(0, 14, string);
	SCREEN->ScreenPrint(0, 15, "早                                          早");
	sprintf_s		  (string, "早                                          早");																SCREEN->ScreenPrint(0, 16, string);
	SCREEN->ScreenPrint(0, 17, "早                                          早");
	SCREEN->ScreenPrint(0, 18, "早                                          早");
	SCREEN->ScreenPrint(0, 19, "早                                          早");
	SCREEN->ScreenPrint(0, 20, "早                                          早");
	SCREEN->ScreenPrint(0, 21, "早                                          早");
	SCREEN->ScreenPrint(0, 22, "早                                          早");
	SCREEN->ScreenPrint(0, 23, "曲收收收收收收收收收收收收收收收收收收收收收旭");
}

void Print::fReadyScreen()
{
	char string[100];

	SCREEN->ScreenPrint(0,  0, "旨收收收收收收收收收收收收收收收收收收收收收旬");
	SCREEN->ScreenPrint(0,  1, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0,  2, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0,  3, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0,  4, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0,  5, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0,  6, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0,  7, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0,  8, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0,  9, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 10, "早﹥﹥﹥﹥﹥                    ﹥﹥﹥﹥﹥﹥早");
	sprintf_s		  (string, "早﹥﹥﹥﹥﹥     %d   蝶纔檜雖   ﹥﹥﹥﹥﹥﹥早", SYSTEM->Get_Instance(0) + 1);
	SCREEN->ScreenPrint(0, 11, string);
	SCREEN->ScreenPrint(0, 12, "早﹥﹥﹥﹥﹥                    ﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 13, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 14, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 15, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 16, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 17, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 18, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 19, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 20, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 21, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 22, "早﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥早");
	SCREEN->ScreenPrint(0, 23, "曲收收收收收收收收收收收收收收收收收收收收收旭");

}

void Print::fGoalMessage(int nX, int nY)
{
	SCREEN->ScreenPrint(nX, nY, "≧ )) 埤檣 (( ≠");
	SCREEN->ScreenPrint(nX, nY + 1, "′(^^')/ ′(\"*')/");
	SCREEN->ScreenPrint(nX, nY + 2, "   ﹥       ﹥");
	SCREEN->ScreenPrint(nX, nY + 3, "  戎忖    忙戌");
}

void Print::fSuccessScreen()
{
	SCREEN->ScreenPrint(0, 0, "旨收收收收收收收收收收收收收收收收收收收收收旬");
	SCREEN->ScreenPrint(0, 1, "早                                          早");
	SCREEN->ScreenPrint(0, 2, "早                                          早");
	SCREEN->ScreenPrint(0, 3, "早                                          早");
	SCREEN->ScreenPrint(0, 4, "早                                          早");
	SCREEN->ScreenPrint(0, 5, "早                                          早");
	SCREEN->ScreenPrint(0, 6, "早                ////′′                  早");
	SCREEN->ScreenPrint(0, 7, "早               q ∥  ∥ p                 早");
	SCREEN->ScreenPrint(0, 8, "早               (戌式式戎)                 早");
	SCREEN->ScreenPrint(0, 9, "早             Ｏ 嘐暮 撩奢 Ｎ              早");
	SCREEN->ScreenPrint(0, 10, "早                                          早");
	SCREEN->ScreenPrint(0, 11, "早                                          早");
	SCREEN->ScreenPrint(0, 12, "早                                          早");
	SCREEN->ScreenPrint(0, 13, "早                                          早");
	SCREEN->ScreenPrint(0, 14, "早                                          早");
	SCREEN->ScreenPrint(0, 15, "早                                          早");
	SCREEN->ScreenPrint(0, 16, "早                                          早");
	SCREEN->ScreenPrint(0, 17, "早                                          早");
	SCREEN->ScreenPrint(0, 18, "早                                          早");
	SCREEN->ScreenPrint(0, 19, "早                                          早");
	SCREEN->ScreenPrint(0, 20, "早                                          早");
	SCREEN->ScreenPrint(0, 21, "早                                          早");
	SCREEN->ScreenPrint(0, 22, "早                                          早");
	SCREEN->ScreenPrint(0, 23, "曲收收收收收收收收收收收收收收收收收收收收收旭");
}

void Print::fFailureScreen()
{
	SCREEN->ScreenPrint(0, 0, "旨收收收收收收收收收收收收收收收收收收收收收旬");
	SCREEN->ScreenPrint(0, 1, "早                                          早");
	SCREEN->ScreenPrint(0, 2, "早                                          早");
	SCREEN->ScreenPrint(0, 3, "早                                          早");
	SCREEN->ScreenPrint(0, 4, "早                                          早");
	SCREEN->ScreenPrint(0, 5, "早                                          早");
	SCREEN->ScreenPrint(0, 6, "早                                          早");
	SCREEN->ScreenPrint(0, 7, "早                                          早");
	SCREEN->ScreenPrint(0, 8, "早                                          早");
	SCREEN->ScreenPrint(0, 9, "早                                          早");
	SCREEN->ScreenPrint(0, 10, "早                                          早");
	SCREEN->ScreenPrint(0, 11, "早                    嘐暮 褒ぬ !!!!        早");
	SCREEN->ScreenPrint(0, 12, "早                                          早");
	SCREEN->ScreenPrint(0, 13, "早                                          早");
	SCREEN->ScreenPrint(0, 14, "早                 ≒有收旬                 早");
	SCREEN->ScreenPrint(0, 15, "早                   旭  曲                 早");
	SCREEN->ScreenPrint(0, 16, "早                  ﹥﹥﹥﹥                早");
	SCREEN->ScreenPrint(0, 17, "早                                          早");
	SCREEN->ScreenPrint(0, 18, "早        棻衛 ж衛啊蝗棲梱? (y/n)          早");
	SCREEN->ScreenPrint(0, 19, "早                                          早");
	SCREEN->ScreenPrint(0, 20, "早                                          早");
	SCREEN->ScreenPrint(0, 21, "早                                          早");
	SCREEN->ScreenPrint(0, 22, "曲收收收收收收收收收收收收收收收收收收收收收旭");
}


void Print::fResultScreen()
{
	char string[100];
	SCREEN->ScreenPrint(0, 0, "旨收收收收收收收收收收收收收收收收收收收收收旬");
	SCREEN->ScreenPrint(0, 1, "早                                          早");
	SCREEN->ScreenPrint(0, 2, "早                                          早");
	SCREEN->ScreenPrint(0, 3, "早             ﹤收收收﹤                   早");
	SCREEN->ScreenPrint(0, 4, "早                                          早");
	SCREEN->ScreenPrint(0, 5, "早                                          早");
	SCREEN->ScreenPrint(0, 6, "早                                          早");
	SCREEN->ScreenPrint(0, 7, "早                                          早");
	sprintf_s(string, "早      撩奢и 蝶纔檜雖 :  %2d               早", SYSTEM->Get_Instance(0) + 1);
	SCREEN->ScreenPrint(0, 8, string);
	SCREEN->ScreenPrint(0, 9, "早                                          早");
	SCREEN->ScreenPrint(0, 10, "早                                          早");
	SCREEN->ScreenPrint(0, 11, "早   ___〤〤〤___                           早");
	SCREEN->ScreenPrint(0, 12, "早     (*^  ^*)                             早");
	SCREEN->ScreenPrint(0, 13, "早 =====∞==∞=====                         早");
	SCREEN->ScreenPrint(0, 14, "早                                          早");
	SCREEN->ScreenPrint(0, 15, "早                                          早");
	SCREEN->ScreenPrint(0, 16, "早                                          早");
	SCREEN->ScreenPrint(0, 17, "早                                          早");
	SCREEN->ScreenPrint(0, 18, "早                      曲≒旭              早");
	SCREEN->ScreenPrint(0, 19, "早                                          早");
	SCREEN->ScreenPrint(0, 20, "早                                          早");
	SCREEN->ScreenPrint(0, 21, "早                                          早");
	SCREEN->ScreenPrint(0, 22, "曲收收收收收收收收收收收收收收收收收收收收收旭");
}