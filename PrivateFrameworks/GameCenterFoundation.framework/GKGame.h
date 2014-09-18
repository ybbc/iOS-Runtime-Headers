/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKGameInternal, GKStoreItemInternal, NSDictionary, NSNumber, NSString;

@interface GKGame : NSObject <NSCoding, NSSecureCoding> {
    long long _environment;
    GKGameInternal *_internal;
}

@property(readonly) NSNumber * adamID;
@property(readonly) NSString * bundleIdentifier;
@property(readonly) NSString * bundleVersion;
@property(readonly) NSString * cacheKey;
@property(readonly) NSString * defaultCategory;
@property(getter=isDownloading,readonly) bool downloading;
@property(retain) NSString * engineID;
@property long long environment;
@property(readonly) NSNumber * externalVersion;
@property(readonly) NSDictionary * gameDescriptor;
@property(readonly) struct GKGameInfo { boolx1; boolx2; boolx3; boolx4; boolx5; boolx6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; } gameInfo;
@property(getter=isInstalled,readonly) bool installedGame;
@property(retain) GKGameInternal * internal;
@property(readonly) bool isGameRecommendation;
@property(readonly) NSString * name;
@property unsigned char platform;
@property(getter=isPrerendered) bool prerendered;
@property(retain) NSString * reason;
@property(retain) GKStoreItemInternal * storeItem;
@property(readonly) bool supportsMultiplayer;
@property(readonly) bool supportsTurnBasedMultiplayer;

+ (id)currentGame;
+ (id)currentGameIncludingGameCenter:(bool)arg1;
+ (void)gameCenterGamePurchasedWithBundleIdentifier:(id)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (bool)isGameCenter;
+ (bool)isPreferences;
+ (void)launchAppStoreWithGameCenterGames;
+ (void)loadGamesWithBundleIDs:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadTopGamesWithCompletionHandler:(id)arg1;
+ (void)markGameRecommendationsDisplayed:(id)arg1 complete:(id)arg2;
+ (void)markGameRecommendationsViewed:(id)arg1 complete:(id)arg2;
+ (void)preloadIconsForGames:(id)arg1 style:(long long)arg2 handler:(id)arg3;
+ (void)removeHistoryForGameWithBundleIdentifier:(id)arg1 completionHandler:(id)arg2;
+ (struct CGSize { double x1; double x2; })serverImageSizeForIconStyle:(long long)arg1;
+ (void)setCurrentGameFromInternal:(id)arg1 serverEnvironment:(long long)arg2;
+ (bool)supportsSecureCoding;
+ (void)updateGames:(id)arg1 withCompletionHandler:(id)arg2;

- (id)URLStringForImageWithShineIfNeeded;
- (void)_gkSetSharingInfo:(id)arg1;
- (id)_gkSharingInfo;
- (id)_imageURLForIconStyle:(long long)arg1;
- (long long)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (id)activityViewControllerOperation:(id)arg1;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)activityViewControllerSubject:(id)arg1;
- (id)cacheKey;
- (id)cachedIconForStyle:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)environment;
- (id)fetchSharingInfo;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)gameDescriptor;
- (struct GKGameInfo { boolx1; boolx2; boolx3; boolx4; boolx5; boolx6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; })gameInfo;
- (void)getFriendPlayersForAchievement:(id)arg1 handler:(id)arg2;
- (void)getFriendPlayersForLeaderboard:(id)arg1 handler:(id)arg2;
- (void)getFriendPlayersIncludingCompatibleGames:(bool)arg1 handler:(id)arg2;
- (unsigned long long)hash;
- (id)iconForStyle:(long long)arg1;
- (id)imageSourceForIconStyle:(long long)arg1;
- (id)imageSourceForiOSIconStyle:(long long)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (bool)isDownloading;
- (bool)isEqual:(id)arg1;
- (bool)isGameCenter;
- (bool)isGameRecommendation;
- (bool)isInstalled;
- (bool)isStoreItemUnexpired;
- (void)loadGameRatingWithCompletionHandler:(id)arg1;
- (id)loadIconForStyle:(long long)arg1 withCompletionHandler:(id)arg2;
- (void)loadTellAFriendMessageWithCompletionHandler:(id)arg1;
- (id)macBrushForIconStyle:(long long)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)presentStoreSheetFromViewController:(id)arg1 context:(id)arg2 completionHandler:(id)arg3;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)removeGameWithCompletionHandler:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setEnvironment:(long long)arg1;
- (void)setInternal:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)submitRating:(float)arg1 withCompletionHandler:(id)arg2;
- (void)uninstallApplicationWithBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end