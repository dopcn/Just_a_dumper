//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UITextField;

@interface SAPICaptchaView : UIView
{
    UITextField *_captchaTF;
    UIImageView *_captcahImageView;
    UIButton *_refreshBtn;
}

@property(retain, nonatomic) UIButton *refreshBtn; // @synthesize refreshBtn=_refreshBtn;
@property(retain, nonatomic) UIImageView *captcahImageView; // @synthesize captcahImageView=_captcahImageView;
@property(retain, nonatomic) UITextField *captchaTF; // @synthesize captchaTF=_captchaTF;
- (void).cxx_destruct;
- (void)setup;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

