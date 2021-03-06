//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IYWConversationService-Protocol.h"
#import "YWFetchedResultsControllerDelegate-Protocol.h"
#import "YWServiceImplProtocol-Protocol.h"

@class NSArray, NSMutableDictionary, NSRecursiveLock, NSString, WXBlockContainer, WXLRUCache, WXOpenIMMessageFilter, WXPriorityDelegateContainer, YWFetchedResultsController, YWIMCore, YWPredicate;

@interface WXOConversationServiceImpl : NSObject <YWFetchedResultsControllerDelegate, YWServiceImplProtocol, IYWConversationService>
{
    _Bool _disableInputStatus;
    _Bool _enableMessageReadFlag;
    unsigned long long _countOfUnreadMessages;
    unsigned long long _unreadMessagesCountingMode;
    NSArray *_supportedConversationTypes;
    CDUnknownBlockType _systemDisplayUpdateBlock;
    NSArray *_customConversationClasses;
    YWFetchedResultsController *_ywFetchedResultsController;
    WXOpenIMMessageFilter *_messageFilter;
    CDUnknownBlockType _resetContentBlock;
    CDUnknownBlockType _willChangeContentBlock;
    CDUnknownBlockType _didChangeContentBlock;
    CDUnknownBlockType _objectDidChangeBlock;
    YWIMCore *_imCore;
    CDUnknownBlockType _conversationChangedBlock;
    WXBlockContainer *_blockContainerConversationChangedBlock;
    CDUnknownBlockType _totalUnreadChangedBlock;
    WXBlockContainer *_blockContainerTotalUnreadChangedBlock;
    CDUnknownBlockType _conversationInputStatusBlock;
    WXBlockContainer *_blockContainerInputStatusChangedBlock;
    WXLRUCache *_onlineStatusCache;
    NSMutableDictionary *_requestOnlineStatusBlockDict;
    NSMutableDictionary *_personContainerDict;
    NSMutableDictionary *_observerPersonsDict;
    NSRecursiveLock *_onlineStatusUpdateLock;
    NSRecursiveLock *_onlineStatusChangeLock;
    NSRecursiveLock *_onlineStatusObseverLock;
    NSMutableDictionary *_readFlagToBeSent;
    NSMutableDictionary *_readFlagHasNotSucceed;
    WXPriorityDelegateContainer *_messageLifeDelegateContainer;
    YWPredicate *_predicate;
    NSMutableDictionary *_needLocalPushMsgDic;
}

@property(retain, nonatomic) NSMutableDictionary *needLocalPushMsgDic; // @synthesize needLocalPushMsgDic=_needLocalPushMsgDic;
@property(retain, nonatomic) YWPredicate *predicate; // @synthesize predicate=_predicate;
@property(retain, nonatomic) WXPriorityDelegateContainer *messageLifeDelegateContainer; // @synthesize messageLifeDelegateContainer=_messageLifeDelegateContainer;
@property(retain, nonatomic) NSMutableDictionary *readFlagHasNotSucceed; // @synthesize readFlagHasNotSucceed=_readFlagHasNotSucceed;
@property(retain, nonatomic) NSMutableDictionary *readFlagToBeSent; // @synthesize readFlagToBeSent=_readFlagToBeSent;
@property(retain, nonatomic) NSRecursiveLock *onlineStatusObseverLock; // @synthesize onlineStatusObseverLock=_onlineStatusObseverLock;
@property(retain, nonatomic) NSRecursiveLock *onlineStatusChangeLock; // @synthesize onlineStatusChangeLock=_onlineStatusChangeLock;
@property(retain, nonatomic) NSRecursiveLock *onlineStatusUpdateLock; // @synthesize onlineStatusUpdateLock=_onlineStatusUpdateLock;
@property(retain, nonatomic) NSMutableDictionary *observerPersonsDict; // @synthesize observerPersonsDict=_observerPersonsDict;
@property(retain, nonatomic) NSMutableDictionary *personContainerDict; // @synthesize personContainerDict=_personContainerDict;
@property(retain, nonatomic) NSMutableDictionary *requestOnlineStatusBlockDict; // @synthesize requestOnlineStatusBlockDict=_requestOnlineStatusBlockDict;
@property(retain, nonatomic) WXLRUCache *onlineStatusCache; // @synthesize onlineStatusCache=_onlineStatusCache;
@property(retain, nonatomic) WXBlockContainer *blockContainerInputStatusChangedBlock; // @synthesize blockContainerInputStatusChangedBlock=_blockContainerInputStatusChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType conversationInputStatusBlock; // @synthesize conversationInputStatusBlock=_conversationInputStatusBlock;
@property(retain, nonatomic) WXBlockContainer *blockContainerTotalUnreadChangedBlock; // @synthesize blockContainerTotalUnreadChangedBlock=_blockContainerTotalUnreadChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType totalUnreadChangedBlock; // @synthesize totalUnreadChangedBlock=_totalUnreadChangedBlock;
@property(retain, nonatomic) WXBlockContainer *blockContainerConversationChangedBlock; // @synthesize blockContainerConversationChangedBlock=_blockContainerConversationChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType conversationChangedBlock; // @synthesize conversationChangedBlock=_conversationChangedBlock;
@property(nonatomic) __weak YWIMCore *imCore; // @synthesize imCore=_imCore;
@property(copy, nonatomic) CDUnknownBlockType objectDidChangeBlock; // @synthesize objectDidChangeBlock=_objectDidChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType didChangeContentBlock; // @synthesize didChangeContentBlock=_didChangeContentBlock;
@property(copy, nonatomic) CDUnknownBlockType willChangeContentBlock; // @synthesize willChangeContentBlock=_willChangeContentBlock;
@property(copy, nonatomic) CDUnknownBlockType resetContentBlock; // @synthesize resetContentBlock=_resetContentBlock;
@property(retain, nonatomic) WXOpenIMMessageFilter *messageFilter; // @synthesize messageFilter=_messageFilter;
@property(copy, nonatomic) NSArray *customConversationClasses; // @synthesize customConversationClasses=_customConversationClasses;
@property(copy, nonatomic) CDUnknownBlockType systemDisplayUpdateBlock; // @synthesize systemDisplayUpdateBlock=_systemDisplayUpdateBlock;
@property(nonatomic) _Bool enableMessageReadFlag; // @synthesize enableMessageReadFlag=_enableMessageReadFlag;
@property(readonly, nonatomic) _Bool disableInputStatus; // @synthesize disableInputStatus=_disableInputStatus;
@property(retain, nonatomic) NSArray *supportedConversationTypes; // @synthesize supportedConversationTypes=_supportedConversationTypes;
@property(nonatomic) unsigned long long unreadMessagesCountingMode; // @synthesize unreadMessagesCountingMode=_unreadMessagesCountingMode;
@property(nonatomic) unsigned long long countOfUnreadMessages; // @synthesize countOfUnreadMessages=_countOfUnreadMessages;
- (void).cxx_destruct;
- (void)setMessageFilterDelegate:(id)arg1;
@property(nonatomic) _Bool disableConversationGroup;
- (void)markConversationAsChanged:(id)arg1;
@property(readonly, nonatomic) unsigned long long countOfFetchedObjects;
@property(readonly, nonatomic) NSArray *fetchedObjects;
- (id)indexPathForObject:(id)arg1;
- (id)objectAtIndexPath:(id)arg1;
- (void)controllerDidResetContent:(id)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerWillChangeContent:(id)arg1;
@property(readonly, nonatomic) YWFetchedResultsController *ywFetchedResultsController; // @synthesize ywFetchedResultsController=_ywFetchedResultsController;
- (id)getMessageCanRevokeTime;
- (void)_sendRequestDict:(id)arg1;
- (void)_setMessageReadOnServer;
- (_Bool)shouldMergeRequest;
- (void)_deleteMessageInfoDict:(id)arg1;
- (void)_mergeMessageInfoDict:(id)arg1 inToDestDict:(id)arg2;
- (void)setMessageReadOnServer:(id)arg1;
- (void)setDisableInputStatus:(_Bool)arg1;
- (id)getLastEHelper:(id)arg1;
- (void)sendUserInputStatus:(long long)arg1 forConversation:(id)arg2;
- (id)messageLifeDelegatesArray;
- (void)removeMessageLifeDelegate:(id)arg1;
- (void)addMessageLifeDelegate:(id)arg1 forPriority:(unsigned long long)arg2;
- (void)asyncMarkAllConversationAsReadExcept:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)asyncMarkAllConversationAsRead:(CDUnknownBlockType)arg1;
- (id)bridgeMessageFromManagedObject:(id)arg1;
- (id)fetchAllConversationWithConversationTypes:(id)arg1;
- (id)fetchAllP2PConversation;
- (id)fetchAllConversation;
- (void)asyncFetchAllConversationsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)asyncRemoveAllConversationAndMessageExcept:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)asyncRemoveAllConversationAndMessage:(CDUnknownBlockType)arg1;
- (_Bool)removeConversationByConversationId:(id)arg1 error:(id *)arg2;
- (id)convertConversationsFromWWSessions:(id)arg1;
- (id)fetchConversationByConversationId:(id)arg1;
- (void)removeOnNewMessageBlockForKey:(id)arg1;
- (void)addOnNewMessageBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2 ofPriority:(unsigned long long)arg3;
- (void)receiveFlagChanged:(id)arg1;
- (void)conversationInputStatusChange:(id)arg1;
- (void)removeConversationInputStatusChangeBlockForPerson:(id)arg1;
- (void)addConversationInputStatusChangeBlock:(CDUnknownBlockType)arg1 forPerson:(id)arg2 ofPriority:(unsigned long long)arg3;
- (void)removeOnNewMessageBlockV2ForKey:(id)arg1;
- (void)addOnNewMessageBlockV2:(CDUnknownBlockType)arg1 forKey:(id)arg2 ofPriority:(unsigned long long)arg3;
- (void)removeConversationTotalUnreadChangedBlockForKey:(id)arg1;
- (void)addConversationTotalUnreadChangedBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2 ofPriority:(unsigned long long)arg3;
- (void)removeConversationChangedBlockForKey:(id)arg1;
- (void)addConversationChangedBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2 ofPriority:(unsigned long long)arg3;
- (void)_deinitForLocalPush;
- (void)_onSentNormalAckForLocalPush:(id)arg1;
- (void)_onEnterForegroundForLocalPush:(id)arg1;
- (void)_issueMessageForLocalPush:(id)arg1;
- (void)_initForLocalPush;
- (id)_fetchAndRemoveTmpMsgForLocalPushWithMessageId:(id)arg1 conversationType:(long long)arg2;
- (void)_saveTmpMsgForLocalPush:(id)arg1;
- (id)_msgs4ConvType:(long long)arg1;
- (_Bool)_needAlertForMessage:(id)arg1 isOffline:(_Bool)arg2 sourceDescription:(id)arg3;
- (id)_makeLocalPushSummaryForMessage:(id)arg1;
- (void)_autoResendLatestFailedMessages;
- (void)_callConversationChangedBlockWithFRC:(id)arg1;
- (void)_updateTotalUnreadIfNeeded:(id)arg1;
- (id)_fetchAllWWSessions;
- (id)DBModelForConversationsWithPredicate:(id)arg1;
- (id)makeFetchedResultsControllerWithPredicate:(id)arg1;
- (id)makeFetchedResultsController;
- (void)resetFetchedResultsController:(id)arg1 withPredicate:(id)arg2;
- (void)resetFetchedResultsController:(id)arg1 withPredicate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_requestForWWSessionsOfConversationTypes:(id)arg1 andPredicateWithSubpredicate:(id)arg2 subpredicateIdentifier:(id)arg3 getCacheIdentifier:(id *)arg4;
- (long long)maxConversationsLoadCount;
- (id)_requestForWWSessionsOfConversationTypes:(id)arg1;
- (void)dbLoaded:(id)arg1;
- (void)onSentNormalAck:(id)arg1;
- (void)onEnterForeground:(id)arg1;
- (void)_removeObservers;
- (void)_addObservers;
- (void)dealloc;
- (id)initWithModularRef:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

