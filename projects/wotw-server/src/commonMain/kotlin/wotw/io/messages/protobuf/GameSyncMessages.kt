package wotw.io.messages.protobuf

import kotlinx.serialization.Serializable
import kotlinx.serialization.protobuf.ProtoNumber

@Serializable
data class UserInfo(
    val id: Long,
    val name: String
)
@Serializable
data class TeamInfo(
    val id: Long,
    val name: String,
    val leader: UserInfo,
    val members: List<UserInfo>
)

@Serializable
data class GameInfo(
    val teams: List<TeamInfo>,
)

@Serializable
data class UberId(
    @ProtoNumber(1) val group: Int,
    @ProtoNumber(2) val state: Int
)

@Serializable
data class UberStateBatchUpdateMessage(
    @ProtoNumber(1) val updates: List<UberStateUpdateMessage>
){
    constructor(vararg updates: UberStateUpdateMessage): this(updates.toList())
}

@Serializable
data class UberStateUpdateMessage(
    @ProtoNumber(1) val uberId: UberId,
    @ProtoNumber(2) val value: Float
)

@Serializable
data class InitGameSyncMessage(
    @ProtoNumber(1) val uberStates: List<UberId> = emptyList()
)

@Serializable
data class PrintTextMessage(
    @ProtoNumber(1) val frames: Int,
    @ProtoNumber(2) val ypos: Float,
    @ProtoNumber(3) val text: String
)