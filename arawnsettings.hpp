#ifndef ARAWNSETTINGS_HPP
#define ARAWNSETTINGS_HPP

#include "arawnheader.h"

class ArawnSettings
{
    Q_DECLARE_TR_FUNCTIONS(ArawnSettings)
private:
    ArawnSettings();

    bool load();
    static ArawnSettings *aSettings;
    QString path;

public:
    void save();

    static void create()
    {
        aSettings = new ArawnSettings;
    }

    static ArawnSettings* instance()
    {
        return aSettings;
    }

    QVariantMap languageValues;
    QVariant language;

    QVariantMap openGlRenderingValues;
    QVariant openGlRendering;

    QVariantMap showCorpsePartsValues;
    QVariant showCorpseParts;

    QVariantMap shakyExplosionValues;
    QVariant shakyExplosion;

    QVariantMap resolutionValues;
    QVariant resolution;

    bool wideLayout;

// Game settings
    QVariantMap roundTimeDefaultValues;
    QVariant roundTimeDefault;

    QVariantMap pointsToWinValues;
    QVariant pointsToWin;

// Start/Max Extras
    QVariantMap startBombsValues;
    QVariant startBombs;

    QVariantMap maxBombsValues;
    QVariant maxBombs;

    QVariantMap startFireValues;
    QVariant startFire;

    QVariantMap maxFireValues;
    QVariant maxFire;

    QVariantMap startSpeedValues;
    QVariant startSpeed;

    QVariantMap maxSpeedValues;
    QVariant maxSpeed;

    QVariantMap startPushBombsValues;
    QVariant startPushBombs;

    QVariantMap enablePushBombsValues;
    QVariant enablePushBombs;

    QVariantMap startDropBombsValues;
    QVariant startDropBombs;

    QVariantMap enableDropBombsValues;
    QVariant enableDropBombs;

// Enable/Disable Diseases
    QVariantMap enableFailingBombsValues;
    QVariant enableFailingBombs;

    QVariantMap enableOppositeControlsValues;
    QVariant enableOppositeControls;

    QVariantMap enableInvisibilityValues;
    QVariant enableInvisibility;

// Bomb Timing and Speed
    QVariantMap bombSpeedValues;
    QVariant bombSpeed; // n/10 fields/seconds

    QVariantMap bombTimerValues;
    QVariant bombTimer; // 1/10 s

// Player Names
    QVariant defaultPlayer1Name;
    QVariant defaultPlayer2Name;
    QVariant defaultPlayer3Name;
    QVariant defaultPlayer4Name;

};

#endif // ARAWNSETTINGS_HPP
