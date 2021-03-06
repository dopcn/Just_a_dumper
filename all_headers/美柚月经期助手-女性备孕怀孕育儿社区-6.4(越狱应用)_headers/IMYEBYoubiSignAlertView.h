//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMYEBYoubiUserInfoModel, UIButton, UIImageView, UILabel, UIViewController;

@interface IMYEBYoubiSignAlertView : UIView
{
    UIView *_v_all;
    UIButton *_bt_delete;
    UIImageView *_iv_title;
    UIImageView *_iv_signAll;
    UIView *_v_addYoubi;
    UILabel *_l_addYoubi;
    UILabel *_l_addYoubiTitle;
    UILabel *_l_sign;
    UILabel *_l_goOnSign;
    UILabel *_l_goToExchange;
    UIButton *_bt_login;
    CDUnknownBlockType _callback;
    UIViewController *_parentVC;
    IMYEBYoubiUserInfoModel *_model;
}

+ (void)showWindowSign:(id)arg1 pVC:(id)arg2 callback:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) IMYEBYoubiUserInfoModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) __weak UIButton *bt_login; // @synthesize bt_login=_bt_login;
@property(nonatomic) __weak UILabel *l_goToExchange; // @synthesize l_goToExchange=_l_goToExchange;
@property(nonatomic) __weak UILabel *l_goOnSign; // @synthesize l_goOnSign=_l_goOnSign;
@property(nonatomic) __weak UILabel *l_sign; // @synthesize l_sign=_l_sign;
@property(nonatomic) __weak UILabel *l_addYoubiTitle; // @synthesize l_addYoubiTitle=_l_addYoubiTitle;
@property(nonatomic) __weak UILabel *l_addYoubi; // @synthesize l_addYoubi=_l_addYoubi;
@property(nonatomic) __weak UIView *v_addYoubi; // @synthesize v_addYoubi=_v_addYoubi;
@property(nonatomic) __weak UIImageView *iv_signAll; // @synthesize iv_signAll=_iv_signAll;
@property(nonatomic) __weak UIImageView *iv_title; // @synthesize iv_title=_iv_title;
@property(nonatomic) __weak UIButton *bt_delete; // @synthesize bt_delete=_bt_delete;
@property(nonatomic) __weak UIView *v_all; // @synthesize v_all=_v_all;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)gotoLogin:(id)arg1;
- (void)refreshSignV;
- (void)deleteBtnDo:(id)arg1;
- (void)awakeFromNib;

@end

