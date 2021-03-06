//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MttButton, UILabel;
@protocol MttARTitleBarViewDelegate;

@interface MttARTitleBarView : UIView
{
    MttButton *_titleButton;
    id <MttARTitleBarViewDelegate> _delegate;
    MttButton *_backButton;
    MttButton *_goButton;
    UILabel *_lbTitle;
}

@property(retain, nonatomic) UILabel *lbTitle; // @synthesize lbTitle=_lbTitle;
@property(retain, nonatomic) MttButton *goButton; // @synthesize goButton=_goButton;
@property(retain, nonatomic) MttButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak id <MttARTitleBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didGoButtonClicked;
- (void)didBackButtonClicked;
- (void)enableTitleBar;
- (void)didTitleBarClicked;
- (void)createGoBtn:(id)arg1 img:(id)arg2;
- (void)createTitleBar:(id)arg1 canBack:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 canBack:(_Bool)arg3;

@end

