//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FAModel.h"

@class NSArray, NSString;

@interface FALCPKModeInfo : FAModel
{
    _Bool _widget;
    NSString *_name;
    NSString *_logoMobile;
    NSArray *_stageList;
    long long _starGift;
    long long _pkDuration;
    long long _chooseDuration;
    long long _punishDuration;
}

@property(nonatomic) _Bool widget; // @synthesize widget=_widget;
@property(nonatomic) long long punishDuration; // @synthesize punishDuration=_punishDuration;
@property(nonatomic) long long chooseDuration; // @synthesize chooseDuration=_chooseDuration;
@property(nonatomic) long long pkDuration; // @synthesize pkDuration=_pkDuration;
@property(nonatomic) long long starGift; // @synthesize starGift=_starGift;
@property(retain, nonatomic) NSArray *stageList; // @synthesize stageList=_stageList;
@property(copy, nonatomic) NSString *logoMobile; // @synthesize logoMobile=_logoMobile;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

