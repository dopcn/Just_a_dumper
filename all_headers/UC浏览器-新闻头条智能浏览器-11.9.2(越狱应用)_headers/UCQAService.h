//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UCServicePluginBase.h"

#import "IUSQAProtocol-Protocol.h"

@class NSString;

@interface UCQAService : UCServicePluginBase <IUSQAProtocol>
{
    _Bool _hasNextAnswer;
    _Bool _isAnswerLiked;
    long long _likeCount;
}

@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool isAnswerLiked; // @synthesize isAnswerLiked=_isAnswerLiked;
@property(nonatomic) _Bool hasNextAnswer; // @synthesize hasNextAnswer=_hasNextAnswer;
- (void)notifyMetaInfo:(id)arg1;
- (void)unregisterAsEventHandler:(id)arg1;
- (void)registerAsEventHandler:(id)arg1;
- (void)showQALikeCount:(long long)arg1 isLiked:(_Bool)arg2 hasNext:(_Bool)arg3;
- (void)likeAnswer;
- (void)gotoNextAnswer;
- (long long)answerLikeCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

