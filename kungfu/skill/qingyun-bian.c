#include <ansi.h> 
 
inherit SHAOLIN_SKILL; 

mapping *action = ({ 
<<<<<<< HEAD
([      "action":"$N一招"HIR" 聚火 "NOR",手扬鞭起，手中$w将$n团团围住，内力一吐，鞭圈匀速缩小。", 
        "force":        (int)this_player()->query("max_neili")/4, 
        "dodge":        -10, 
        "damage":       (int)this_player()->query("shen")/1500, 
        "skill_name" : "聚火", 
        "damage_type":  "内伤" 
]), 
([      "action":"$N左手虚幻，右手$w一招"HIC" 起光 "NOR",手中$w由似一条青龙迅速击向$n。", 
        "force":        (int)this_player()->query("max_neili")/4, 
        "dodge":        5, 
        "damage":       (int)this_player()->query("shen")/1500, 
        "skill_name" : "起光", 
        "damage_type":  "刺伤" 
]), 
([      "action":"$N腾空而起，手中$w舞成圆环，一招"HIB" 招雨 "NOR"压向$n,令$n无处可躲。", 
        "force":        (int)this_player()->query("max_neili")/4, 
        "dodge":        10, 
        "damage":       (int)this_player()->query("shen")/1500, 
        "skill_name" : "招雨", 
        "damage_type":  "内伤" 
]), 
([      "action":"$N力贯鞭梢，一招"HIR" 动雷 "NOR"，手中$w舞出满天鞭影，排山倒海般扫向$n全身", 
        "force":        (int)this_player()->query("max_neili")/4, 
        "dodge":        -5, 
        "damage":       (int)this_player()->query("shen")/1500, 
        "skill_name" : "动雷", 
        "damage_type":  "淤伤" 
]), 
([      "action":"$N往前一纵, 但见$N身形一转，一招"HIC" 移电 "NOR"，手中$w如鬼魅一般，神不知鬼不觉地袭向$n的$l！", 
        "force":        (int)this_player()->query("max_neili")/4, 
        "dodge":        -10, 
        "damage":       (int)this_player()->query("shen")/1500, 
        "skill_name" : "移电", 
        "damage_type":  "刺伤" 
]), 
([      "action":"$N手持$w,力贯鞭稍，一招"HIR" 剪虹 "NOR"手中$w犹如彩虹般击向$n,已将$n笼罩于鞭下。", 
        "force":        (int)this_player()->query("max_neili")/4, 
        "dodge":        -20, 
        "damage":       (int)this_player()->query("shen")/1500, 
        "skill_name":  "剪虹", 
]), 
([      "action":"$N左手虚晃，右脚突然向前迈出，一招"CYN" 止风 "NOR"，右手$w如同鬼魅一般无声无息的刺向$n!", 
        "force":        (int)this_player()->query("max_neili")/4, 
        "dodge":        0, 
        "damage":       (int)this_player()->query("shen")/1500, 
        "skill_name" : "止风", 
        "damage_type":  "刺伤" 
]), 
([      "action":"$N向前纵出，身体飞过$n头顶，一招"HIW" 断云 "NOR"手中$w击向$n的$l", 
        "force":        (int)this_player()->query("max_neili")/4, 
        "dodge":        100, 
        "damage":       (int)this_player()->query("shen")/1500, 
        "skill_name" : "断云", 
        "damage_type":  "内伤" 
]), 
([      "action":"$N手中$w晃出满天鞭影，一招"HIB" 遮月 "NOR"虚虚实实的鞭影，铺天盖地的击向$n", 
        "force":        (int)this_player()->query("max_neili")/4, 
        "dodge":        50, 
        "damage":       (int)this_player()->query("shen")/1500, 
        "skill_name" : "遮月", 
        "damage_type":  "淤伤" 
]), 
([      "action":"$N一招"YEL" 掩日 "NOR"手中$w形似蛟龙又似飞蝗,密不透风的罩向$n！", 
        "force":        (int)this_player()->query("max_neili")/4, 
        "dodge":        40, 
        "damage":       (int)this_player()->query("shen")/1500, 
        "skill_name" : "掩日", 
        "damage_type":  "淤伤" 
=======
([      "action":"$N涓�鎷�"HIR" 鑱氱伀 "NOR",鎵嬫壃闉捣锛屾墜涓�$w灏�$n鍥㈠洟鍥翠綇锛屽唴鍔涗竴鍚愶紝闉湀鍖�閫熺缉灏忋��", 
        "force":        (int)this_player()->query("max_neili")/4, 
        "dodge":        -10, 
        "damage":       (int)this_player()->query("shen")/1500, 
        "skill_name" : "鑱氱伀", 
        "damage_type":  "鍐呬激" 
]), 
([      "action":"$N宸︽墜铏氬够锛屽彸鎵�$w涓�鎷�"HIC" 璧峰厜 "NOR",鎵嬩腑$w鐢变技涓�鏉￠潚榫欒繀閫熷嚮鍚�$n銆�", 
        "force":        (int)this_player()->query("max_neili")/4, 
        "dodge":        5, 
        "damage":       (int)this_player()->query("shen")/1500, 
        "skill_name" : "璧峰厜", 
        "damage_type":  "鍒轰激" 
]), 
([      "action":"$N鑵剧┖鑰岃捣锛屾墜涓�$w鑸炴垚鍦嗙幆锛屼竴鎷�"HIB" 鎷涢洦 "NOR"鍘嬪悜$n,浠�$n鏃犲鍙翰銆�", 
        "force":        (int)this_player()->query("max_neili")/4, 
        "dodge":        10, 
        "damage":       (int)this_player()->query("shen")/1500, 
        "skill_name" : "鎷涢洦", 
        "damage_type":  "鍐呬激" 
]), 
([      "action":"$N鍔涜疮闉ⅱ锛屼竴鎷�"HIR" 鍔ㄩ浄 "NOR"锛屾墜涓�$w鑸炲嚭婊″ぉ闉奖锛屾帓灞卞�掓捣鑸壂鍚�$n鍏ㄨ韩", 
        "force":        (int)this_player()->query("max_neili")/4, 
        "dodge":        -5, 
        "damage":       (int)this_player()->query("shen")/1500, 
        "skill_name" : "鍔ㄩ浄", 
        "damage_type":  "娣や激" 
]), 
([      "action":"$N寰�鍓嶄竴绾�, 浣嗚$N韬舰涓�杞紝涓�鎷�"HIC" 绉荤數 "NOR"锛屾墜涓�$w濡傞榄呬竴鑸紝绁炰笉鐭ラ涓嶈鍦拌鍚�$n鐨�$l锛�", 
        "force":        (int)this_player()->query("max_neili")/4, 
        "dodge":        -10, 
        "damage":       (int)this_player()->query("shen")/1500, 
        "skill_name" : "绉荤數", 
        "damage_type":  "鍒轰激" 
]), 
([      "action":"$N鎵嬫寔$w,鍔涜疮闉◢锛屼竴鎷�"HIR" 鍓櫣 "NOR"鎵嬩腑$w鐘瑰褰╄櫣鑸嚮鍚�$n,宸插皢$n绗肩僵浜庨灜涓嬨��", 
        "force":        (int)this_player()->query("max_neili")/4, 
        "dodge":        -20, 
        "damage":       (int)this_player()->query("shen")/1500, 
        "skill_name":  "鍓櫣", 
]), 
([      "action":"$N宸︽墜铏氭檭锛屽彸鑴氱獊鐒跺悜鍓嶈繄鍑猴紝涓�鎷�"CYN" 姝㈤ "NOR"锛屽彸鎵�$w濡傚悓楝奸瓍涓�鑸棤澹版棤鎭殑鍒哄悜$n!", 
        "force":        (int)this_player()->query("max_neili")/4, 
        "dodge":        0, 
        "damage":       (int)this_player()->query("shen")/1500, 
        "skill_name" : "姝㈤", 
        "damage_type":  "鍒轰激" 
]), 
([      "action":"$N鍚戝墠绾靛嚭锛岃韩浣撻杩�$n澶撮《锛屼竴鎷�"HIW" 鏂簯 "NOR"鎵嬩腑$w鍑诲悜$n鐨�$l", 
        "force":        (int)this_player()->query("max_neili")/4, 
        "dodge":        100, 
        "damage":       (int)this_player()->query("shen")/1500, 
        "skill_name" : "鏂簯", 
        "damage_type":  "鍐呬激" 
]), 
([      "action":"$N鎵嬩腑$w鏅冨嚭婊″ぉ闉奖锛屼竴鎷�"HIB" 閬湀 "NOR"铏氳櫄瀹炲疄鐨勯灜褰憋紝閾哄ぉ鐩栧湴鐨勫嚮鍚�$n", 
        "force":        (int)this_player()->query("max_neili")/4, 
        "dodge":        50, 
        "damage":       (int)this_player()->query("shen")/1500, 
        "skill_name" : "閬湀", 
        "damage_type":  "娣や激" 
]), 
([      "action":"$N涓�鎷�"YEL" 鎺╂棩 "NOR"鎵嬩腑$w褰技铔熼緳鍙堜技椋炶潡,瀵嗕笉閫忛鐨勭僵鍚�$n锛�", 
        "force":        (int)this_player()->query("max_neili")/4, 
        "dodge":        40, 
        "damage":       (int)this_player()->query("shen")/1500, 
        "skill_name" : "鎺╂棩", 
        "damage_type":  "娣や激" 
>>>>>>> 12f807c31d53cdb29bd289c27c5268e826337935
]), 
}); 
     
int valid_enable(string usage) { return (usage == "whip") || (usage == "parry"); } 
         
int valid_learn(object me) 
{ 
        object weapon; 
        int lvl = (int)me->query_skill("qingyun-bian", 1); 
        int t = 1, j; 
        if( (int)me->query("max_neili") < 500 ) 
                return notify_fail("浣犵殑鍐呭姏涓嶈冻锛屾病鏈夊姙娉曠粌闈掍簯闉硶, 澶氱粌浜涘唴鍔涘啀鏉ュ惂銆俓n"); 
 
        if ((int)me->query_skill("shaolin-xinfa", 1) < 80) 
                return notify_fail("浣犵殑灏戞灄蹇冩硶鐏�欏お娴呫�俓n"); 
         
        if ( !objectp(weapon = me->query_temp("weapon")) 
                || ( string)weapon->query("skill_type") != "whip" ) 
                return notify_fail("浣犲繀椤诲厛鎵句竴鏉￠灜瀛愭墠鑳界粌闉硶銆俓n"); 
        
         if(lvl<=150) 
        { 
                if (lvl > 10 && (int)me->query("shen") < t * 20) 
                        return notify_fail("浣犵殑姝ｆ皵澶綆浜嗐�俓n"); 
        } 
        else 
        { 
                if ((int)me->query("shen") < (11100 + (lvl - 100) * 1000))  
                        return notify_fail("浣犵殑姝ｆ皵澶綆浜嗐�俓n"); 
        } 
        return 1; 
} 
         
string query_skill_name(int level) 
{ 
        int i; 
        for(i = sizeof(action)-1; i >= 0; i--) 
                if(level >= action[i]["lvl"]) 
                        return action[i]["skill_name"]; 
} 
         
mapping query_action(object me, object weapon) 
{ 
        int i, level; 
        level   = (int) me->query_skill("qingyun-bian", 1); 
        for(i = sizeof(action); i > 0; i--) 
                if(level > action[i-1]["lvl"]) 
                        return action[NewRandom(i, 20, level/5)]; 
} 
 
int practice_skill(object me) 
{ 
        object weapon; 
         
        if (!objectp(weapon = me->query_temp("weapon")) 
                || (string)weapon->query("skill_type") != "whip") 
                return notify_fail("浣犱娇鐢ㄧ殑姝﹀櫒涓嶅銆俓n"); 
        if ((int)me->query("qi") < 50) 
                return notify_fail("浣犵殑浣撳姏涓嶅缁冮潚浜戦灜娉曘�俓n"); 
        me->receive_damage("qi", 30); 
        return 1; 
} 
         
string perform_action_file(string action) 
{ 
                return __DIR__"qingyun-bian/" + action; 
} 
