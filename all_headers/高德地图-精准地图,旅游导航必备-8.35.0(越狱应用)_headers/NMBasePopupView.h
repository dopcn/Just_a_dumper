//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTMBaseView.h"

@class UIView;
@protocol NMPopupViewEvent;

@interface NMBasePopupView : LTMBaseView
{
    UIView *_backgroundView;
    UIView *_contentView;
    _Bool _isTopStyle;
    UIView *_parentView;
    _Bool _isPopup;
    long long _aIdx;
    id _sender;
    _Bool _isMidStyle;
    _Bool _isAnimating;
    id <NMPopupViewEvent> _delegate;
}

@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <NMPopupViewEvent> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool isPopup; // @synthesize isPopup=_isPopup;
@property(nonatomic) _Bool isMidStyle; // @synthesize isMidStyle=_isMidStyle;
@property(nonatomic) _Bool isTopStyle; // @synthesize isTopStyle=_isTopStyle;
- (void).cxx_destruct;
- (void)updateToLandscapeSize;
- (void)updateToPortraitSize;
- (void)privUpdateSize;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)addActionButton:(id)arg1;
- (void)dlgButtonAction:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (void)showAnimated:(_Bool)arg1;
- (void)fixContentOffset:(long long)arg1;
- (void)addContentSubview:(id)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)privShow:(_Bool)arg1;
- (void)privDismiss:(_Bool)arg1 andIdfy:(id)arg2;
- (void)dismissStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)dealloc;
- (id)initWithParent:(id)arg1 withIdfy:(long long)arg2;

@end

