//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

#import "OSSCommonCouponItemProtocol-Protocol.h"

@class NSString;

@interface NVModelBaseMTOVIndexCouponItem : NVBaseModel <OSSCommonCouponItemProtocol>
{
    NSString *_useUrl;
    NSString *_receivedCount;
    NSString *_buttonText;
    NSString *_detailUrl;
    long long _couponId;
    NSString *_title;
    NSString *_pic;
    NSString *_introduction;
    NSString *_promotionInfo;
    NSString *_poiCategory;
    NSString *_cornerImg;
    long long _status;
}

+ (id)metaInfo;
+ (void)oss_handleReceiveCouponID:(long long)arg1 referer:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *cornerImg; // @synthesize cornerImg=_cornerImg;
@property(copy, nonatomic) NSString *poiCategory; // @synthesize poiCategory=_poiCategory;
@property(copy, nonatomic) NSString *promotionInfo; // @synthesize promotionInfo=_promotionInfo;
@property(copy, nonatomic) NSString *introduction; // @synthesize introduction=_introduction;
@property(copy, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long couponId; // @synthesize couponId=_couponId;
@property(copy, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *receivedCount; // @synthesize receivedCount=_receivedCount;
@property(copy, nonatomic) NSString *useUrl; // @synthesize useUrl=_useUrl;
- (void).cxx_destruct;
- (id)oss_couponItemStatisticsViewInfo;
- (long long)oss_couponStatus;
- (id)oss_couponButtonText;
- (id)oss_couponReceivedStateText;
- (id)oss_couponCornerText;
- (id)oss_couponBrief;
- (id)oss_couponPromotion;
- (id)oss_couponTitle;
- (id)oss_couponImageURLString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

