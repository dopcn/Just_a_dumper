//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView;

@interface WonderMenuView : UIView
{
    _Bool _crossScreenEnabled;
    _Bool _recommendEnabled;
    UIButton *_bookmarkButton;
    UIButton *_feedBackButton;
    UIButton *_airplayButton;
    UIButton *_gravityButton;
    UIButton *_crossButton;
    UIButton *_recommendButton;
    UIImageView *_popupMenuBgImageView;
}

@property(nonatomic) _Bool recommendEnabled; // @synthesize recommendEnabled=_recommendEnabled;
@property(nonatomic) _Bool crossScreenEnabled; // @synthesize crossScreenEnabled=_crossScreenEnabled;
@property(retain, nonatomic) UIImageView *popupMenuBgImageView; // @synthesize popupMenuBgImageView=_popupMenuBgImageView;
@property(retain, nonatomic) UIButton *recommendButton; // @synthesize recommendButton=_recommendButton;
@property(retain, nonatomic) UIButton *crossButton; // @synthesize crossButton=_crossButton;
@property(retain, nonatomic) UIButton *gravityButton; // @synthesize gravityButton=_gravityButton;
@property(retain, nonatomic) UIButton *airplayButton; // @synthesize airplayButton=_airplayButton;
@property(retain, nonatomic) UIButton *feedBackButton; // @synthesize feedBackButton=_feedBackButton;
@property(retain, nonatomic) UIButton *bookmarkButton; // @synthesize bookmarkButton=_bookmarkButton;
- (void).cxx_destruct;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 crossScreen:(_Bool)arg2;

@end

