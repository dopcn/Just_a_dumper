//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BaiduMobAdFeedSlot, NSMutableArray, NSNumber, NSString;
@protocol BaiduMobAdNativeAdDelegate;

@interface BaiduMobAdNative : NSObject
{
    NSString *_publisherId;
    NSString *_adId;
    id <BaiduMobAdNativeAdDelegate> _delegate;
    NSNumber *_height;
    NSNumber *_width;
    BaiduMobAdFeedSlot *_slot;
    NSMutableArray *_adViewArray;
    NSMutableArray *_successArray;
}

@property(retain, nonatomic) NSMutableArray *successArray; // @synthesize successArray=_successArray;
@property(retain, nonatomic) NSMutableArray *adViewArray; // @synthesize adViewArray=_adViewArray;
@property(retain, nonatomic) BaiduMobAdFeedSlot *slot; // @synthesize slot=_slot;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(nonatomic) id <BaiduMobAdNativeAdDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(copy, nonatomic) NSString *publisherId; // @synthesize publisherId=_publisherId;
- (void).cxx_destruct;
- (id)userOtherAttributes;
- (id)userHobbies;
- (long long)userSalary;
- (long long)userEducation;
- (id)userWork;
- (id)userPostalCode;
- (id)userCity;
- (id)userBirthday;
- (int)userGender;
- (id)keywords;
- (_Bool)enableLocation;
- (id)channelId;
- (id)buildSlotInfo:(id)arg1;
- (id)AdWithCustomEventInfo:(id)arg1;
- (void)callbackAdFailLoad:(int)arg1;
- (void)callbackAdObjectsSuccessLoad:(id)arg1;
- (void)buildCallbackBlock;
- (void)start;
- (void)requestNativeAds;
- (void)dealloc;
- (id)init;

@end

