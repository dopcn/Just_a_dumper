//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BNaviFinishBasicModel.h"

@class BNaviFinishDialogAdvertisement, BNaviFinishDynamicButton, BNaviFinishRightCardModel, BNaviUserGrowthInfo, NSArray;

@interface BNaviFinishNetworkModel : BNaviFinishBasicModel
{
    _Bool _haveNaviTrack;
    BNaviUserGrowthInfo *_userGrowthInfo;
    BNaviFinishRightCardModel *_rightCardInfo;
    NSArray *_adList;
    BNaviFinishDialogAdvertisement *_adDialog;
    long long _timestamp;
    BNaviFinishDynamicButton *_dynamicButton;
}

@property(nonatomic) _Bool haveNaviTrack; // @synthesize haveNaviTrack=_haveNaviTrack;
@property(retain, nonatomic) BNaviFinishDynamicButton *dynamicButton; // @synthesize dynamicButton=_dynamicButton;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) BNaviFinishDialogAdvertisement *adDialog; // @synthesize adDialog=_adDialog;
@property(retain, nonatomic) NSArray *adList; // @synthesize adList=_adList;
@property(retain, nonatomic) BNaviFinishRightCardModel *rightCardInfo; // @synthesize rightCardInfo=_rightCardInfo;
@property(retain, nonatomic) BNaviUserGrowthInfo *userGrowthInfo; // @synthesize userGrowthInfo=_userGrowthInfo;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end

