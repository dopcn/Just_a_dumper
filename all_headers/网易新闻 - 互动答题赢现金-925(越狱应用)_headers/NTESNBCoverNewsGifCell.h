//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NTESNBCoverNewsOrdinaryCell.h"

#import "NTESNBGIFPlayerViewDelegate-Protocol.h"

@class NSString, NTESNBAdInfo, NTESNBGIFPlayerView;

@interface NTESNBCoverNewsGifCell : NTESNBCoverNewsOrdinaryCell <NTESNBGIFPlayerViewDelegate>
{
    NTESNBAdInfo *_adInfo;
    NTESNBGIFPlayerView *_gifPlayerView;
}

@property(retain, nonatomic) NTESNBGIFPlayerView *gifPlayerView; // @synthesize gifPlayerView=_gifPlayerView;
@property(retain, nonatomic) NTESNBAdInfo *adInfo; // @synthesize adInfo=_adInfo;
- (void).cxx_destruct;
- (void)updateColorTheme;
- (void)gifPlayerWillStartPlayingGIFImage:(id)arg1;
- (void)cellDidEndDisplay;
- (void)fillDataWithViewModel:(id)arg1 atIndexPath:(id)arg2;
- (void)resetCellStatus;
- (void)layoutSubviews;
- (void)setupViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

