class Boss_Anouncer : public PlayerScript
{
public:
    Boss_Anouncer() : PlayerScript ("Boss_Anouncer") {}
	
    void OnCreatureKill(Player* player, Creature* boss)
    {
        if (boss->isWorldBoss())
        {
            char msg[250];
            snprintf(msg, 250, "|CFF7BBEF7[Boss Anouncer]|r:|cffff0000 %s |r и его группа убили босса |CFF18BE00[%s]|r !!!", player->GetName().c_str(), boss->GetName().c_str());
            sWorld->SendServerMessage(SERVER_MSG_STRING, msg);
        }
    }
};


void AddSC_Boss_Anouncer()
{
    new Boss_Anouncer;
}