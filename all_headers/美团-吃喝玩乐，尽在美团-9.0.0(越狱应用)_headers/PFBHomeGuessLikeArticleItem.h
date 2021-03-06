//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTTableViewItem.h"

#import "PFBHomeGuessLikeItemProtocol-Protocol.h"

@class NSString, PFBHomeGuessLikeArticleInfo;

@interface PFBHomeGuessLikeArticleItem : MTTableViewItem <PFBHomeGuessLikeItemProtocol>
{
    _Bool hideSeparatorLine;
    _Bool shown;
    CDUnknownBlockType visibleTrackBlock;
    PFBHomeGuessLikeArticleInfo *_info;
    double _titleHeight;
}

+ (id)itemWithGuessLikeInfo:(id)arg1;
@property(nonatomic) double titleHeight; // @synthesize titleHeight=_titleHeight;
@property(retain, nonatomic) PFBHomeGuessLikeArticleInfo *info; // @synthesize info=_info;
@property(copy, nonatomic) CDUnknownBlockType visibleTrackBlock; // @synthesize visibleTrackBlock;
@property(nonatomic) _Bool shown; // @synthesize shown;
@property(nonatomic) _Bool hideSeparatorLine; // @synthesize hideSeparatorLine;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

