#ifndef RESOURCEMAINWINDOW_H
#define RESOURCEMAINWINDOW_H

#include <QMainWindow>

class ResourceMainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    ResourceMainWindow(QWidget *parent = 0);
    ~ResourceMainWindow();

private:
    QAction *newSvnAction;
    QAction *newGitAction;
    QAction *newFtpAction;

    QAction *updateIndexAction;
    QAction *commitAction;

    QAction *checkLinkAction;
    QAction *exitAction;

    QToolBar *newToolBar;
    QToolBar *optionToolBar;

    void createActions();
    QAction *createAction(const QString &name, const QString &icon,
                          const QString &tip);
    void createToolBars();

private slots:
    void newSvn();
    void newGit();
    void newFtp();

    void updateIndex();
    void commit();

    void checkLink();
};

#endif // RESOURCEMAINWINDOW_H
