//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, NSTimer, UIButton, UIColor, UIImage, UIImageView, UILabel, UIWindow;
@protocol TBHintViewDataSource, TBHintViewDelegate;

@interface TBHintView : UIView <UIScrollViewDelegate>
{
    _Bool isDismissing;
    _Bool allowGestureTap;
    _Bool bSubmit;
    _Bool hadCreateSubView;
    _Bool bPresentAnimation;
    int presentationAnimation;
    int orientation;
    int slidInStyle;
    int slidOutStyle;
    float slidInTimeIntervals;
    int _hintViewStyle;
    id <TBHintViewDataSource> dataSource;
    id <TBHintViewDelegate> delegate;
    UIImageView *imageViewTitleIcon;
    UIButton *submitButton;
    UIButton *cancelButton;
    UIView *maskView;
    UILabel *labelTitle;
    UIImage *backgroundImage;
    UIColor *textColor;
    double spanWidthWeight;
    NSTimer *dismissTimer;
    double maximumHeight;
    unsigned long long type;
    unsigned long long bottomMargin;
    long long topMargin;
    unsigned long long horizontalMargin;
    UIWindow *overlayWindow;
    UIView *hudView;
    NSString *hintTitle;
    id _userInfo;
    double _maximumWidth;
    UIImage *_buttonImage;
    UIImage *_buttonCancelImage;
}

@property(copy, nonatomic) UIImage *buttonCancelImage; // @synthesize buttonCancelImage=_buttonCancelImage;
@property(copy, nonatomic) UIImage *buttonImage; // @synthesize buttonImage=_buttonImage;
@property(nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property(nonatomic) int hintViewStyle; // @synthesize hintViewStyle=_hintViewStyle;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool bPresentAnimation; // @synthesize bPresentAnimation;
@property(copy, nonatomic) NSString *hintTitle; // @synthesize hintTitle;
@property(nonatomic) _Bool hadCreateSubView; // @synthesize hadCreateSubView;
@property(readonly, nonatomic) UIView *hudView; // @synthesize hudView;
@property(nonatomic) _Bool bSubmit; // @synthesize bSubmit;
@property(nonatomic) _Bool allowGestureTap; // @synthesize allowGestureTap;
@property(nonatomic) float slidInTimeIntervals; // @synthesize slidInTimeIntervals;
@property(nonatomic) int slidOutStyle; // @synthesize slidOutStyle;
@property(nonatomic) int slidInStyle; // @synthesize slidInStyle;
@property(nonatomic) unsigned long long horizontalMargin; // @synthesize horizontalMargin;
@property(nonatomic) long long topMargin; // @synthesize topMargin;
@property(nonatomic) unsigned long long bottomMargin; // @synthesize bottomMargin;
@property(nonatomic) unsigned long long type; // @synthesize type;
@property _Bool isDismissing; // @synthesize isDismissing;
@property(nonatomic) double maximumHeight; // @synthesize maximumHeight;
@property(retain, nonatomic) NSTimer *dismissTimer; // @synthesize dismissTimer;
@property(nonatomic) int orientation; // @synthesize orientation;
@property(nonatomic) int presentationAnimation; // @synthesize presentationAnimation;
@property(nonatomic) double spanWidthWeight; // @synthesize spanWidthWeight;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor;
@property(copy, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton;
@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton;
@property(retain, nonatomic) UIImageView *imageViewTitleIcon; // @synthesize imageViewTitleIcon;
@property(nonatomic) __weak id <TBHintViewDelegate> delegate; // @synthesize delegate;
@property(nonatomic) __weak id <TBHintViewDataSource> dataSource; // @synthesize dataSource;
- (void).cxx_destruct;
- (void)dismissAnimationCompleted;
- (void)dismissAndCancel;
- (void)dismissAndSubmit;
- (void)dismiss;
- (void)show;
- (void)permanentShowInView:(id)arg1 duration:(double)arg2 withTitle:(id)arg3;
- (void)updateTipTitle:(id)arg1;
- (void)showInView:(id)arg1 duration:(double)arg2 withTitle:(id)arg3;
- (void)topViewTapped:(id)arg1;
- (void)show:(double)arg1 withTitle:(id)arg2;
@property(readonly, nonatomic) UIWindow *overlayWindow; // @synthesize overlayWindow;
- (void)createSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)internalInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

