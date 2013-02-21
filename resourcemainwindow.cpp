#include <QtGui>
#include "resourcemainwindow.h"

ResourceMainWindow::ResourceMainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // 初始化动作
    createActions();
    // 初始化Toolbar
    createToolBars();



    setWindowTitle(tr("Resource Commit Management"));
    setWindowIcon(QIcon(":/images/icon.png"));

}

ResourceMainWindow::~ResourceMainWindow()
{
    
}

void ResourceMainWindow::createActions()
{
    newSvnAction = createAction(tr("Create &SVN Disk"),
                                ":/images/new.png",
                                tr("Create SVN Disk"));
    connect(newSvnAction, SIGNAL(triggered()), this,
            SLOT(newSvn()));

    newGitAction = createAction(tr("Create &GIT Disk"),
                                ":/images/new.png",
                                tr("Create GIT Disk"));
    connect(newGitAction, SIGNAL(triggered()), this,
            SLOT(newGit()));

    newFtpAction = createAction(tr("Create &FTP Disk"),
                                ":/images/new.png",
                                tr("Create FTP Disk"));
    connect(newFtpAction, SIGNAL(triggered()), this,
            SLOT(newFtp()));

    updateIndexAction = createAction(tr("Update &Index"),
                                     ":/images/update.png",
                                     tr("Update Index"));
    connect(updateIndexAction, SIGNAL(triggered()), this,
            SLOT(updateIndex()));

    commitAction = createAction(tr("&Commit"),
                                ":/images/commit.png",
                                tr("Commit"));
    connect(commitAction, SIGNAL(triggered()), this,
            SLOT(commit()));

    checkLinkAction = createAction(tr("Check &Link"),
                                   ":/images/check.png",
                                   tr("Check Link"));
    connect(checkLinkAction, SIGNAL(triggered()), this,
            SLOT(checkLink()));

    exitAction = createAction(tr("Exit"),
                              ":/images/exit.png",
                              tr("Exit"));
    connect(exitAction, SIGNAL(triggered()), this,
            SLOT(close()));
}

QAction* ResourceMainWindow::createAction(const QString &name, const QString &icon,
                                        const QString &tip)
{
    QAction *action = new QAction(name, this);
    if(!icon.isNull())
        action->setIcon(QIcon(icon));
    if(!tip.isNull())
        action->setStatusTip(tip);
    return action;
}

void ResourceMainWindow::createToolBars()
{
    newToolBar = addToolBar(tr("New"));
    newToolBar->addAction(newSvnAction);
    newToolBar->addAction(newGitAction);
    newToolBar->addAction(newFtpAction);

    optionToolBar = addToolBar(tr("Option"));
    optionToolBar->addAction(checkLinkAction);
    optionToolBar->addSeparator();
    optionToolBar->addAction(updateIndexAction);
    optionToolBar->addAction(commitAction);
    optionToolBar->addSeparator();
    optionToolBar->addAction(exitAction);
}

void ResourceMainWindow::newSvn()
{

}

void ResourceMainWindow::newGit()
{

}

void ResourceMainWindow::newFtp()
{

}

void ResourceMainWindow::updateIndex()
{

}

void ResourceMainWindow::commit()
{

}

void ResourceMainWindow::checkLink()
{

}
