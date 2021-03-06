//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APSAdExtraInfo, APSSpecialAdInfo, NSString;

@interface APSCommonAdItem : NSObject
{
    NSString *adId;
    long long adIndex;
    NSString *mediaFileURL;
    long long mediaFileType;
    long long clickShowType;
    long long duration;
    NSString *adJSONStr;
    APSSpecialAdInfo *specialInfo;
    NSString *AdParameters;
    APSAdExtraInfo *extraInfo;
    long long azType;
    NSString *message;
    NSString *specialCreativeType;
    _Bool isSAPC;
    long long adshowIndex;
    int vastTag;
    int adTag;
    _Bool hasProgressTracking;
    NSString *adClickTracking;
    NSString *adClickThrough;
}

@property(nonatomic) _Bool hasProgressTracking; // @synthesize hasProgressTracking;
@property(nonatomic) int adTag; // @synthesize adTag;
@property(nonatomic) int vastTag; // @synthesize vastTag;
@property(nonatomic) long long adshowIndex; // @synthesize adshowIndex;
@property(nonatomic) _Bool isSAPC; // @synthesize isSAPC;
@property(retain, nonatomic) NSString *adClickThrough; // @synthesize adClickThrough;
@property(retain, nonatomic) NSString *adClickTracking; // @synthesize adClickTracking;
@property(retain, nonatomic) NSString *specialCreativeType; // @synthesize specialCreativeType;
@property(retain, nonatomic) NSString *message; // @synthesize message;
@property(nonatomic) long long azType; // @synthesize azType;
@property(nonatomic) long long clickShowType; // @synthesize clickShowType;
@property(retain, nonatomic) APSSpecialAdInfo *specialInfo; // @synthesize specialInfo;
@property(copy, nonatomic) NSString *adJSONStr; // @synthesize adJSONStr;
@property(copy, nonatomic) NSString *mediaFileURL; // @synthesize mediaFileURL;
@property(nonatomic) long long mediaFileType; // @synthesize mediaFileType;
@property(retain, nonatomic) APSAdExtraInfo *extraInfo; // @synthesize extraInfo;
@property(nonatomic) long long adIndex; // @synthesize adIndex;
@property(copy, nonatomic) NSString *AdParameters; // @synthesize AdParameters;
@property(copy, nonatomic) NSString *adId; // @synthesize adId;
@property(nonatomic) long long duration; // @synthesize duration;
- (void).cxx_destruct;
- (id)getClickThroughURL;

@end

