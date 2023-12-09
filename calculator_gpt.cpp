#include <QApplication>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QWidget>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("Calculator");

    // Create widgets
    QLineEdit *display = new QLineEdit(&window);
    display->setReadOnly(true);
    display->setAlignment(Qt::AlignRight);
    display->setText("0");

    QGridLayout *layout = new QGridLayout;
    window.setLayout(layout);

    const char* buttons[4][4] = {
        {"7", "8", "9", "/"},
        {"4", "5", "6", "*"},
        {"1", "2", "3", "-"},
        {"0", "C", "=", "+"}
    };

    QPushButton *numberButtons[10];
    for (int i = 0; i < 10; ++i) {
        numberButtons[i] = new QPushButton(QString::number(i), &window);
        numberButtons[i]->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    }

    // Add widgets to layout
    layout->addWidget(display, 0, 0, 1, 4);
    for (int i = 1; i < 5; ++i) {
        for (int j = 0; j < 4; ++j) {
            layout->addWidget(new QPushButton(buttons[i - 1][j], &window), i, j);
        }
    }

    // Create a calculator instance (not implemented here)

    // Connect signals and slots
    for (int i = 0; i < 10; ++i) {
        QObject::connect(numberButtons[i], &QPushButton::clicked, /* connect to the calculator here */);
    }

    QObject::connect(display, &QLineEdit::textChanged, /* connect to the calculator here */);

    window.show();

    return app.exec();
}
