//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNSHCommonFloorCell.h"

#import "SNUIImageViewExDelegate-Protocol.h"

@class NSString, SNSHCMSFloorDTO, SNSHCMSModuleDTO, SNUIImageViewEx;
@protocol SNSHHomeFloorDelegate;

@interface SNSHPhoneMobl1r3g2Cell : SNSHCommonFloorCell <SNUIImageViewExDelegate>
{
    SNUIImageViewEx *_bgImgV;
    SNUIImageViewEx *_verticalImg1;
    SNUIImageViewEx *_verticalImg2;
    SNUIImageViewEx *_horizonImg1;
    SNUIImageViewEx *_horizonImg2;
    SNSHCMSFloorDTO *_floorDTO;
    SNSHCMSModuleDTO *_bgModuleDTO;
    id <SNSHHomeFloorDelegate> _delegate;
}

@property(nonatomic) __weak id <SNSHHomeFloorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SNSHCMSModuleDTO *bgModuleDTO; // @synthesize bgModuleDTO=_bgModuleDTO;
@property(retain, nonatomic) SNSHCMSFloorDTO *floorDTO; // @synthesize floorDTO=_floorDTO;
@property(retain, nonatomic) SNUIImageViewEx *horizonImg2; // @synthesize horizonImg2=_horizonImg2;
@property(retain, nonatomic) SNUIImageViewEx *horizonImg1; // @synthesize horizonImg1=_horizonImg1;
@property(retain, nonatomic) SNUIImageViewEx *verticalImg2; // @synthesize verticalImg2=_verticalImg2;
@property(retain, nonatomic) SNUIImageViewEx *verticalImg1; // @synthesize verticalImg1=_verticalImg1;
@property(retain, nonatomic) SNUIImageViewEx *bgImgV; // @synthesize bgImgV=_bgImgV;
- (void).cxx_destruct;
- (void)imageExViewDidOk:(id)arg1;
- (void)updateWithFloorDTO:(id)arg1 bgModuleDTO:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

