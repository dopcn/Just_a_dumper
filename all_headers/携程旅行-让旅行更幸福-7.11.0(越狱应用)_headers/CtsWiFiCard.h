//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CtsLeftSwipeCell.h"

#import "CTImageViewDelegate-Protocol.h"
#import "CTSCardOperationViewDelegate-Protocol.h"

@class CTImageView, CtsBaseLabel, NSString;

@interface CtsWiFiCard : CtsLeftSwipeCell <CTSCardOperationViewDelegate, CTImageViewDelegate>
{
    CtsBaseLabel *_titleLabel;
    CtsBaseLabel *_subtitleTipLabel;
    CtsBaseLabel *_subtitleLabel;
    CtsBaseLabel *_subtitle2TipLabel;
    CtsBaseLabel *_subtitle2Label;
    CTImageView *_logoImageView;
}

@property(retain, nonatomic) CTImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) CtsBaseLabel *subtitle2Label; // @synthesize subtitle2Label=_subtitle2Label;
@property(retain, nonatomic) CtsBaseLabel *subtitle2TipLabel; // @synthesize subtitle2TipLabel=_subtitle2TipLabel;
@property(retain, nonatomic) CtsBaseLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) CtsBaseLabel *subtitleTipLabel; // @synthesize subtitleTipLabel=_subtitleTipLabel;
@property(retain, nonatomic) CtsBaseLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)imageViewLoadImageSucceed:(id)arg1;
- (void)_layout;
- (void)setContentWithDataSource:(id)arg1 indexPath:(id)arg2 delegate:(id)arg3;
- (void)initConstraints;
- (void)initView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

