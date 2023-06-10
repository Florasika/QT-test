#include <QApplication>
#include <QPushButton>
int main(int argc, char *argv[])
{
QApplication app(argc, argv);
QPushButton bouton("Salut les Zéros, la forme ?");
bouton.setGeometry(50,30,500,175);
QFont pol("Courrier",20);
bouton.setFont(pol);
bouton.show();
return app.exec();
}
