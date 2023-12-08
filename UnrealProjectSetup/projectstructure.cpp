#include "projectstructure.h"
#include "qdebug.h"

#include <QStandardItem>

projectstructure::projectstructure() {

    currentProjectModel = new QStandardItemModel();
}

projectstructure::~projectstructure() {
    delete currentProjectModel;
}

void projectstructure::ShooterStructure(QStandardItemModel* model)
{
    // Root item
    QStandardItem* rootItem = new QStandardItem("Game");

//    // Game
//    QStandardItem* rootItem = new QStandardItem("Game");
//    rootItem->appendRow(rootItem);

    // Blueprints
    QStandardItem* blueprintsItem = new QStandardItem("Blueprints");
    rootItem->appendRow(blueprintsItem);

    // Characters
    QStandardItem* charactersItem = new QStandardItem("Characters");
    rootItem->appendRow(charactersItem);

    // Environments
    QStandardItem* environmentsItem = new QStandardItem("Environments");
    rootItem->appendRow(environmentsItem);

    // Architecture
    QStandardItem* architectureItem = new QStandardItem("Architecture");
    environmentsItem->appendRow(architectureItem);

    // Props
    QStandardItem* propsItem = new QStandardItem("Props");
    environmentsItem->appendRow(propsItem);

    // Textures
    QStandardItem* texturesItemEnv = new QStandardItem("Textures");
    environmentsItem->appendRow(texturesItemEnv);

    // Lighting
    QStandardItem* lightingItem = new QStandardItem("Lighting");
    environmentsItem->appendRow(lightingItem);

    // UI
    QStandardItem* uiItem = new QStandardItem("UI");
    rootItem->appendRow(uiItem);

    // Weapons
    QStandardItem* weaponsItem = new QStandardItem("Weapons");
    rootItem->appendRow(weaponsItem);

    // Config
    QStandardItem* configItem = new QStandardItem("Config");
    rootItem->appendRow(configItem);

    // Maps
    QStandardItem* mapsItem = new QStandardItem("Maps");
    rootItem->appendRow(mapsItem);

    // Materials
    QStandardItem* materialsItem = new QStandardItem("Materials");
    rootItem->appendRow(materialsItem);

    // Meshes
    QStandardItem* meshesItem = new QStandardItem("Meshes");
    rootItem->appendRow(meshesItem);

    // Characters
    QStandardItem* charactersMeshItem = new QStandardItem("Characters");
    meshesItem->appendRow(charactersMeshItem);

    // Environments
    QStandardItem* environmentsMeshItem = new QStandardItem("Environments");
    meshesItem->appendRow(environmentsMeshItem);

    // Props
    QStandardItem* propsMeshItem = new QStandardItem("Props");
    meshesItem->appendRow(propsMeshItem);

    // Weapons
    QStandardItem* weaponsMeshItem = new QStandardItem("Weapons");
    meshesItem->appendRow(weaponsMeshItem);

    // Particles
    QStandardItem* particlesItem = new QStandardItem("Particles");
    rootItem->appendRow(particlesItem);

    // Sounds
    QStandardItem* soundsItem = new QStandardItem("Sounds");
    rootItem->appendRow(soundsItem);

    // Ambient
    QStandardItem* ambientSoundItem = new QStandardItem("Ambient");
    soundsItem->appendRow(ambientSoundItem);

    // Effects
    QStandardItem* effectsSoundItem = new QStandardItem("Effects");
    soundsItem->appendRow(effectsSoundItem);

    // Music
    QStandardItem* musicSoundItem = new QStandardItem("Music");
    soundsItem->appendRow(musicSoundItem);

    // Voice
    QStandardItem* voiceSoundItem = new QStandardItem("Voice");
    soundsItem->appendRow(voiceSoundItem);

    // Textures
    QStandardItem* texturesItemSounds = new QStandardItem("Textures");
    soundsItem->appendRow(texturesItemSounds);

    // ThirdParty
    QStandardItem* thirdPartyItem = new QStandardItem("ThirdParty");
    rootItem->appendRow(thirdPartyItem);

    // Utilities
    QStandardItem* utilitiesItem = new QStandardItem("Utilities");
    rootItem->appendRow(utilitiesItem);

    // Add the root item to the model
    model->appendRow(rootItem);
}

void projectstructure::TopDownStructure(QStandardItemModel* model)
{
    // Root item
    QStandardItem* rootItem = new QStandardItem("Game");

//    // Game
//    QStandardItem* rootItem = new QStandardItem("Game");
//    rootItem->appendRow(rootItem);

    // Blueprints
    QStandardItem* blueprintsItem = new QStandardItem("Blueprints");
    rootItem->appendRow(blueprintsItem);

    // Characters
    QStandardItem* charactersItem = new QStandardItem("Characters");
    rootItem->appendRow(charactersItem);

    // Environments
    QStandardItem* environmentsItem = new QStandardItem("Environments");
    rootItem->appendRow(environmentsItem);

    // Tiles
    QStandardItem* tilesItem = new QStandardItem("Tiles");
    environmentsItem->appendRow(tilesItem);

    // UI
    QStandardItem* uiItem = new QStandardItem("UI");
    rootItem->appendRow(uiItem);

    // Weapons
    QStandardItem* weaponsItem = new QStandardItem("Weapons");
    rootItem->appendRow(weaponsItem);

    // Maps
    QStandardItem* mapsItem = new QStandardItem("Maps");
    rootItem->appendRow(mapsItem);

    // Materials
    QStandardItem* materialsItem = new QStandardItem("Materials");
    rootItem->appendRow(materialsItem);

    // Meshes
    QStandardItem* meshesItem = new QStandardItem("Meshes");
    rootItem->appendRow(meshesItem);

    // Characters
    QStandardItem* charactersMeshItem = new QStandardItem("Characters");
    meshesItem->appendRow(charactersMeshItem);

    // Environment
    QStandardItem* environmentMeshItem = new QStandardItem("Environment");
    meshesItem->appendRow(environmentMeshItem);

    // Particles
    QStandardItem* particlesItem = new QStandardItem("Particles");
    rootItem->appendRow(particlesItem);

    // Sounds
    QStandardItem* soundsItem = new QStandardItem("Sounds");
    rootItem->appendRow(soundsItem);

    // Ambient
    QStandardItem* ambientSoundItem = new QStandardItem("Ambient");
    soundsItem->appendRow(ambientSoundItem);

    // Effects
    QStandardItem* effectsSoundItem = new QStandardItem("Effects");
    soundsItem->appendRow(effectsSoundItem);
    //Music
    QStandardItem* musicSoundItem = new QStandardItem("Music");
    soundsItem->appendRow(musicSoundItem);

    // Voice
    QStandardItem* voiceSoundItem = new QStandardItem("Voice");
    soundsItem->appendRow(voiceSoundItem);

    // Textures
    QStandardItem* texturesItem = new QStandardItem("Textures");
    rootItem->appendRow(texturesItem);


    // Add the root item to the model
    model->appendRow(rootItem);
}

void projectstructure::VirtualProdStructure(QStandardItemModel* model)
{
    // Root item
    QStandardItem* rootItem = new QStandardItem("Game");

//    // Game
//    QStandardItem* rootItem = new QStandardItem("Game");
//    rootItem->appendRow(rootItem);

    // Blueprints
    QStandardItem* blueprintsItem = new QStandardItem("Blueprints");
    rootItem->appendRow(blueprintsItem);

    // Characters
    QStandardItem* charactersItem = new QStandardItem("Characters");
    rootItem->appendRow(charactersItem);

    // Environments
    QStandardItem* environmentsItem = new QStandardItem("Environments");
    rootItem->appendRow(environmentsItem);

    // Materials
    QStandardItem* materialsItem = new QStandardItem("Materials");
    rootItem->appendRow(materialsItem);

    // Meshes
    QStandardItem* meshesItem = new QStandardItem("Meshes");
    rootItem->appendRow(meshesItem);

    // Particles
    QStandardItem* particlesItem = new QStandardItem("Particles");
    rootItem->appendRow(particlesItem);

    // Sounds
    QStandardItem* soundsItem = new QStandardItem("Sounds");
    rootItem->appendRow(soundsItem);

    // Textures
    QStandardItem* texturesItem = new QStandardItem("Textures");
    rootItem->appendRow(texturesItem);

    // Config
    QStandardItem* configItem = new QStandardItem("Config");
    rootItem->appendRow(configItem);

    // Maps
    QStandardItem* mapsItem = new QStandardItem("Maps");
    rootItem->appendRow(mapsItem);

    // Motion Capture Data
    QStandardItem* mocapItem = new QStandardItem("MotionCapture");
    rootItem->appendRow(mocapItem);

    // Sequencer
    QStandardItem* sequencerItem = new QStandardItem("Sequencer");
    rootItem->appendRow(sequencerItem);

    // Cinematics
    QStandardItem* cinematicsItem = new QStandardItem("Cinematics");
    sequencerItem->appendRow(cinematicsItem);

    // Animations
    QStandardItem* animationsItem = new QStandardItem("Animations");
    sequencerItem->appendRow(animationsItem);

    // Audio
    QStandardItem* audioItem = new QStandardItem("Audio");
    sequencerItem->appendRow(audioItem);

    // Subtitles
    QStandardItem* subtitlesItem = new QStandardItem("Subtitles");
    sequencerItem->appendRow(subtitlesItem);

    // Levels
    QStandardItem* levelsItem = new QStandardItem("Levels");
    sequencerItem->appendRow(levelsItem);

    // Scripts
    QStandardItem* scriptsItem = new QStandardItem("Scripts");
    rootItem->appendRow(scriptsItem);

    // Houdini
    QStandardItem* houdiniItem = new QStandardItem("Houdini");
    rootItem->appendRow(houdiniItem);

    // DigitalAssets
    QStandardItem* digitalAssetsItem = new QStandardItem("DigitalAssets");
    houdiniItem->appendRow(digitalAssetsItem);

    // Procedural
    QStandardItem* proceduralItem = new QStandardItem("Procedural");
    houdiniItem->appendRow(proceduralItem);

    // Simulations
    QStandardItem* simulationsItem = new QStandardItem("Simulations");
    houdiniItem->appendRow(simulationsItem);

    // Add the root item to the model
    model->appendRow(rootItem);
}

void projectstructure::OpenWorldStructure(QStandardItemModel* model)
{
    // Root item
    QStandardItem* rootItem = new QStandardItem("Game");

    // Assets
    QStandardItem* assetsItem = new QStandardItem("Assets");
    rootItem->appendRow(assetsItem);

    // ProjectSpecific
    QStandardItem* projectSpecificItem = new QStandardItem("ProjectSpecific");
    assetsItem->appendRow(projectSpecificItem);

    // Levels
    QStandardItem* levelsItem = new QStandardItem("Levels");
    projectSpecificItem->appendRow(levelsItem);

    // Blueprints
    QStandardItem* blueprintsItem = new QStandardItem("Blueprints");
    projectSpecificItem->appendRow(blueprintsItem);

    // Characters
    QStandardItem* charactersItem = new QStandardItem("Characters");
    projectSpecificItem->appendRow(charactersItem);

    // Environments
    QStandardItem* environmentsItem = new QStandardItem("Environments");
    projectSpecificItem->appendRow(environmentsItem);

    // Materials
    QStandardItem* materialsItem = new QStandardItem("Materials");
    projectSpecificItem->appendRow(materialsItem);

    // Textures
    QStandardItem* texturesItem = new QStandardItem("Textures");
    projectSpecificItem->appendRow(texturesItem);

    // ...

    // Migrated
    QStandardItem* migratedItem = new QStandardItem("Migrated");
    assetsItem->appendRow(migratedItem);

    // Models
    QStandardItem* modelsItem = new QStandardItem("Models");
    migratedItem->appendRow(modelsItem);

    // Textures (Migrated)
    QStandardItem* texturesMigratedItem = new QStandardItem("Textures");
    migratedItem->appendRow(texturesMigratedItem);

    // Materials (Migrated)
    QStandardItem* materialsMigratedItem = new QStandardItem("Materials");
    migratedItem->appendRow(materialsMigratedItem);

    // ...

    // Config
    QStandardItem* configItem = new QStandardItem("Config");
    rootItem->appendRow(configItem);

    // Maps
    QStandardItem* mapsItem = new QStandardItem("Maps");
    rootItem->appendRow(mapsItem);

    // DigitalAssets
    QStandardItem* digitalAssetsItem = new QStandardItem("DigitalAssets");
    rootItem->appendRow(digitalAssetsItem);

    // Houdini
    QStandardItem* houdiniItem = new QStandardItem("Houdini");
    digitalAssetsItem->appendRow(houdiniItem);

    // Procedural
    QStandardItem* proceduralItem = new QStandardItem("Procedural");
    houdiniItem->appendRow(proceduralItem);

    // Simulations
    QStandardItem* simulationsItem = new QStandardItem("Simulations");
    houdiniItem->appendRow(simulationsItem);

    // ...

    // Working
    QStandardItem* workingItem = new QStandardItem("Working");
    rootItem->appendRow(workingItem);

    // Scenes
    QStandardItem* scenesItem = new QStandardItem("Scenes");
    workingItem->appendRow(scenesItem);

    // Sequences
    QStandardItem* sequencesItem = new QStandardItem("Sequences");
    workingItem->appendRow(sequencesItem);

    // Characters (Working)
    QStandardItem* charactersWorkingItem = new QStandardItem("Characters");
    workingItem->appendRow(charactersWorkingItem);

    // Environments (Working)
    QStandardItem* environmentsWorkingItem = new QStandardItem("Environments");
    workingItem->appendRow(environmentsWorkingItem);

    // Props
    QStandardItem* propsItem = new QStandardItem("Props");
    workingItem->appendRow(propsItem);

    // Blueprints (Working)
    QStandardItem* blueprintsWorkingItem = new QStandardItem("Blueprints");
    workingItem->appendRow(blueprintsWorkingItem);

    // Lights
    QStandardItem* lightsItem = new QStandardItem("Lights");
    workingItem->appendRow(lightsItem);

    // PostProcessing
    QStandardItem* postProcessingItem = new QStandardItem("PostProcessing");
    workingItem->appendRow(postProcessingItem);

    // ...

    // Output
    QStandardItem* outputItem = new QStandardItem("Output");
    rootItem->appendRow(outputItem);

    // Renders
    QStandardItem* rendersItem = new QStandardItem("Renders");
    outputItem->appendRow(rendersItem);

//    // Game
//    QStandardItem* rootItem = new QStandardItem("Game");
//    outputItem->appendRow(rootItem);

    // ThirdParty
    QStandardItem* thirdPartyItem = new QStandardItem("ThirdParty");
    rootItem->appendRow(thirdPartyItem);

    // Add the root item to the model
    model->appendRow(rootItem);
}

void projectstructure::SideScrollerStructure(QStandardItemModel* model)
{
    // Root item
    QStandardItem* rootItem = new QStandardItem("Game");

//    // Game
//    QStandardItem* rootItem = new QStandardItem("Game");
//    rootItem->appendRow(rootItem);

    // Blueprints
    QStandardItem* blueprintsItem = new QStandardItem("Blueprints");
    rootItem->appendRow(blueprintsItem);

    // Characters
    QStandardItem* charactersItem = new QStandardItem("Characters");
    rootItem->appendRow(charactersItem);

    // Environments
    QStandardItem* environmentsItem = new QStandardItem("Environments");
    rootItem->appendRow(environmentsItem);

    // Materials
    QStandardItem* materialsItem = new QStandardItem("Materials");
    rootItem->appendRow(materialsItem);

    // Sprites
    QStandardItem* spritesItem = new QStandardItem("Sprites");
    rootItem->appendRow(spritesItem);

    // Animations
    QStandardItem* animationsItem = new QStandardItem("Animations");
    rootItem->appendRow(animationsItem);

    // Sounds
    QStandardItem* soundsItem = new QStandardItem("Sounds");
    rootItem->appendRow(soundsItem);

    // Textures
    QStandardItem* texturesItem = new QStandardItem("Textures");
    rootItem->appendRow(texturesItem);

    // Config
    QStandardItem* configItem = new QStandardItem("Config");
    rootItem->appendRow(configItem);

    // Maps
    QStandardItem* mapsItem = new QStandardItem("Maps");
    rootItem->appendRow(mapsItem);

    // UI
    QStandardItem* uiItem = new QStandardItem("UI");
    rootItem->appendRow(uiItem);

    // Levels
    QStandardItem* levelsItem = new QStandardItem("Levels");
    rootItem->appendRow(levelsItem);

    // Scripts
    QStandardItem* scriptsItem = new QStandardItem("Scripts");
    rootItem->appendRow(scriptsItem);

    // Add the root item to the model
    model->appendRow(rootItem);
}

void projectstructure::ArchVizStructure(QStandardItemModel* model)
{
    // Root item
    QStandardItem* rootItem = new QStandardItem("Game");

    // Environments
    QStandardItem* environmentsItem = new QStandardItem("Environments");
    rootItem->appendRow(environmentsItem);

    // Interior
    QStandardItem* interiorItem = new QStandardItem("Interior");
    environmentsItem->appendRow(interiorItem);

    // Exterior
    QStandardItem* exteriorItem = new QStandardItem("Exterior");
    environmentsItem->appendRow(exteriorItem);

    // Materials
    QStandardItem* materialsItem = new QStandardItem("Materials");
    rootItem->appendRow(materialsItem);

    // Textures
    QStandardItem* texturesItem = new QStandardItem("Textures");
    materialsItem->appendRow(texturesItem);

    // Models
    QStandardItem* modelsItem = new QStandardItem("Models");
    rootItem->appendRow(modelsItem);

    // Furniture
    QStandardItem* furnitureItem = new QStandardItem("Furniture");
    modelsItem->appendRow(furnitureItem);

    // Lighting
    QStandardItem* lightingItem = new QStandardItem("Lighting");
    rootItem->appendRow(lightingItem);

    // Lights
    QStandardItem* lightsItem = new QStandardItem("Lights");
    lightingItem->appendRow(lightsItem);

    // Config
    QStandardItem* configItem = new QStandardItem("Config");
    rootItem->appendRow(configItem);

    // VariantSets
    QStandardItem* variantSetsItem = new QStandardItem("VariantSets");
    configItem->appendRow(variantSetsItem);

    // VariantSets / Interior
    QStandardItem* variantSetsInteriorItem = new QStandardItem("Interior");
    variantSetsItem->appendRow(variantSetsInteriorItem);

    // VariantSets / Exterior
    QStandardItem* variantSetsExteriorItem = new QStandardItem("Exterior");
    variantSetsItem->appendRow(variantSetsExteriorItem);

    // UI
    QStandardItem* uiItem = new QStandardItem("UI");
    rootItem->appendRow(uiItem);

    // Levels
    QStandardItem* levelsItem = new QStandardItem("Levels");
    rootItem->appendRow(levelsItem);

    // Scripts
    QStandardItem* scriptsItem = new QStandardItem("Scripts");
    rootItem->appendRow(scriptsItem);

    // Add the root item to the model
    model->appendRow(rootItem);
}

void projectstructure::AnimationStructure(QStandardItemModel* model)
{
    // Root item
    QStandardItem* rootItem = new QStandardItem("Game");

    // Characters
    QStandardItem* charactersItem = new QStandardItem("Characters");
    rootItem->appendRow(charactersItem);

    // MainCharacters
    QStandardItem* mainCharactersItem = new QStandardItem("MainCharacters");
    charactersItem->appendRow(mainCharactersItem);

    // SupportingCharacters
    QStandardItem* supportingCharactersItem = new QStandardItem("SupportingCharacters");
    charactersItem->appendRow(supportingCharactersItem);

    // Environments
    QStandardItem* environmentsItem = new QStandardItem("Environments");
    rootItem->appendRow(environmentsItem);

    // Sets
    QStandardItem* setsItem = new QStandardItem("Sets");
    environmentsItem->appendRow(setsItem);

    // Backgrounds
    QStandardItem* backgroundsItem = new QStandardItem("Backgrounds");
    environmentsItem->appendRow(backgroundsItem);

    // Props
    QStandardItem* propsItem = new QStandardItem("Props");
    rootItem->appendRow(propsItem);

    // Vehicles
    QStandardItem* vehiclesItem = new QStandardItem("Vehicles");
    propsItem->appendRow(vehiclesItem);

    // Furniture
    QStandardItem* furnitureItem = new QStandardItem("Furniture");
    propsItem->appendRow(furnitureItem);

    // Materials
    QStandardItem* materialsItem = new QStandardItem("Materials");
    rootItem->appendRow(materialsItem);

    // Textures
    QStandardItem* texturesItem = new QStandardItem("Textures");
    materialsItem->appendRow(texturesItem);

    // Shaders
    QStandardItem* shadersItem = new QStandardItem("Shaders");
    materialsItem->appendRow(shadersItem);

    // Animation
    QStandardItem* animationItem = new QStandardItem("Animation");
    rootItem->appendRow(animationItem);

    // CharactersAnimation
    QStandardItem* charactersAnimationItem = new QStandardItem("CharactersAnimation");
    animationItem->appendRow(charactersAnimationItem);

    // SetsAnimation
    QStandardItem* setsAnimationItem = new QStandardItem("SetsAnimation");
    animationItem->appendRow(setsAnimationItem);

    // Effects
    QStandardItem* effectsItem = new QStandardItem("Effects");
    rootItem->appendRow(effectsItem);

    // Particles
    QStandardItem* particlesItem = new QStandardItem("Particles");
    effectsItem->appendRow(particlesItem);

    // Lighting
    QStandardItem* lightingItem = new QStandardItem("Lighting");
    rootItem->appendRow(lightingItem);

    // Lights
    QStandardItem* lightsItem = new QStandardItem("Lights");
    lightingItem->appendRow(lightsItem);

    // Rendering
    QStandardItem* renderingItem = new QStandardItem("Rendering");
    rootItem->appendRow(renderingItem);

    // Compositing
    QStandardItem* compositingItem = new QStandardItem("Compositing");
    rootItem->appendRow(compositingItem);

    // Sound
    QStandardItem* soundItem = new QStandardItem("Sound");
    rootItem->appendRow(soundItem);

    // Music
    QStandardItem* musicItem = new QStandardItem("Music");
    soundItem->appendRow(musicItem);

    // SoundEffects
    QStandardItem* soundEffectsItem = new QStandardItem("SoundEffects");
    soundItem->appendRow(soundEffectsItem);

    // Voice
    QStandardItem* voiceItem = new QStandardItem("Voice");
    soundItem->appendRow(voiceItem);

    // Config
    QStandardItem* configItem = new QStandardItem("Config");
    rootItem->appendRow(configItem);

    // Scripts
    QStandardItem* scriptsItem = new QStandardItem("Scripts");
    rootItem->appendRow(scriptsItem);

    // Add the root item to the model
    model->appendRow(rootItem);
}

void projectstructure::MobileTabletStructure(QStandardItemModel* model)
{
    // Root item
    QStandardItem* rootItem = new QStandardItem("Game");

    // Characters
    QStandardItem* charactersItem = new QStandardItem("Characters");
    rootItem->appendRow(charactersItem);

    // MainCharacters
    QStandardItem* mainCharactersItem = new QStandardItem("MainCharacters");
    charactersItem->appendRow(mainCharactersItem);

    // SupportingCharacters
    QStandardItem* supportingCharactersItem = new QStandardItem("SupportingCharacters");
    charactersItem->appendRow(supportingCharactersItem);

    // Environments
    QStandardItem* environmentsItem = new QStandardItem("Environments");
    rootItem->appendRow(environmentsItem);

    // Levels
    QStandardItem* levelsItem = new QStandardItem("Levels");
    environmentsItem->appendRow(levelsItem);

    // Backgrounds
    QStandardItem* backgroundsItem = new QStandardItem("Backgrounds");
    environmentsItem->appendRow(backgroundsItem);

    // Props
    QStandardItem* propsItem = new QStandardItem("Props");
    rootItem->appendRow(propsItem);

    // Objects
    QStandardItem* objectsItem = new QStandardItem("Objects");
    propsItem->appendRow(objectsItem);

    // Furniture
    QStandardItem* furnitureItem = new QStandardItem("Furniture");
    propsItem->appendRow(furnitureItem);



    // Materials
    QStandardItem* materialsItem =  new QStandardItem("Materials");
    rootItem->appendRow(materialsItem);

    // Textures
    QStandardItem* texturesItem = new QStandardItem("Textures");
    materialsItem->appendRow(texturesItem);

    // Shaders
    QStandardItem* shadersItem = new QStandardItem("Shaders");
    materialsItem->appendRow(shadersItem);

    // UI
    QStandardItem* uiItem = new QStandardItem("UI");
    rootItem->appendRow(uiItem);

    // HUD
    QStandardItem* hudItem = new QStandardItem("HUD");
    uiItem->appendRow(hudItem);

    // Menus
    QStandardItem* menusItem = new QStandardItem("Menus");
    uiItem->appendRow(menusItem);

    // Icons
    QStandardItem* iconsItem = new QStandardItem("Icons");
    uiItem->appendRow(iconsItem);

    // Sounds
    QStandardItem* soundsItem = new QStandardItem("Sounds");
    rootItem->appendRow(soundsItem);

    // Music
    QStandardItem* musicItem = new QStandardItem("Music");
    soundsItem->appendRow(musicItem);

    // SoundEffects
    QStandardItem* soundEffectsItem = new QStandardItem("SoundEffects");
    soundsItem->appendRow(soundEffectsItem);

    // Voice
    QStandardItem* voiceItem = new QStandardItem("Voice");
    soundsItem->appendRow(voiceItem);

    // Config
    QStandardItem* configItem = new QStandardItem("Config");
    rootItem->appendRow(configItem);

    // Settings
    QStandardItem* settingsItem = new QStandardItem("Settings");
    configItem->appendRow(settingsItem);

    // Localization
    QStandardItem* localizationItem = new QStandardItem("Localization");
    configItem->appendRow(localizationItem);

    // Add the root item to the model
    model->appendRow(rootItem);
}

void projectstructure::ARVRStructure(QStandardItemModel* model)
{
    // Root item
    QStandardItem* rootItem = new QStandardItem("Game");

    // Scenes
    QStandardItem* scenesItem = new QStandardItem("Scenes");
    rootItem->appendRow(scenesItem);

    // ARScenes
    QStandardItem* arScenesItem = new QStandardItem("ARScenes");
    scenesItem->appendRow(arScenesItem);

    // VRScenes
    QStandardItem* vrScenesItem = new QStandardItem("VRScenes");
    scenesItem->appendRow(vrScenesItem);

    // Models
    QStandardItem* modelsItem = new QStandardItem("Models");
    rootItem->appendRow(modelsItem);

    // ARModels
    QStandardItem* arModelsItem = new QStandardItem("ARModels");
    modelsItem->appendRow(arModelsItem);

    // VRModels
    QStandardItem* vrModelsItem = new QStandardItem("VRModels");
    modelsItem->appendRow(vrModelsItem);

    // UI
    QStandardItem* uiItem = new QStandardItem("UI");
    rootItem->appendRow(uiItem);

    // HUD
    QStandardItem* hudItem = new QStandardItem("HUD");
    uiItem->appendRow(hudItem);

    // Menus
    QStandardItem* menusItem = new QStandardItem("Menus");
    uiItem->appendRow(menusItem);

    // Icons
    QStandardItem* iconsItem = new QStandardItem("Icons");
    uiItem->appendRow(iconsItem);

    // Materials
    QStandardItem* materialsItem =  new QStandardItem("Materials");
    rootItem->appendRow(materialsItem);

    // Textures
    QStandardItem* texturesItem = new QStandardItem("Textures");
    materialsItem->appendRow(texturesItem);

    // Shaders
    QStandardItem* shadersItem = new QStandardItem("Shaders");
    materialsItem->appendRow(shadersItem);

    // Sounds
    QStandardItem* soundsItem = new QStandardItem("Sounds");
    rootItem->appendRow(soundsItem);

    // Music
    QStandardItem* musicItem = new QStandardItem("Music");
    soundsItem->appendRow(musicItem);

    // SoundEffects
    QStandardItem* soundEffectsItem = new QStandardItem("SoundEffects");
    soundsItem->appendRow(soundEffectsItem);

    // Voice
    QStandardItem* voiceItem = new QStandardItem("Voice");
    soundsItem->appendRow(voiceItem);

    // Config
    QStandardItem* configItem = new QStandardItem("Config");
    rootItem->appendRow(configItem);

    // Settings
    QStandardItem* settingsItem = new QStandardItem("Settings");
    configItem->appendRow(settingsItem);

    // Localization
    QStandardItem* localizationItem = new QStandardItem("Localization");
    configItem->appendRow(localizationItem);

    // Add the root item to the model
    model->appendRow(rootItem);
}


void projectstructure::DisplayFolders(const QDir &folder, QStandardItemModel *model, QStandardItem *parentItem)
{
    QStandardItem *rootItem = parentItem ? parentItem : model->invisibleRootItem();

    QFileInfoList fileInfoList = folder.entryInfoList(QDir::Dirs | QDir::NoDotAndDotDot);

    for (const QFileInfo &fileInfo : fileInfoList)
    {
        QStandardItem *item = new QStandardItem(fileInfo.fileName());

        // Recursively display contents for subdirectories
        QDir subDir(fileInfo.filePath());
        DisplayFolders(subDir, model, item);

        rootItem->appendRow(item);
    }
}

void projectstructure::cloneTreeStructure(QStandardItem* sourceItem, QStandardItem* targetItem)
{
    // Clone child items recursively
    for (int row = 0; row < sourceItem->rowCount(); ++row) {
        QStandardItem* childItem = sourceItem->child(row);
        if (childItem) {
            // Clone the child item and append it to the target item
            QStandardItem* cloneChildItem = childItem->clone();
            targetItem->appendRow(cloneChildItem);

            // Recursively clone child items of the child item
            cloneTreeStructure(childItem, cloneChildItem);
        }
    }
}


void projectstructure::createMissingFolders(const QDir& diskFolder, QStandardItem* treeItem)
{
    qDebug() << "Checking folder:" << diskFolder.path();

    if (!diskFolder.exists()) {
        // Folder doesn't exist on disk, create it
        if (!diskFolder.mkpath(".")) {
            qDebug() << "Error creating folder:" << diskFolder.path();
            return;
        }
    }

    // Iterate over child items in the tree
    qDebug() << "Iterating over child items in the tree:" << diskFolder.path();
    for (int row = 0; row < treeItem->rowCount(); ++row) {
        QStandardItem* childItem = treeItem->child(row);
        QString childFolderName = diskFolder.filePath(childItem->text());

        qDebug() << "Child folder path:" << childFolderName;

        // Recursively check and create subfolders
        createMissingFolders(QDir(childFolderName), childItem);
    }
}


