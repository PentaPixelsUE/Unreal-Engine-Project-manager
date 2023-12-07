#ifndef PROJECTSTRUCTURE_H
#define PROJECTSTRUCTURE_H

#include "qdir.h"
#include <QStandardItemModel>
class projectstructure
{
public:
QStandardItemModel* currentProjectModel;
    static projectstructure& getInstance() {
        static projectstructure instance;
        return instance;
    }

    void DisplayFolders(const QDir &folder, QStandardItemModel *model, QStandardItem *parentItem);
    void ShooterStructure(QStandardItemModel* model);
    void TopDownStructure(QStandardItemModel* model);
    void VirtualProdStructure(QStandardItemModel* model);
    void OpenWorldStructure(QStandardItemModel* model);
    void SideScrollerStructure(QStandardItemModel* model);
    void ArchVizStructure(QStandardItemModel* model);
    void AnimationStructure(QStandardItemModel* model);
    void MobileTabletStructure(QStandardItemModel* model);
    void ARVRStructure(QStandardItemModel* model);
    void  cloneTreeStructure(QStandardItem* sourceItem, QStandardItem* targetItem);
    void createMissingFolders(const QDir& diskFolder, QStandardItem* treeItem);
private:
    projectstructure();
    ~projectstructure();
    projectstructure(const projectstructure&) = delete;
    projectstructure& operator=(const projectstructure&) = delete;
};

#endif // PROJECTSTRUCTURE_H
