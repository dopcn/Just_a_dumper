//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCIMBaseMessageItem.h"

@class NSString;

@interface TBCPPAwardInfoItem : TBCIMBaseMessageItem
{
    NSString *_drawResType;
    NSString *_link;
    NSString *_awardImgsrc;
    NSString *_bsize;
    NSString *_awardDes;
    NSString *_awardId;
}

@property(copy, nonatomic) NSString *awardId; // @synthesize awardId=_awardId;
@property(copy, nonatomic) NSString *awardDes; // @synthesize awardDes=_awardDes;
@property(copy, nonatomic) NSString *bsize; // @synthesize bsize=_bsize;
@property(copy, nonatomic) NSString *awardImgsrc; // @synthesize awardImgsrc=_awardImgsrc;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *drawResType; // @synthesize drawResType=_drawResType;
- (id)init;
- (void)dealloc;

@end

