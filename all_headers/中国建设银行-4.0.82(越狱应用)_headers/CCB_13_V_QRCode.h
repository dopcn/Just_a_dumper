//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBView.h"

@class CCBButton, CCBImageView, CCBLabel, NSString, UIImage;
@protocol CCB_13_V_QRCodeDelegate;

@interface CCB_13_V_QRCode : CCBView
{
    _Bool _constraintsUpdated;
    NSString *_qrString;
    id <CCB_13_V_QRCodeDelegate> _delegate;
    CCBLabel *_titleLabel;
    CCBButton *_closeButton;
    CCBLabel *_tipsLabel;
    CCBImageView *_qrCodeImageView;
    UIImage *_qrImage;
    CCBView *_maskView;
}

@property(retain, nonatomic) CCBView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) _Bool constraintsUpdated; // @synthesize constraintsUpdated=_constraintsUpdated;
@property(retain, nonatomic) UIImage *qrImage; // @synthesize qrImage=_qrImage;
@property(nonatomic) __weak CCBImageView *qrCodeImageView; // @synthesize qrCodeImageView=_qrCodeImageView;
@property(nonatomic) __weak CCBLabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) __weak CCBButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak CCBLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <CCB_13_V_QRCodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *qrString; // @synthesize qrString=_qrString;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dismiss;
- (void)show;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)closeView:(id)arg1;
- (void)setupUIContent;
- (id)initWithFrame:(struct CGRect)arg1;

@end

