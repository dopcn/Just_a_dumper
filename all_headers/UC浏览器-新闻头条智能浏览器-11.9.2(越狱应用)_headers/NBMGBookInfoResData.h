//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NBResDataStruct.h"

@class NSString;

@interface NBMGBookInfoResData : NBResDataStruct
{
    NSString *_smallCoverLogo;
    NSString *_price;
    NSString *_chargeMode;
    NSString *_isFree;
    NSString *_isOnShelf;
}

@property(copy, nonatomic) NSString *isOnShelf; // @synthesize isOnShelf=_isOnShelf;
@property(copy, nonatomic) NSString *isFree; // @synthesize isFree=_isFree;
@property(copy, nonatomic) NSString *chargeMode; // @synthesize chargeMode=_chargeMode;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *smallCoverLogo; // @synthesize smallCoverLogo=_smallCoverLogo;
- (void)dealloc;

@end

