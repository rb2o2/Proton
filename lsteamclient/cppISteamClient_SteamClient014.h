#ifdef __cplusplus
extern "C" {
#endif
extern HSteamPipe cppISteamClient_SteamClient014_CreateSteamPipe(void *);
extern bool cppISteamClient_SteamClient014_BReleaseSteamPipe(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient014_ConnectToGlobalUser(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient014_CreateLocalUser(void *, HSteamPipe *, EAccountType);
extern void cppISteamClient_SteamClient014_ReleaseUser(void *, HSteamPipe, HSteamUser);
extern void *cppISteamClient_SteamClient014_GetISteamUser(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient014_GetISteamGameServer(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient014_SetLocalIPBinding(void *, uint32, uint16);
extern void *cppISteamClient_SteamClient014_GetISteamFriends(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient014_GetISteamUtils(void *, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient014_GetISteamMatchmaking(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient014_GetISteamMatchmakingServers(void *, HSteamUser, HSteamPipe, const char *);
extern void * cppISteamClient_SteamClient014_GetISteamGenericInterface(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient014_GetISteamUserStats(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient014_GetISteamGameServerStats(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient014_GetISteamApps(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient014_GetISteamNetworking(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient014_GetISteamRemoteStorage(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient014_GetISteamScreenshots(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient014_RunFrame(void *);
extern uint32 cppISteamClient_SteamClient014_GetIPCCallCount(void *);
extern void cppISteamClient_SteamClient014_SetWarningMessageHook(void *, SteamAPIWarningMessageHook_t);
extern bool cppISteamClient_SteamClient014_BShutdownIfAllPipesClosed(void *);
extern void *cppISteamClient_SteamClient014_GetISteamHTTP(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient014_GetISteamUnifiedMessages(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient014_GetISteamController(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient014_GetISteamUGC(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient014_GetISteamAppList(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient014_GetISteamMusic(void *, HSteamUser, HSteamPipe, const char *);
#ifdef __cplusplus
}
#endif