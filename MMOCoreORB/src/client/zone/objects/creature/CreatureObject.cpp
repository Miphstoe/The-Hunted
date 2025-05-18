#include "CreatureObject.h"
bool CreatureObject::canLearnSkill(const String& skillName) {
    Skill* skill = skillManager->getSkill(skillName);
    if (skill == nullptr)
        return false;

    int skillPointsRequired = skill->getSkillPointsRequired();
    int currentSkillPoints = getSkillPoints();  // This function exists in CreatureObject

    if ((currentSkillPoints + skillPointsRequired) > 250)
        return false;

    return true;
}

