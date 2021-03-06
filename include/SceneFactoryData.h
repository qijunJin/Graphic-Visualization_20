#ifndef SCENEFACTORYSTATIC_H
#define SCENEFACTORYSTATIC_H

#include "SceneFactory.h"
#include "ColorMapStatic.h"
#include "DataReader.h"

class SceneFactoryData : public SceneFactory
{
public:
    SceneFactoryData();
    virtual Scene    *createScene(QString nomFitxer);
    virtual ColorMap *createColorMap(ColorMapStatic::ColorMapType t);
    virtual Camera   *createCamera();
};

#endif // SCENEFACTORYSTATIC_H
