#include <QApplication>
#include <./ui_hw2.h>
#include "pageMainWindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    PageMainWindow window(nullptr);
    Ui::MainWindow page;
    page.setupUi(&window);
    window.plainTextEdit = page.plainTextEdit;
    window.webEngineView = page.webEngineView;
    window.resize(1000,600);

    QObject::connect(page.plainTextEdit, &QPlainTextEdit::textChanged, [&page]()
    {
        page.webEngineView->setHtml(page.plainTextEdit->toPlainText());
    });

    window.show();

    return QApplication::exec();
}
