//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MHBeautyBaseObject.h"

@class NSString;

@interface MHSuccessWithDrawModel : MHBeautyBaseObject
{
    NSString *_applyDateTime;
    NSString *_withdrawAccount;
    NSString *_withdrawCount;
    NSString *_withdrawType;
    NSString *_withdrawUserName;
    NSString *_b_withdrawType;
}

@property(copy, nonatomic) NSString *b_withdrawType; // @synthesize b_withdrawType=_b_withdrawType;
@property(copy, nonatomic) NSString *withdrawUserName; // @synthesize withdrawUserName=_withdrawUserName;
@property(copy, nonatomic) NSString *withdrawType; // @synthesize withdrawType=_withdrawType;
@property(copy, nonatomic) NSString *withdrawCount; // @synthesize withdrawCount=_withdrawCount;
@property(copy, nonatomic) NSString *withdrawAccount; // @synthesize withdrawAccount=_withdrawAccount;
@property(copy, nonatomic) NSString *applyDateTime; // @synthesize applyDateTime=_applyDateTime;
- (void).cxx_destruct;

@end

