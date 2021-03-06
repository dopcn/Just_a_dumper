//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseModule.h"

@class NSString, TPKHPXOrderService, TPKHPXReserveRequirement;

@interface TPKHPXBookRequireModule : GCBaseModule
{
    TPKHPXOrderService *_service;
    NSString *_stid;
    NSString *_convertTrack;
    TPKHPXReserveRequirement *_bookRequirement;
}

@property(retain, nonatomic) TPKHPXReserveRequirement *bookRequirement; // @synthesize bookRequirement=_bookRequirement;
@property(copy, nonatomic) NSString *convertTrack; // @synthesize convertTrack=_convertTrack;
@property(copy, nonatomic) NSString *stid; // @synthesize stid=_stid;
@property(retain, nonatomic) TPKHPXOrderService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)postAlertWithErrorMessage:(id)arg1;
- (void)loadPromotion:(id)arg1;
- (id)loadPromotionData;
- (void)loadBookRequire:(id)arg1;
- (id)loadData;
- (void)setupModule;

@end

