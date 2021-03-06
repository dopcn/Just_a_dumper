//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MttNavigationPopUpView, NSString, UIButton, UILabel;

@interface MttNavigationPopUpViewItem : UIView
{
    NSString *_title;
    UIView *_view;
    MttNavigationPopUpView *_navigationView;
    UIView *_navigationBar;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UIButton *_backButton;
    UILabel *_titleLabel;
    long long _lastOritation;
    UIView *_separator;
}

+ (id)itemWithView:(id)arg1 title:(id)arg2;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(nonatomic) long long lastOritation; // @synthesize lastOritation=_lastOritation;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIView *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic) __weak MttNavigationPopUpView *navigationView; // @synthesize navigationView=_navigationView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)heightForNavigationBar;
- (void)actionWhenCancle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)popSelf;
- (void)setLeftButtonTitle:(id)arg1;
- (void)setRightButtonTitle:(id)arg1;
- (void)initNavigationBarView;
- (id)initWithView:(id)arg1 title:(id)arg2;
- (id)init;

@end

