//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMAdUnitDelegate-Protocol.h"
#import "IMAdUnitViewabliltyDelegate-Protocol.h"

@class IMNativeStrandsAdUnit, NSDictionary, NSString;
@protocol IMNativeStrandsDelegate;

@interface IMNativeStrands : NSObject <IMAdUnitDelegate, IMAdUnitViewabliltyDelegate>
{
    id <IMNativeStrandsDelegate> _delegate;
    NSString *_keywords;
    NSDictionary *_extras;
    IMNativeStrandsAdUnit *_adUnit;
}

@property(retain, nonatomic) IMNativeStrandsAdUnit *adUnit; // @synthesize adUnit=_adUnit;
@property(retain, nonatomic) NSDictionary *extras; // @synthesize extras=_extras;
@property(retain, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(nonatomic) __weak id <IMNativeStrandsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)imAdUnitClicked:(id)arg1;
- (void)imAdUnitViewablilityTracked:(id)arg1;
- (void)ad:(id)arg1 rewardActionCompletedWithRewards:(id)arg2;
- (void)ad:(id)arg1 didInteractWithParams:(id)arg2;
- (void)adDidDismissScreen:(id)arg1;
- (void)adWillDismissScreen:(id)arg1;
- (void)adDidPresentScreen:(id)arg1;
- (void)adWillPresentScreen:(id)arg1;
- (void)adDidLeaveApplication:(id)arg1;
- (void)ad:(id)arg1 didFailToLoadWithErrorCode:(int)arg2 andDescription:(id)arg3;
- (void)adDidFinishLoad:(id)arg1;
- (struct CGSize)strandsViewSize;
- (void)recycleView;
- (id)strandsView;
- (void)load;
- (id)initWithPlacementId:(long long)arg1;
- (id)initWithPlacementId:(long long)arg1 position:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

