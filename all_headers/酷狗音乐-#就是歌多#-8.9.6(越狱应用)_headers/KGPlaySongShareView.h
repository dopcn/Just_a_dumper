//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KGThemeView.h"

@class KGThemeLabel, NSArray, NSMutableArray, NSTimer, UIImageView, UIView;
@protocol KGPlaySongShareViewDelegate;

@interface KGPlaySongShareView : KGThemeView
{
    _Bool _isActivite;
    id <KGPlaySongShareViewDelegate> _delegate;
    UIView *_tapView;
    UIImageView *_bgView;
    UIView *_contentView;
    KGThemeLabel *_titleLabel;
    NSTimer *_timer;
    NSArray *_shareItems;
    NSMutableArray *_btnItems;
}

@property(retain, nonatomic) NSMutableArray *btnItems; // @synthesize btnItems=_btnItems;
@property(retain, nonatomic) NSArray *shareItems; // @synthesize shareItems=_shareItems;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) KGThemeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIView *tapView; // @synthesize tapView=_tapView;
@property(nonatomic) __weak id <KGPlaySongShareViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isActivite; // @synthesize isActivite=_isActivite;
- (void).cxx_destruct;
- (void)dismiss:(_Bool)arg1;
- (void)showWithAnimate;
- (void)showInView:(id)arg1 shareItems:(id)arg2;
- (id)shareItemFromTag:(long long)arg1;
- (void)itemClick:(id)arg1;
- (void)tapHandler:(id)arg1;
- (void)reloadBtnItemFrame;
- (void)setupUI;
- (id)createBtn:(id)arg1;
- (void)createShareItems:(id)arg1;
- (void)shareViewtimerHandler:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (id)init;

@end

