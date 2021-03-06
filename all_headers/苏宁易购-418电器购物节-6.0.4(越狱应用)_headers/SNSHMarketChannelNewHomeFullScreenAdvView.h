//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SNUIImageViewExDelegate-Protocol.h"

@class NSString, SNSHCMSModuleDTO, SNUIImageViewEx, UIButton;
@protocol SNSHMarketChannelNewHomeFullScreenAdvViewDelegate;

@interface SNSHMarketChannelNewHomeFullScreenAdvView : UIView <SNUIImageViewExDelegate>
{
    id <SNSHMarketChannelNewHomeFullScreenAdvViewDelegate> _delegate;
    SNUIImageViewEx *_advImageView;
    UIButton *_closeBtn;
    SNSHCMSModuleDTO *_moduleDto;
}

@property(retain, nonatomic) SNSHCMSModuleDTO *moduleDto; // @synthesize moduleDto=_moduleDto;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) SNUIImageViewEx *advImageView; // @synthesize advImageView=_advImageView;
@property(nonatomic) __weak id <SNSHMarketChannelNewHomeFullScreenAdvViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)imageExViewDidOk:(id)arg1;
- (void)closeBtnClick:(id)arg1;
- (void)updateWithFloorDTO:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

