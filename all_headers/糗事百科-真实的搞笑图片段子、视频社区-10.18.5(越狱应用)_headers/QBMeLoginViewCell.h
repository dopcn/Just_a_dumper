//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QBMeTableViewCell.h"

@class UIButton;

@interface QBMeLoginViewCell : QBMeTableViewCell
{
    _Bool _loginClicked;
    UIButton *_loginButton;
    UIButton *_registButton;
}

@property(retain, nonatomic) UIButton *registButton; // @synthesize registButton=_registButton;
@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(nonatomic) _Bool loginClicked; // @synthesize loginClicked=_loginClicked;
- (void).cxx_destruct;
- (void)loadThemeResource;
- (void)performButtonTouchAction;
- (void)registAction:(id)arg1;
- (void)loginAction:(id)arg1;
- (long long)heightOfCell;
- (void)_bindData:(id)arg1;
- (void)setupUI;

@end

