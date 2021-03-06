//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL, Routable;

@interface YDIDeepLinker : NSObject
{
    Routable *_router;
    NSDictionary *_mappablePaths;
    CDUnknownBlockType _dictBlock;
    CDUnknownBlockType _ocrBlock;
    CDUnknownBlockType _vistaBlock;
    CDUnknownBlockType _vistaArticleBlock;
    CDUnknownBlockType _vistaStyleBlock;
    CDUnknownBlockType _vistaEntranceBlock;
    CDUnknownBlockType _quizLiveBlock;
    CDUnknownBlockType _styleSubscribeBlock;
    CDUnknownBlockType _baikeBlock;
    CDUnknownBlockType _translateBlock;
    CDUnknownBlockType _discoveryBlock;
    CDUnknownBlockType _wordbookBlock;
    CDUnknownBlockType _socialBlock;
    CDUnknownBlockType _webBlock;
    CDUnknownBlockType _voiceTransBlock;
    CDUnknownBlockType _xuetangIAPBlock;
    CDUnknownBlockType _xuetangLiveBlock;
    CDUnknownBlockType _xuetangOrderBlock;
    CDUnknownBlockType _messageReplyBlock;
    CDUnknownBlockType _messageLikeBlock;
    CDUnknownBlockType _messageNotificationBlock;
    CDUnknownBlockType _coinAccountBlock;
    NSURL *_URL;
    NSString *_sourceApplication;
}

+ (id)sharedLinker;
@property(copy, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) CDUnknownBlockType coinAccountBlock; // @synthesize coinAccountBlock=_coinAccountBlock;
@property(copy, nonatomic) CDUnknownBlockType messageNotificationBlock; // @synthesize messageNotificationBlock=_messageNotificationBlock;
@property(copy, nonatomic) CDUnknownBlockType messageLikeBlock; // @synthesize messageLikeBlock=_messageLikeBlock;
@property(copy, nonatomic) CDUnknownBlockType messageReplyBlock; // @synthesize messageReplyBlock=_messageReplyBlock;
@property(copy, nonatomic) CDUnknownBlockType xuetangOrderBlock; // @synthesize xuetangOrderBlock=_xuetangOrderBlock;
@property(copy, nonatomic) CDUnknownBlockType xuetangLiveBlock; // @synthesize xuetangLiveBlock=_xuetangLiveBlock;
@property(copy, nonatomic) CDUnknownBlockType xuetangIAPBlock; // @synthesize xuetangIAPBlock=_xuetangIAPBlock;
@property(copy, nonatomic) CDUnknownBlockType voiceTransBlock; // @synthesize voiceTransBlock=_voiceTransBlock;
@property(copy, nonatomic) CDUnknownBlockType webBlock; // @synthesize webBlock=_webBlock;
@property(copy, nonatomic) CDUnknownBlockType socialBlock; // @synthesize socialBlock=_socialBlock;
@property(copy, nonatomic) CDUnknownBlockType wordbookBlock; // @synthesize wordbookBlock=_wordbookBlock;
@property(copy, nonatomic) CDUnknownBlockType discoveryBlock; // @synthesize discoveryBlock=_discoveryBlock;
@property(copy, nonatomic) CDUnknownBlockType translateBlock; // @synthesize translateBlock=_translateBlock;
@property(copy, nonatomic) CDUnknownBlockType baikeBlock; // @synthesize baikeBlock=_baikeBlock;
@property(copy, nonatomic) CDUnknownBlockType styleSubscribeBlock; // @synthesize styleSubscribeBlock=_styleSubscribeBlock;
@property(copy, nonatomic) CDUnknownBlockType quizLiveBlock; // @synthesize quizLiveBlock=_quizLiveBlock;
@property(copy, nonatomic) CDUnknownBlockType vistaEntranceBlock; // @synthesize vistaEntranceBlock=_vistaEntranceBlock;
@property(copy, nonatomic) CDUnknownBlockType vistaStyleBlock; // @synthesize vistaStyleBlock=_vistaStyleBlock;
@property(copy, nonatomic) CDUnknownBlockType vistaArticleBlock; // @synthesize vistaArticleBlock=_vistaArticleBlock;
@property(copy, nonatomic) CDUnknownBlockType vistaBlock; // @synthesize vistaBlock=_vistaBlock;
@property(copy, nonatomic) CDUnknownBlockType ocrBlock; // @synthesize ocrBlock=_ocrBlock;
@property(copy, nonatomic) CDUnknownBlockType dictBlock; // @synthesize dictBlock=_dictBlock;
@property(retain, nonatomic) NSDictionary *mappablePaths; // @synthesize mappablePaths=_mappablePaths;
@property(retain, nonatomic) Routable *router; // @synthesize router=_router;
- (void).cxx_destruct;
- (_Bool)handleOtherURL:(id)arg1;
- (_Bool)handleExternalURL:(id)arg1;
- (_Bool)handleYoudaoURL:(id)arg1 fromApplication:(id)arg2;
- (void)cleanNavigationController:(id)arg1;
- (id)linkingStringFromOpeningURL:(id)arg1;
- (id)addMappingPaths;
- (void)addMappingRules;
- (void)setURLBlocks;
- (void)handleNotification:(id)arg1;
- (_Bool)delayOpenURL:(id)arg1 fromApplication:(id)arg2;
- (_Bool)handleOpenURL:(id)arg1 fromApplication:(id)arg2;
- (void)setNavController:(id)arg1;
- (id)init;

@end

