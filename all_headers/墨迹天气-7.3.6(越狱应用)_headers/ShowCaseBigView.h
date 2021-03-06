//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ShowCaseView.h"

@class MJLVideoPlayerView, UIButton, UILabel;

@interface ShowCaseBigView : ShowCaseView
{
    _Bool _cleanFillColor;
    UILabel *_titleLabel;
    UILabel *_textLabel;
    UIButton *_button;
    UIButton *_bgButton;
    MJLVideoPlayerView *_mjCardVideo;
    CDUnknownBlockType _actionBlk;
    struct CGRect _preRect;
}

+ (Class)layerClass;
@property(nonatomic) _Bool cleanFillColor; // @synthesize cleanFillColor=_cleanFillColor;
@property(nonatomic) struct CGRect preRect; // @synthesize preRect=_preRect;
@property(copy, nonatomic) CDUnknownBlockType actionBlk; // @synthesize actionBlk=_actionBlk;
@property(nonatomic) __weak MJLVideoPlayerView *mjCardVideo; // @synthesize mjCardVideo=_mjCardVideo;
@property(nonatomic) __weak UIButton *bgButton; // @synthesize bgButton=_bgButton;
@property(nonatomic) __weak UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)bezierPathlayer:(id)arg1 color:(id)arg2;
- (void)layoutSubviews;
- (id)bottomSubView;
- (void)layoutButtonIfNeed;
- (void)layoutContentLabelIfNeed;
- (void)layoutTitleLabelIfNeed;
- (void)layoutIconView;
- (void)layoutIconImageViewIfNeed;
- (void)layoutBigImageViewIfNeed;
- (void)layoutVideoCardIfNeed;
- (void)layoutBgButtonIfNeed;
- (void)layoutBackgroundView;
- (void)changeConstaintsIfNeed;
- (_Bool)matchStyle:(id)arg1;
- (void)updateViewByDataSource:(id)arg1;
- (void)doAction:(id)arg1;
- (id)addButton;
- (id)addLabel;

@end

