/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMChat : IMItemsController <IMSendProgressDelegate, INSpeakable> {
    IMAccount * _account;
    NSArray * _attachments;
    NSDictionary * _bizIntent;
    <IMChatItemRules> * _chatItemRules;
    IMScheduledUpdater * _chatItemsUpdater;
    NSMutableDictionary * _chatProperties;
    void * _context;
    TUConversation * _conversation;
    NSNumber * _countOfAttachmentsNotCachedLocally;
    NSNumber * _countOfMessagesMarkedAsSpam;
    NSString * _currentLocationGUID;
    NSString * _currentUnreadHistoryQuery;
    unsigned long long  _dbFailedCount;
    unsigned long long  _dbUnreadCount;
    unsigned int  _didSendAFinishedMessage;
    NSString * _displayName;
    BOOL  _downgradeState;
    IMScheduledUpdater * _downgradeStateUpdater;
    NSData * _engramID;
    unsigned int  _forceMMS;
    NSArray * _frequentReplies;
    NSString * _groupID;
    NSString * _guid;
    NSMutableSet * _guids;
    unsigned int  _hasBeenConfigured;
    bool  _hasEarlierMessagesToLoad;
    bool  _hasHadSuccessfulQuery;
    bool  _hasMoreRecentMessagesToLoad;
    unsigned int  _hasPendingMarkRead;
    bool  _hasRefreshedServiceForSending;
    bool  _hasSurfRequest;
    NSString * _identifier;
    unsigned int  _ignoreDowngradeStatusUpdates;
    IMMessage * _invitationForPendingParticipants;
    bool  _isCurrentlyDownloadingPurgedAssets;
    unsigned int  _isFiltered;
    unsigned int  _isFirstMessageInvitation;
    unsigned int  _isUpdatingChatItems;
    long long  _joinState;
    NSString * _lastAddressedHandleID;
    NSString * _lastAddressedSIMID;
    long long  _lastMessageTimeStampOnLoad;
    double  _latestTypingIndicatorTimeInterval;
    NSString * _localUserIsComposing;
    NSMutableArray * _messagesPendingJoin;
    NSMutableDictionary * _participantProperties;
    NSMutableDictionary * _participantStates;
    NSArray * _participants;
    NSString * _personCentricID;
    NSString * _roomName;
    NSString * _roomNameWithoutSuffix;
    IMSendProgress * _sendProgress;
    unsigned char  _style;
    IMTimingCollection * _timingCollection;
    NSString * _typingGUID;
    unsigned int  _wasInvitationHandled;
}

@property (getter=isVIP, nonatomic) bool VIP;
@property (setter=_setGUIDs:, nonatomic, retain) NSMutableSet *_guids;
@property (nonatomic, readonly) bool _shouldRegisterChat;
@property (nonatomic, readonly) IMAccount *account;
@property (nonatomic, readonly) bool allRecipientsFollowingLocation;
@property (nonatomic, readonly) bool allRecipientsSharingLocation;
@property (nonatomic, readonly) NSSet *allSiblingFMFHandles;
@property (nonatomic, readonly) NSArray *alternativeSpeakableMatches;
@property (nonatomic, readonly, copy) NSArray *attachments;
@property (nonatomic, copy) NSDictionary *bizIntent;
@property (nonatomic, readonly) bool canHaveMultipleParticipants;
@property (nonatomic, readonly) bool canLeaveChat;
@property (nonatomic, readonly) NSString *chatIdentifier;
@property (nonatomic, readonly) IMChatRegistry *chatRegistry;
@property (nonatomic, readonly) unsigned char chatStyle;
@property (nonatomic) void*contextInfo;
@property (nonatomic, readonly) TUConversation *conversation;
@property (nonatomic, readonly, copy) NSNumber *countOfAttachmentsNotCachedLocally;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceIndependentID;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) NSData *engramID;
@property (nonatomic, readonly) IMMessage *firstMessage;
@property (nonatomic, readonly) NSSet *fmfHandles;
@property (nonatomic) bool forceMMS;
@property (nonatomic, retain) NSArray *frequentReplies;
@property (getter=isGroupChat, nonatomic, readonly) bool groupChat;
@property (nonatomic, retain) NSString *groupID;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic) bool hasHadSuccessfulQuery;
@property (nonatomic, readonly) bool hasMoreMessagesToLoad;
@property (nonatomic, readonly) bool hasMoreRecentMessagesToLoad;
@property (nonatomic, readonly) bool hasRecipientsFollowingLocation;
@property (nonatomic, readonly) bool hasRecipientsSharingLocation;
@property (nonatomic, readonly) bool hasSiblingRecipientsSharingLocation;
@property (nonatomic) bool hasSurfRequest;
@property (nonatomic, readonly) bool hasUnhandledInvitation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) IMMessage *invitationForPendingParticipants;
@property (nonatomic, readonly) bool isAppleChat;
@property (nonatomic, readonly) bool isBusinessChat;
@property (nonatomic, readonly) bool isCurrentlyDownloadingPurgedAttachments;
@property (nonatomic) bool isFiltered;
@property (nonatomic, readonly) bool isMakoChat;
@property (nonatomic, readonly) bool isReplyEnabled;
@property (nonatomic, readonly) long long joinState;
@property (nonatomic, retain) NSString *lastAddressedHandleID;
@property (nonatomic, retain) NSString *lastAddressedSIMID;
@property (nonatomic, readonly) IMMessage *lastFinishedMessage;
@property (nonatomic, readonly) NSDate *lastFinishedMessageDate;
@property (nonatomic, readonly) long long lastFinishedMessageID;
@property (nonatomic, readonly) IMMessageItem *lastFinishedMessageItem;
@property (nonatomic, readonly) IMMessage *lastIncomingFinishedMessage;
@property (nonatomic, readonly) IMMessage *lastIncomingFinishedMessageWithTextContent;
@property (nonatomic, readonly) IMMessage *lastIncomingMessage;
@property (nonatomic, readonly) IMMessage *lastMessage;
@property (nonatomic, readonly) bool lastMessageExists;
@property (nonatomic, readonly) long long lastMessageTimeStampOnLoad;
@property (nonatomic, readonly) IMMessage *lastSentMessage;
@property (nonatomic, readonly) NSDate *lastSentMessageDate;
@property (nonatomic, readonly) NSDate *lastTUConversationCreatedDate;
@property (nonatomic) double latestTypingIndicatorTimeInterval;
@property (nonatomic, readonly) NSString *localTypingMessageGUID;
@property (nonatomic, retain) NSString *localUserIsComposing;
@property (nonatomic) bool localUserIsRecording;
@property (nonatomic) bool localUserIsTyping;
@property (nonatomic, readonly) MKMapItem *mapItem;
@property (nonatomic, readonly) unsigned long long messageCount;
@property (nonatomic, readonly) unsigned long long messageFailureCount;
@property (nonatomic) unsigned long long numberOfMessagesToKeepLoaded;
@property (nonatomic, readonly) unsigned long long overallChatStatus;
@property (nonatomic, readonly) NSArray *participants;
@property (nonatomic, readonly) NSString *persistentID;
@property (nonatomic, retain) NSString *personCentricID;
@property (nonatomic, readonly) NSString *pronunciationHint;
@property (nonatomic, retain) IMHandle *recipient;
@property (nonatomic, readonly) NSString *roomName;
@property (nonatomic, readonly) NSString *roomNameWithoutSuffix;
@property (nonatomic, readonly) NSString *spokenPhrase;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool suppressAccountRetargetingForNamedGroupConversation;
@property (nonatomic, readonly) unsigned long long unreadMessageCount;
@property (nonatomic, readonly) NSString *vocabularyIdentifier;
@property (nonatomic, readonly, copy) NSDate *watermarkDate;
@property (nonatomic, readonly) long long watermarkMessageID;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

+ (id)_GUIDsForKey:(id)arg1;
+ (Class)_NPSManagerClass;
+ (id)__im_adjustMessageSummaryInfoForSending:(id)arg1;
+ (void)_initializeFMF;
+ (void)_removeGUID:(id)arg1 fromList:(id)arg2;
+ (void)_storeGUID:(id)arg1 forKey:(id)arg2;
+ (Class)chatItemRulesClass;
+ (void)cleanWatermarkCache;
+ (bool)isGUIDInAttemptingListInScrutinyMode:(id)arg1;
+ (void)moveVIPChatAtIndex:(long long)arg1 toIndex:(long long)arg2;
+ (void)removeGUIDInAttemptingListInScrutinyMode:(id)arg1;
+ (void)setChatItemRulesClass:(Class)arg1;
+ (void)storeGUIDInAttemptingListInScrutinyMode:(id)arg1;
+ (void)updateVIPChatIdentifiers:(id /* block */)arg1;
+ (id /* block */)watermarkComparator;

- (void).cxx_destruct;
- (void)__clearReadMessageCache;
- (void)_accountControllerUpdated:(id)arg1;
- (bool)_accountIsOperational:(id)arg1 forService:(id)arg2;
- (void)_accountLoggedOut:(id)arg1;
- (void)_addParticipants:(id)arg1 withState:(unsigned long long)arg2;
- (id)_appendArchivedItemsToItemsArray:(id)arg1;
- (id)_archivedItemsToReplace:(id)arg1 numberOfMessagesBeforeGUID:(unsigned long long)arg2 numberOfMessagesAfterGUID:(unsigned long long)arg3;
- (void)_calculateDowngradeState;
- (void)_calculateDowngradeStateTimerFired;
- (bool)_chatHasValidAccount:(id)arg1 forService:(id)arg2;
- (void)_clearCachedIdentifier;
- (void)_clearDowngradeMarkers;
- (void)_clearUnreadCount;
- (long long)_compareChat:(id)arg1 withDate:(id)arg2 withDate:(id)arg3;
- (void)_configureLocationShareItem:(id)arg1;
- (id)_consecutiveDowngradeAttemptsViaManualDowngrades:(bool)arg1;
- (void)_daemonAlive:(id)arg1;
- (void)_daemonDied:(id)arg1;
- (void)_delayedInvalidateDowngradeState;
- (void)_endTiming;
- (void)_engroupParticipantsUpdated;
- (void)_fixItemForSendingMessageTime:(id)arg1;
- (void)_fixSendingItemDateAndSortID:(id)arg1;
- (id)_getDeleteChatItemMap:(id)arg1;
- (id)_getMessageChatItemMap:(id)arg1 withDeleteMap:(id)arg2 andAllChatItems:(id)arg3;
- (id)_guids;
- (void)_handleAddressBookChangeForRecipientUID:(id)arg1;
- (void)_handleAttributionChanged;
- (void)_handleDeliveredCommand:(id)arg1;
- (void)_handleHandleStatusChanged:(id)arg1;
- (void)_handleIncomingCommand:(id)arg1;
- (bool)_handleIncomingItem:(id)arg1;
- (void)_handleMessageGUIDDeletions:(id)arg1;
- (bool)_hasCommunicatedOnService:(id)arg1;
- (bool)_hasJustSentAMessage;
- (id)_initWithDictionaryRepresentation:(id)arg1 items:(id)arg2 participantsHint:(id)arg3 accountHint:(id)arg4;
- (id)_initWithGUID:(id)arg1 account:(id)arg2 style:(unsigned char)arg3 roomName:(id)arg4 displayName:(id)arg5 lastAddressedHandle:(id)arg6 lastAddressedSIMID:(id)arg7 items:(id)arg8 participants:(id)arg9 isFiltered:(bool)arg10 hasHadSuccessfulQuery:(bool)arg11;
- (id)_initWithItems:(id)arg1;
- (void)_initialize;
- (void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(bool)arg3 isHistoryQuery:(bool)arg4;
- (void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(bool)arg3 isHistoryQuery:(bool)arg4 limit:(unsigned long long)arg5;
- (void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(bool)arg3 isHistoryQuery:(bool)arg4 limit:(unsigned long long)arg5 numberOfMessagesBeforeGUID:(unsigned long long)arg6 numberOfMessagesAfterGUID:(unsigned long long)arg7;
- (void)_invalidateDowngradeState;
- (void)_inviteParticipants:(id)arg1 reason:(id)arg2 toiMessageChat:(bool)arg3;
- (void)_inviteParticipantsToChat:(id)arg1 reason:(id)arg2 toiMessageChat:(bool)arg3;
- (void)_invitePendingParticipants;
- (bool)_isDuplicate:(id)arg1;
- (void)_itemsDidChange:(id)arg1;
- (id)_lastFinishedMessage;
- (void)_launchAppForJoinRequest:(id)arg1;
- (void)_leaveChat:(bool)arg1;
- (void)_markItemAsPlayed:(id)arg1;
- (void)_participant:(id)arg1 statusChanged:(int)arg2;
- (id)_pendingParticipants;
- (id)_performQueryWithKey:(id)arg1 loadImmediately:(bool)arg2 block:(id /* block */)arg3;
- (id)_performQueryWithKey:(id)arg1 loadImmediately:(bool)arg2 block:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)_postIMChatItemsDidChangeNotificationWithInserted:(id)arg1 removed:(id)arg2 reload:(id)arg3 regenerate:(id)arg4 oldChatItems:(id)arg5 shouldLog:(bool)arg6;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2 shouldLog:(bool)arg3;
- (id)_previousAccountForService:(id)arg1;
- (id)_privateInitWithAccount:(id)arg1 style:(unsigned char)arg2 roomName:(id)arg3 messages:(id)arg4 participants:(id)arg5 isFiltered:(bool)arg6 hasHadSuccessfulQuery:(bool)arg7;
- (void)_recomputeOverallChatStatusQuietly:(bool)arg1;
- (void)_removeParticipantsFromChat:(id)arg1 reason:(id)arg2 fromiMessageChat:(bool)arg3;
- (id)_renderingDataDictionary;
- (void)_replaceStaleChatItems;
- (bool)_sanityCheckAccounts;
- (void)_sendCurrentLocationMessageUsingLocationManager:(id)arg1;
- (void)_sendMessage:(id)arg1 adjustingSender:(bool)arg2 shouldQueue:(bool)arg3;
- (bool)_serverBagPreventsScrutinyMode;
- (void)_setAccount:(id)arg1;
- (void)_setAccount:(id)arg1 locally:(bool)arg2;
- (void)_setAndIncrementDowngradeMarkersForManual:(bool)arg1;
- (void)_setAttachments:(id)arg1;
- (void)_setChatProperties:(id)arg1;
- (void)_setCountOfAttachmentsNotCachedLocally:(id)arg1;
- (void)_setCountOfMessagesMarkedAsSpam:(id)arg1;
- (void)_setDBFailedCount:(unsigned long long)arg1;
- (void)_setDBUnreadCount:(unsigned long long)arg1;
- (void)_setDBUnreadCount:(unsigned long long)arg1 postNotification:(bool)arg2;
- (void)_setDisplayName:(id)arg1;
- (void)_setGUIDs:(id)arg1;
- (void)_setIsDownloadingPurgedAssets:(bool)arg1;
- (void)_setJoinState:(long long)arg1;
- (void)_setJoinState:(long long)arg1 quietly:(bool)arg2;
- (void)_setLocalUserIsComposing:(id)arg1 suppliedGUID:(id)arg2;
- (void)_setLocalUserIsComposing:(id)arg1 suppliedGUID:(id)arg2 typingIndicatorData:(id)arg3;
- (void)_setParticipantState:(unsigned long long)arg1 forHandle:(id)arg2 quietly:(bool)arg3;
- (void)_setParticipantState:(unsigned long long)arg1 forHandles:(id)arg2 quietly:(bool)arg3;
- (void)_setPreviousAccount:(id)arg1 forService:(id)arg2;
- (void)_setRenderingDataDictionary:(id)arg1;
- (void)_setTimerForReadMessageCache;
- (void)_setupObservation;
- (bool)_shouldAnnouncePeopleJoin;
- (bool)_shouldRegisterChat;
- (bool)_shouldSendCancelTypingIndicator;
- (void)_showErrorMessage:(id)arg1;
- (void)_startTiming:(id)arg1;
- (id)_storedWatermarkMessageID;
- (void)_targetToService:(id)arg1 newComposition:(bool)arg2;
- (id)_timingCollection;
- (id)_tuDateForChat:(id)arg1;
- (void)_unwatchHandleStatusChangedForHandle:(id)arg1;
- (void)_updateChatItems;
- (void)_updateChatItemsWithReason:(id)arg1 block:(id /* block */)arg2;
- (void)_updateChatItemsWithReason:(id)arg1 block:(id /* block */)arg2 shouldPost:(bool)arg3;
- (void)_updateDisplayName:(id)arg1;
- (void)_updateDowngradeState:(BOOL)arg1 checkAgainInterval:(double)arg2;
- (void)_updateEngramID:(id)arg1;
- (void)_updateLastAddressedHandleID:(id)arg1;
- (void)_updateLastAddressedSIMID:(id)arg1;
- (void)_updateLocationShareItemsForSender:(id)arg1;
- (void)_watchHandleStatusChangedForHandle:(id)arg1;
- (void)acceptInvitation;
- (id)account;
- (void)addPendingParticipants:(id)arg1;
- (id)allChatProperties;
- (id)allMessagesToReportAsSpam;
- (id)allPropertiesOfParticipant:(id)arg1;
- (bool)allRecipientsFollowingLocation;
- (bool)allRecipientsSharingLocation;
- (id)allSiblingFMFHandles;
- (id)alternativeSpeakableMatches;
- (id)attachments;
- (bool)authorizedToSendCurrentLocationMessage;
- (void)autoReportSpam;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (void)beginListeningToAttributionChanges;
- (id)bizIntent;
- (bool)canAddParticipant:(id)arg1;
- (bool)canAddParticipants:(id)arg1;
- (bool)canEditChatItem:(id)arg1;
- (bool)canHaveMultipleParticipants;
- (bool)canLeaveChat;
- (bool)canSendCurrentLocationMessage;
- (bool)canSendMessage:(id)arg1;
- (bool)canSendTransfer:(id)arg1;
- (void)cancelMessage:(id)arg1;
- (id)chatIdentifier;
- (id)chatItems;
- (id)chatItemsForItems:(id)arg1;
- (id)chatRegistry;
- (unsigned char)chatStyle;
- (void)clear;
- (void)clearScrutinyMode;
- (void)closeSession;
- (long long)compareChatByDate:(id)arg1;
- (long long)compareChatByTUDateAndLastFinishedMessageDate:(id)arg1;
- (void*)contextInfo;
- (id)conversation;
- (id)conversation;
- (id)countOfAttachmentsNotCachedLocally;
- (void)dealloc;
- (void)declineInvitation;
- (bool)deleteAllHistory;
- (void)deleteChatItems:(id)arg1;
- (void)deleteExtensionPayloadData;
- (void)deleteTransfers:(id)arg1;
- (id)description;
- (id)deviceIndependentID;
- (void)didUnregisterFromRegistry:(id)arg1;
- (id)displayName;
- (void)downloadPurgedAttachments;
- (void)endHoldingUpdatesForAllKeys;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (void)endListeningToAttributionChanges;
- (id)engramID;
- (id)firstMessage;
- (id)fmfHandles;
- (bool)forceMMS;
- (id)frequentReplies;
- (id)groupID;
- (id)guid;
- (bool)hasHadSuccessfulQuery;
- (bool)hasKnownParticipants;
- (bool)hasMoreMessagesToLoad;
- (bool)hasMoreRecentMessagesToLoad;
- (bool)hasRecipientsFollowingLocation;
- (bool)hasRecipientsSharingLocation;
- (bool)hasSiblingRecipientsSharingLocation;
- (bool)hasStoredMessageWithGUID:(id)arg1;
- (bool)hasSurfRequest;
- (bool)hasSurfRequestForPaymentType:(unsigned long long)arg1;
- (bool)hasSurfRequestNotFromMe:(id)arg1;
- (bool)hasUnhandledInvitation;
- (id)init;
- (void)initiateTUConversationWithVideoEnabled:(bool)arg1;
- (id)invitationForPendingParticipants;
- (void)inviteParticipants:(id)arg1 reason:(id)arg2;
- (void)inviteParticipantsToiMessageChat:(id)arg1 reason:(id)arg2;
- (bool)isAppleChat;
- (bool)isBusinessChat;
- (bool)isCurrentlyDownloadingPurgedAttachments;
- (bool)isDowngraded;
- (bool)isFiltered;
- (bool)isGroupChat;
- (bool)isHoldingUpdatesForKey:(id)arg1;
- (bool)isInScrutinyMode;
- (bool)isMakoChat;
- (bool)isReplyEnabled;
- (bool)isVIP;
- (void)join;
- (void)joinExistingTUConversationWithVideoEnabled:(bool)arg1;
- (long long)joinState;
- (id)lastAddressedHandleID;
- (id)lastAddressedSIMID;
- (id)lastFinishedMessage;
- (id)lastFinishedMessageDate;
- (long long)lastFinishedMessageID;
- (id)lastFinishedMessageItem;
- (id)lastIncomingFinishedMessage;
- (id)lastIncomingFinishedMessageWithTextContent;
- (id)lastIncomingMessage;
- (id)lastMessage;
- (bool)lastMessageExists;
- (long long)lastMessageTimeStampOnLoad;
- (id)lastRelatedIncomingFinishedMessageTextContentWithLimit:(long long)arg1;
- (id)lastSentMessage;
- (id)lastSentMessageDate;
- (id)lastTUConversationCreatedDate;
- (double)latestTypingIndicatorTimeInterval;
- (void)leave;
- (void)leaveiMessageGroup;
- (void)loadAttachments:(id /* block */)arg1;
- (id)loadFrequentRepliesLimit:(unsigned long long)arg1 loadImmediately:(bool)arg2;
- (id)loadMessagesBeforeAndAfterGUID:(id)arg1 numberOfMessagesToLoadBeforeGUID:(unsigned long long)arg2 numberOfMessagesToLoadAfterGUID:(unsigned long long)arg3 loadImmediately:(bool)arg4;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(bool)arg3;
- (id)loadMessagesUpToGUID:(id)arg1 date:(id)arg2 limit:(unsigned long long)arg3 loadImmediately:(bool)arg4;
- (id)loadMessagesUpToGUID:(id)arg1 limit:(unsigned long long)arg2;
- (id)loadUnreadMessagesWithLimit:(unsigned long long)arg1 fallbackToMessagesUpToGUID:(id)arg2;
- (id)localTypingMessageGUID;
- (id)localUserIsComposing;
- (bool)localUserIsRecording;
- (bool)localUserIsTyping;
- (id)mapItem;
- (bool)mapsToTUConversation:(id)arg1;
- (void)markAllLocationShareItemsAsUnactionable;
- (void)markAllMessagesAsRead;
- (void)markAsAutoSpamReported;
- (unsigned long long)markAsSpam;
- (void)markChatItemAsPlayed:(id)arg1;
- (void)markChatItemAsPlayedExpressiveSend:(id)arg1;
- (void)markChatItemAsSaved:(id)arg1;
- (void)markMessageAsRead:(id)arg1;
- (void)markMessagesAsRead:(id)arg1;
- (id)messageAcknowledgmentSummaryForConversationListWithMessage:(id)arg1;
- (unsigned long long)messageCount;
- (unsigned long long)messageFailureCount;
- (id)messageForGUID:(id)arg1;
- (id)messagesToReportAsSpamFromChatItems:(id)arg1;
- (unsigned long long)numberOfMessagesToKeepLoaded;
- (unsigned long long)overallChatStatus;
- (id)participants;
- (id)participantsWithState:(unsigned long long)arg1;
- (unsigned long long)paymentTypeForMessage:(id)arg1;
- (id)persistentID;
- (id)personCentricID;
- (id)pronunciationHint;
- (id)recipient;
- (void)refreshServiceForSending;
- (void)remove;
- (void)removeParticipants:(id)arg1 reason:(id)arg2;
- (void)removeParticipantsFromiMessageChat:(id)arg1 reason:(id)arg2;
- (id)roomName;
- (id)roomNameWithoutSuffix;
- (void)saveWatermark;
- (unsigned long long)scrutinyModeAttemptCount;
- (void)sendCurrentLocationMessage;
- (bool)sendDowngradeNotificationTo:(id)arg1;
- (void)sendDowngradePingForMessage:(id)arg1 manualDowngrade:(bool)arg2;
- (void)sendMessage:(id)arg1;
- (void)sendMessageAcknowledgment:(long long)arg1 forChatItem:(id)arg2 withAssociatedMessageInfo:(id)arg3;
- (void)sendMessageAcknowledgment:(long long)arg1 forChatItem:(id)arg2 withMessageSummaryInfo:(id)arg3;
- (void)sendProgress:(id)arg1 progressDidChange:(float)arg2 sendingMessages:(id)arg3 sendCount:(unsigned long long)arg4 totalCount:(unsigned long long)arg5 finished:(bool)arg6;
- (id)sendProgressDelegate;
- (void)setBizIntent:(id)arg1;
- (void)setContextInfo:(void*)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setForceMMS:(bool)arg1;
- (void)setFrequentReplies:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setHasHadSuccessfulQuery:(bool)arg1;
- (void)setHasSurfRequest:(bool)arg1;
- (void)setInvitationForPendingParticipants:(id)arg1;
- (void)setIsFiltered:(bool)arg1;
- (void)setLastAddressedHandleID:(id)arg1;
- (void)setLastAddressedSIMID:(id)arg1;
- (void)setLatestTypingIndicatorTimeInterval:(double)arg1;
- (void)setLocalUserIsComposing:(id)arg1;
- (void)setLocalUserIsComposing:(id)arg1 typingIndicatorData:(id)arg2;
- (void)setLocalUserIsRecording:(bool)arg1;
- (void)setLocalUserIsTyping:(bool)arg1;
- (void)setNumberOfMessagesToKeepLoaded:(unsigned long long)arg1;
- (void)setPersonCentricID:(id)arg1;
- (void)setRecipient:(id)arg1;
- (void)setRecipient:(id)arg1 locally:(bool)arg2;
- (void)setRoomName:(id)arg1;
- (void)setSendProgressDelegate:(id)arg1;
- (void)setVIP:(bool)arg1;
- (void)setValue:(id)arg1 forChatProperty:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofParticipant:(id)arg3;
- (void)shareLocationUntilDate:(id)arg1;
- (bool)shouldForceToSMS;
- (id)spokenPhrase;
- (void)startTrackingParticipantLocations;
- (unsigned long long)stateForParticipant:(id)arg1;
- (void)stopSharingLocation;
- (void)stopTrackingParticipantLocations;
- (bool)suppressAccountRetargetingForNamedGroupConversation;
- (id)testChatItems;
- (unsigned long long)unreadMessageCount;
- (void)updateChatItemsIfNeeded;
- (void)updateIsFiltered:(bool)arg1;
- (void)updateMessage:(id)arg1;
- (void)updateMessage:(id)arg1 flags:(unsigned long long)arg2;
- (void)updateShouldForceToSMS:(bool)arg1;
- (void)updateWasDetectedAsSMSSpam:(bool)arg1;
- (void)updateWatermarks;
- (void)userToggledReadReceiptSwitch:(bool)arg1;
- (id)valueForChatProperty:(id)arg1;
- (id)valueForProperty:(id)arg1 ofParticipant:(id)arg2;
- (void)verifyChatShouldBeSMSSpam;
- (void)verifyFiltering;
- (id)vocabularyIdentifier;
- (id)watermarkDate;
- (void)watermarkInForScrutinyMode;
- (long long)watermarkMessageID;
- (void)watermarkOutForScrutinyMode;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (unsigned char)associatedMessageContentTypeFromCKMediaType:(int)arg1;
+ (id)configureMessageSummaryInfoForChatItem:(id)arg1;

- (bool)__ck_isMuted;
- (id)__ck_muteUntilDate;
- (void)__ck_saveWatermark;
- (bool)__ck_sendReadReceipts;
- (void)__ck_setMuteUntilDate:(id)arg1;
- (void)__ck_setSendReadReceipts:(bool)arg1;
- (void)__ck_updateWatermarkToMessageID:(long long)arg1 date:(id)arg2;
- (id)__ck_watermarkDate;
- (long long)__ck_watermarkMessageID;
- (void)sendMessageAcknowledgment:(long long)arg1 forChatItem:(id)arg2;

@end
