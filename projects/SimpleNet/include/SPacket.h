#pragma once
#include <iostream>
#include <sstream>

enum SPacketNames
{
	None, Sound, MultiPackets, SetHost, SetPlayer, GetWorld, World, SetTile, SetSelected, RemoveSelected, Message, SendPlayer, SendHost, SendDefault,

	UpdatePlayerPosition, UpdateTile, UpdateTileChar, UpdateTileColor, UpdateTileHealth, UpdateTileOverlay, UpdateTileClaim,

	UpdatePlayer, Health,

	EntityDamage, EntityKill, EntityUpdatePosition,

	EntityAdd, EBullet, ETurret,

	DamagePlayer, HealPlayer, KillPlayer,

	AddPlayer, AddPlayerLocal,

	WaitingPlayer, Start,

	PlayerConnect,

	Lobby, LobbyAdd, LobbyName, LobbyReady, LobbyUnReady, LobbyStart, LobbyLeave, LobbyGetInfo,
};

class SPacket
{
public:
	SPacket();
	~SPacket();

	uint16_t name;
	std::stringstream data;
};

