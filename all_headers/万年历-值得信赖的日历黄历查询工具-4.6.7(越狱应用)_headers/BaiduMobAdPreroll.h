//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BaiduMobAdPrerollSlot, NSString, UIView;
@protocol BaiduMobAdPrerollDelegate;

@interface BaiduMobAdPreroll : NSObject
{
    _Bool _supportTimeLabel;
    _Bool _supportActImage;
    id <BaiduMobAdPrerollDelegate> _delegate;
    NSString *_publisherId;
    NSString *_adId;
    UIView *_renderBaseView;
    BaiduMobAdPrerollSlot *_slot;
}

@property(retain, nonatomic) BaiduMobAdPrerollSlot *slot; // @synthesize slot=_slot;
@property _Bool supportActImage; // @synthesize supportActImage=_supportActImage;
@property _Bool supportTimeLabel; // @synthesize supportTimeLabel=_supportTimeLabel;
@property(retain, nonatomic) UIView *renderBaseView; // @synthesize renderBaseView=_renderBaseView;
@property(copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(copy, nonatomic) NSString *publisherId; // @synthesize publisherId=_publisherId;
@property(nonatomic) id <BaiduMobAdPrerollDelegate> delegate; // @synthesize delegate=_delegate;
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
- (void)buildCallbackBlock;
- (void)request;
- (void)dealloc;
- (id)init;

@end

