// map.c 峨嵋地图
#include <ansi.h>

inherit ITEM;

void create()
{
        set_name( HIC "『峨嵋旅游图』" NOR, ({ "luyou tu","tu","map"}) );
        set_weight(10);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "张");
                set("long",
"\n                 『峨嵋旅游图』\n\n"
"　　　【地图一】　　　　　　　　　＾　　　＜　ｕｐ\n"
" 　　　　　　　　　　　　　　　　北\n"
"\n"
"　　　白　　　　　　　　　　　　　　　　　　　　　　　 　======\n"
"　　　龙　　　　　　　　　　　　　　　　　　　　　　　 　==保==　山\n"
"　　　洞＼清　　　　　　　　　　　　　　　　　　　　　 　==国==<--\n"
"　　　　　音　　　　　　　　　　　　　　　++++++++++++ ／==寺==　门\n"
"　　　　／阁＼中　神　纯　归　观　解　密++ 伏 ++密　======\n"
"　黑龙江　　　峰--水--阳--云--音--脱-- <--虎--\n"
"　栈道　　　　寺　阁　殿　阁　堂　坡　林++ 寺 ++林\n"
"　　　　 　　　　 ｜　　　　｜　　　　　 ++++++++++++++\n"
"　　　　 　　　　 福 灵 　　玉\n"
"　　　　 　　　　 寿 文 　　女\n"
"　　　　 　　　　 庵 阁 　　峰\n"
"\n"
"\n"
"　　　【地图二】　\n"
"\n"
"                  　　　　　　　　　　　　　　　　十二盘<-万年庵==\n"
"　　　　　　　　　　　　　　　　　　　　　　　　　／　　　========\n"
"　　　　　＾　　　　　　　　　　　　　　　　　　／　　　　　＾\n"
"　　　　　北　　　　　　　　　　　　　　　　　／　　　古++++｜++++\n"
"　　　　　　　　　　　　　　　　十二盘--十二盘　　　　德++白龙洞\n"
"　　　　　　　　　　　　　　　／　　　　　　　　　　　林++++++++＼\n"
"　　　　　　　　　　　　　　／　　　　　　　　　　　　　　　　　　清音阁\n"
"　****<---华严顶<---十二盘　　　　　　　　　　　　　　　　　　　　／\n"
"　**莲**　　　　　　　　　　　　　　　　　　　　　　　　　黑龙江栈道\n"
"　**　**　　　　　　　　　　　　　　　　　　　　　　　　　　　｜\n"
"　**花**　　　　　　　 　　　　　　　　　　　 　　==========\n"
"　**　**　　　　　　　　　　　　　　　　　　　　　　　　　==千佛庵==\n"
"　**石**　　　　　　　　　　　　　　九十九道拐<-九十九道拐　========\n"
"　　　＼　　　九十九道拐<-九十九道拐\n"
"　　　　＼　　／\n"
"　　　||九老洞口||\n"
"　　　||||||||||||\n"
"\n"
"\n"
"\n"
"\n"
"　　　　　　　　　　　　　　　~~洗象池<-坡道<-坡道<-**莲花石**\n"
"　　　【地图三】　　　　　　　~~~~~~~~　　　　　　　**********\n"
"　　　　　　　　　　　　　　　　　｜　　　　　　　　　　　　　＼||||||||||\n"
"　　　　　　　　　　　　　　　　凌云梯　　　　　　　　　　　　　||九老洞||\n"
"　　　　　＾　　　　　　　　　　　｜　　　++　　　　　　　　　　||||||||||\n"
"　　　　　北　　　　　　　　　　雷洞坪　++++++\n"
"　　　　　　　　　　　　　　　　　｜　　++++++++\n"
"　　　　　　　　　　　　　　　　八十四盘++　冷++++\n"
"　　　　　　　　　　　　　　　／　++++++++　　++++\n"
"　　　　　　　　　　　　八十四盘　++++++++杉　++++\n"
"　　　　　　　　　　　　　｜　　++++++++　　　++++\n"
"　　　　　　　　　　　　　ˇ　　++++++++林　++++\n"
"　　　　　　　　　　　　　　　八十四盘　++++++++++++++\n"
"　　　　　　　　　　　　　　＼　++++++++++++\n"
"　　　　　　　　　==========　＼\n"
"　　　　　　　　　==万行庵==<-接引殿\n"
"　　　　　　　　　==========\n"
"　　　　　　　　　　　｜\n"
"　　　　　　　　　　　ˇ\n"
"　　　　　 　　　金顶\n"
"　　　　　　　　　　／\n"
"　　　　　==========　｜\n"
"　　　　　==卧云庵==　｜\n"
"　　　　　========　==========\n"
"　　　　　　　｜　　==华藏庵==\n"
"　　　　　　　｜　　==========\n"
"　　　　　　　｜　　　　｜\n"
"　　　　　　~~~~~~~~~~~~~~~~~~\n"
"　　　　　　~~　　　　　　　~~\n"
"　　　　　　~~　睹　光　台　~~\n"
"　　　　　　~~　　　　　　　~~\n"
"　　　　　　~~~~~~~~~~~~~~~~~~\n");
                set("value", 50);
                set("material", "paper");
        }
        setup();
}
