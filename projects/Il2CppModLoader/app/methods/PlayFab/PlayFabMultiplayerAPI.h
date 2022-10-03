#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PlayFab::PlayFabMultiplayerAPI {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01A2E6C0, void, ForgetAllCredentials, ())
    IL2CPP_REGISTER_METHOD(0x01A2E750, void, CancelAllMatchmakingTicketsForPlayer, (app::CancelAllMatchmakingTicketsForPlayerRequest * request, app::Action_1_PlayFab_MultiplayerModels_CancelAllMatchmakingTicketsForPlayerResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2E860, void, CancelMatchmakingTicket, (app::CancelMatchmakingTicketRequest * request, app::Action_1_PlayFab_MultiplayerModels_CancelMatchmakingTicketResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2E970, void, CreateBuildWithCustomContainer, (app::CreateBuildWithCustomContainerRequest * request, app::Action_1_PlayFab_MultiplayerModels_CreateBuildWithCustomContainerResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2EA80, void, CreateBuildWithManagedContainer, (app::CreateBuildWithManagedContainerRequest * request, app::Action_1_PlayFab_MultiplayerModels_CreateBuildWithManagedContainerResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2EB90, void, CreateMatchmakingTicket, (app::CreateMatchmakingTicketRequest * request, app::Action_1_PlayFab_MultiplayerModels_CreateMatchmakingTicketResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2ECA0, void, CreateRemoteUser, (app::CreateRemoteUserRequest * request, app::Action_1_PlayFab_MultiplayerModels_CreateRemoteUserResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2EDB0, void, CreateServerMatchmakingTicket, (app::CreateServerMatchmakingTicketRequest * request, app::Action_1_PlayFab_MultiplayerModels_CreateMatchmakingTicketResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2EEC0, void, DeleteAsset, (app::DeleteAssetRequest * request, app::Action_1_PlayFab_MultiplayerModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2EFD0, void, DeleteBuild, (app::DeleteBuildRequest * request, app::Action_1_PlayFab_MultiplayerModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2F0E0, void, DeleteCertificate, (app::DeleteCertificateRequest * request, app::Action_1_PlayFab_MultiplayerModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2F1F0, void, DeleteRemoteUser, (app::DeleteRemoteUserRequest * request, app::Action_1_PlayFab_MultiplayerModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2F300, void, EnableMultiplayerServersForTitle, (app::EnableMultiplayerServersForTitleRequest * request, app::Action_1_PlayFab_MultiplayerModels_EnableMultiplayerServersForTitleResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2F410, void, GetAssetUploadUrl, (app::GetAssetUploadUrlRequest * request, app::Action_1_PlayFab_MultiplayerModels_GetAssetUploadUrlResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2F520, void, GetBuild, (app::GetBuildRequest * request, app::Action_1_PlayFab_MultiplayerModels_GetBuildResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2F630, void, GetContainerRegistryCredentials, (app::GetContainerRegistryCredentialsRequest * request, app::Action_1_PlayFab_MultiplayerModels_GetContainerRegistryCredentialsResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2F740, void, GetMatch, (app::GetMatchRequest * request, app::Action_1_PlayFab_MultiplayerModels_GetMatchResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2F850, void, GetMatchmakingQueue, (app::GetMatchmakingQueueRequest * request, app::Action_1_PlayFab_MultiplayerModels_GetMatchmakingQueueResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2F960, void, GetMatchmakingTicket, (app::GetMatchmakingTicketRequest * request, app::Action_1_PlayFab_MultiplayerModels_GetMatchmakingTicketResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2FA70, void, GetMultiplayerServerDetails, (app::GetMultiplayerServerDetailsRequest * request, app::Action_1_PlayFab_MultiplayerModels_GetMultiplayerServerDetailsResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2FB80, void, GetQueueStatistics, (app::GetQueueStatisticsRequest * request, app::Action_1_PlayFab_MultiplayerModels_GetQueueStatisticsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2FC90, void, GetRemoteLoginEndpoint, (app::GetRemoteLoginEndpointRequest * request, app::Action_1_PlayFab_MultiplayerModels_GetRemoteLoginEndpointResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2FDA0, void, GetTitleEnabledForMultiplayerServersStatus, (app::GetTitleEnabledForMultiplayerServersStatusRequest * request, app::Action_1_PlayFab_MultiplayerModels_GetTitleEnabledForMultiplayerServersStatusResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2FEB0, void, JoinMatchmakingTicket, (app::JoinMatchmakingTicketRequest * request, app::Action_1_PlayFab_MultiplayerModels_JoinMatchmakingTicketResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A2FFC0, void, ListArchivedMultiplayerServers, (app::ListMultiplayerServersRequest * request, app::Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A300D0, void, ListAssetSummaries, (app::ListAssetSummariesRequest * request, app::Action_1_PlayFab_MultiplayerModels_ListAssetSummariesResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A301E0, void, ListBuildSummaries, (app::ListBuildSummariesRequest * request, app::Action_1_PlayFab_MultiplayerModels_ListBuildSummariesResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A302F0, void, ListCertificateSummaries, (app::ListCertificateSummariesRequest * request, app::Action_1_PlayFab_MultiplayerModels_ListCertificateSummariesResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A30400, void, ListContainerImages, (app::ListContainerImagesRequest * request, app::Action_1_PlayFab_MultiplayerModels_ListContainerImagesResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A30510, void, ListContainerImageTags, (app::ListContainerImageTagsRequest * request, app::Action_1_PlayFab_MultiplayerModels_ListContainerImageTagsResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A30620, void, ListMatchmakingQueues, (app::ListMatchmakingQueuesRequest * request, app::Action_1_PlayFab_MultiplayerModels_ListMatchmakingQueuesResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A30730, void, ListMatchmakingTicketsForPlayer, (app::ListMatchmakingTicketsForPlayerRequest * request, app::Action_1_PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A30840, void, ListMultiplayerServers, (app::ListMultiplayerServersRequest * request, app::Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A30950, void, ListQosServers, (app::ListQosServersRequest * request, app::Action_1_PlayFab_MultiplayerModels_ListQosServersResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A30A60, void, ListVirtualMachineSummaries, (app::ListVirtualMachineSummariesRequest * request, app::Action_1_PlayFab_MultiplayerModels_ListVirtualMachineSummariesResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A30B70, void, RemoveMatchmakingQueue, (app::RemoveMatchmakingQueueRequest * request, app::Action_1_PlayFab_MultiplayerModels_RemoveMatchmakingQueueResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A30C80, void, RequestMultiplayerServer, (app::RequestMultiplayerServerRequest * request, app::Action_1_PlayFab_MultiplayerModels_RequestMultiplayerServerResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A30D90, void, RolloverContainerRegistryCredentials, (app::RolloverContainerRegistryCredentialsRequest * request, app::Action_1_PlayFab_MultiplayerModels_RolloverContainerRegistryCredentialsResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A30EA0, void, SetMatchmakingQueue, (app::SetMatchmakingQueueRequest * request, app::Action_1_PlayFab_MultiplayerModels_SetMatchmakingQueueResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A30FB0, void, ShutdownMultiplayerServer, (app::ShutdownMultiplayerServerRequest * request, app::Action_1_PlayFab_MultiplayerModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A310C0, void, UpdateBuildRegions, (app::UpdateBuildRegionsRequest * request, app::Action_1_PlayFab_MultiplayerModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A311D0, void, UploadCertificate, (app::UploadCertificateRequest * request, app::Action_1_PlayFab_MultiplayerModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
} // namespace app::classes::PlayFab::PlayFabMultiplayerAPI
