//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LMSystemLabel.h"

#import "LMChooseLikeTagCellProtocol-Protocol.h"

@class NSString;

@interface LMSysListLabel : LMSystemLabel <LMChooseLikeTagCellProtocol>
{
    long long _entityCount;
    long long _followCount;
    long long _follow;
    NSString *_cover;
}

@property(copy, nonatomic) NSString *cover; // @synthesize cover=_cover;
@property(nonatomic) long long follow; // @synthesize follow=_follow;
@property(nonatomic) long long followCount; // @synthesize followCount=_followCount;
@property(nonatomic) long long entityCount; // @synthesize entityCount=_entityCount;
- (void).cxx_destruct;
- (unsigned long long)lmChooseLikeTagCell_style;
- (id)lmChooseLikeTagCell_cover;
- (id)lmChooseLikeTagCell_name;
- (id)initWithDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

