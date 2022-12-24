#include <QApplication>
#include <QFontDatabase>
#include <QLabel>
#include <QtCore>
#include <qfontdatabase.h>

// Credits:
// https://blog.lilydjwg.me/2022/3/8/qt-font-issues.216133.html
// https://forum.suse.org.cn/t/topic/15181/2

constexpr auto TestText = R"(
格拉哥里字母：Ⰽⱁⱀⱄⱅⰰⱀⱅⰹⱀ Ⰹⱍⰹⰳⱁⰲ
爪哇文：꧁ / ꧂
西夏文：𗷲𗒅
埃及象形文字：𓁹
苏美尔楔形文字：𒆠𒂗𒂠
中日韩统一表意文字扩展 C: 𫚥
拉让文：ꥃ
越南傣文：ꪀꪑ
切罗基文：ꮳꮧꮢ ᨣ
老傣仂文：ᨣ
安纳托利亚象形文字：𔘓
马姆穆文补充：𖤍𖠰𖠱𖠲𖠳𖠴𖠵𖠶𖠷𖠸𖠹𖠺𖠻𖠼𖠽𖠾𖠿
图标字体(PUA):  ✓ 
巴塔克文：ᯤ
古北欧文：ᛋᛖᚱᚣᚨᛚᚳᚨᚾᛞᛚᛖ
其它符号：⛧
补充的数学运算符：⨶
补充符号和象形文字：🥹😁🤑🤗🤭🫠
科普特文：Ϝⲓⲟⲕⲟ Ⳑⲩ
关复门
)";

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QLabel *label = new QLabel(TestText);
    label->show();
    auto f = label->font();
    f.setPointSize(20);
    label->setFont(f);
    label->setMinimumSize(800, 600);
    return a.exec();
}
