//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CABasicAnimation, UIButton, UIImageView, UILabel, UIView, UIWindow;

@interface XRecordViewController : UIViewController
{
    CDUnknownBlockType _stopButtonBlock;
    UIWindow *_previousKeyWindow;
    long long _previousStatusBarStyle;
    UIView *_toolBar;
    UIButton *_stopButton;
    UIImageView *_btnIconImageView;
    CABasicAnimation *_btnIconAnimation;
    UILabel *_btnTitleLabel;
}

@property(retain, nonatomic) UILabel *btnTitleLabel; // @synthesize btnTitleLabel=_btnTitleLabel;
@property(retain, nonatomic) CABasicAnimation *btnIconAnimation; // @synthesize btnIconAnimation=_btnIconAnimation;
@property(retain, nonatomic) UIImageView *btnIconImageView; // @synthesize btnIconImageView=_btnIconImageView;
@property(retain, nonatomic) UIButton *stopButton; // @synthesize stopButton=_stopButton;
@property(retain, nonatomic) UIView *toolBar; // @synthesize toolBar=_toolBar;
@property(nonatomic) long long previousStatusBarStyle; // @synthesize previousStatusBarStyle=_previousStatusBarStyle;
@property(retain, nonatomic) UIWindow *previousKeyWindow; // @synthesize previousKeyWindow=_previousKeyWindow;
@property(copy, nonatomic) CDUnknownBlockType stopButtonBlock; // @synthesize stopButtonBlock=_stopButtonBlock;
- (void).cxx_destruct;
- (void)handleMovePan:(id)arg1;
- (void)stopAction:(id)arg1;
- (_Bool)shouldReceiveTouchEventAtPoint:(struct CGPoint)arg1;
- (_Bool)wantToBecomeKeyWindow;
- (void)resignKeyAndDismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)makeKeyAndPresentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)statusWindow;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

