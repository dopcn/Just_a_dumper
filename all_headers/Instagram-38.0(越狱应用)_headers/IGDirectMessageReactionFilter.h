//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectMessageReactionFilter-Protocol.h"

@class IGUser, NSString;

@interface IGDirectMessageReactionFilter : NSObject <IGDirectMessageReactionFilter>
{
    _Bool _like;
    unsigned long long _reactionType;
    IGUser *_user;
}

@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
@property(nonatomic) _Bool like; // @synthesize like=_like;
@property(nonatomic) unsigned long long reactionType; // @synthesize reactionType=_reactionType;
- (void).cxx_destruct;
- (id)filteredReactionsFromReactions:(id)arg1 threadId:(id)arg2;
- (id)initWithUser:(id)arg1 withLike:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

