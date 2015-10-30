#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.Boolean>
struct Action_1_t151;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t152;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t153;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t154;
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_t155;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription[]
struct AchievementDescriptionU5BU5D_t156;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t157;
// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_t158;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct List_1_t159;

#include "mscorlib_System_Object.h"

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
struct  GameCenterPlatform_t150  : public Object_t
{
};
struct GameCenterPlatform_t150_StaticFields{
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_AuthenticateCallback
	Action_1_t151 * ___s_AuthenticateCallback_0;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_FriendsCallback
	Action_1_t151 * ___s_FriendsCallback_1;
	// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_AchievementDescriptionLoaderCallback
	Action_1_t152 * ___s_AchievementDescriptionLoaderCallback_2;
	// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_AchievementLoaderCallback
	Action_1_t153 * ___s_AchievementLoaderCallback_3;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_ProgressCallback
	Action_1_t151 * ___s_ProgressCallback_4;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_ScoreCallback
	Action_1_t151 * ___s_ScoreCallback_5;
	// System.Action`1<UnityEngine.SocialPlatforms.IScore[]> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_ScoreLoaderCallback
	Action_1_t154 * ___s_ScoreLoaderCallback_6;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_LeaderboardCallback
	Action_1_t151 * ___s_LeaderboardCallback_7;
	// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_UsersCallback
	Action_1_t155 * ___s_UsersCallback_8;
	// UnityEngine.SocialPlatforms.Impl.AchievementDescription[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_adCache
	AchievementDescriptionU5BU5D_t156* ___s_adCache_9;
	// UnityEngine.SocialPlatforms.Impl.UserProfile[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_friends
	UserProfileU5BU5D_t157* ___s_friends_10;
	// UnityEngine.SocialPlatforms.Impl.UserProfile[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_users
	UserProfileU5BU5D_t157* ___s_users_11;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_ResetAchievements
	Action_1_t151 * ___s_ResetAchievements_12;
	// UnityEngine.SocialPlatforms.Impl.LocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::m_LocalUser
	LocalUser_t158 * ___m_LocalUser_13;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::m_GcBoards
	List_1_t159 * ___m_GcBoards_14;
};
