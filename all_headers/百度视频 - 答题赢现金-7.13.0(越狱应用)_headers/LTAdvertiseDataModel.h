//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APSCommonAdItem, NSString;

@interface LTAdvertiseDataModel : NSObject
{
    NSString *_adId;
    long long _adType;
    NSString *_title;
    long long _adClickEventType;
    NSString *_playUrl;
    NSString *_clickUrl;
    double _duration;
    NSString *_pid;
    NSString *_vid;
    APSCommonAdItem *_apsAdItem;
}

@property(retain, nonatomic) APSCommonAdItem *apsAdItem; // @synthesize apsAdItem=_apsAdItem;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *clickUrl; // @synthesize clickUrl=_clickUrl;
@property(copy, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(nonatomic) long long adClickEventType; // @synthesize adClickEventType=_adClickEventType;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long adType; // @synthesize adType=_adType;
@property(copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
- (void).cxx_destruct;
- (id)initWithAPSCommonAdItem:(id)arg1;

@end

