//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTMBaseView.h"

@class NMNaviPoiPopupView, UIButton, UILabel, UIView;

@interface NMNaviPoiPopupViewCell : LTMBaseView
{
    UILabel *_poiNameLabel;
    UILabel *_poiAdressLabel;
    UIButton *_intermediatePointBtn;
    UIButton *_terminalPointBtn;
    UIView *_midLineView;
    UIView *_btnSepLineView;
    _Bool _hasTerminal;
    NMNaviPoiPopupView *_popupView;
}

@property(nonatomic) __weak NMNaviPoiPopupView *popupView; // @synthesize popupView=_popupView;
@property(nonatomic) _Bool hasTerminal; // @synthesize hasTerminal=_hasTerminal;
- (void).cxx_destruct;
- (void)buttonClicked:(id)arg1;
- (void)updatePoiPopupViewCellInfo:(id)arg1;
- (void)layoutToPortraitSize;
- (void)updateToLandscapeSize;
- (void)updateToPortraitSize;
- (void)updateNMTheme;
- (void)initUI;
- (id)init;

@end

