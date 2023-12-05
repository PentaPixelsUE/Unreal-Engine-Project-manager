#ifndef PROJECTSTRUCTURE_H
#define PROJECTSTRUCTURE_H

#include <QStandardItemModel>
class projectstructure
{
public:
    projectstructure();


    void ShooterStructure(QStandardItemModel* model);
    void TopDownStructure(QStandardItemModel* model);
    void VirtualProdStructure(QStandardItemModel* model);
    void OpenWorldStructure(QStandardItemModel* model);
    void SideScrollerStructure(QStandardItemModel* model);
    void ArchVizStructure(QStandardItemModel* model);
    void AnimationStructure(QStandardItemModel* model);
    void MobileTabletStructure(QStandardItemModel* model);
    void ARVRStructure(QStandardItemModel* model);

};

#endif // PROJECTSTRUCTURE_H
