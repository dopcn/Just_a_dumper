//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface TrackHeaderView : UIView
{
    UIButton *_pauseAllButton;
    UIButton *_clearAllButton;
    UIView *_line;
}

@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIButton *clearAllButton; // @synthesize clearAllButton=_clearAllButton;
@property(retain, nonatomic) UIButton *pauseAllButton; // @synthesize pauseAllButton=_pauseAllButton;
- (void).cxx_destruct;
- (void)refreshSkinWithMode:(long long)arg1;
- (void)updatePauseText:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 target:(id)arg2 sel:(SEL)arg3;

@end

