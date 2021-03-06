//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface SIKKBKeyPopView : UIView
{
    UIView *m_fromView;
    struct SIKKBKey *m_activeKey;
    BOOL m_showUpText;
    BOOL m_shiftOn;
    UIImageView *m_bgImageView;
    UIImageView *m_foreImageView;
    UILabel *m_textLabel;
    NSString *m_bgImageName;
    NSString *m_foreImageName;
    struct CGSize m_imageSize;
    BOOL m_isNightModeChanged;
}

@property(nonatomic) BOOL shiftOn; // @synthesize shiftOn=m_shiftOn;
@property(nonatomic) UIView *fromView; // @synthesize fromView=m_fromView;
- (BOOL)isShowingInView:(id)arg1;
- (void)hideInView:(id)arg1;
- (void)showInView:(id)arg1;
- (void)showUpText;
- (void)refreshView;
- (void)changeImageSize:(struct CGSize)arg1;
- (void)changeForeImage:(id)arg1;
- (void)changeBgImage:(id)arg1;
- (BOOL)useSystemTypePopView;
@property(nonatomic) struct SIKKBKey *activeKey; // @synthesize activeKey=m_activeKey;
- (void)switchDayAndNightMode;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

