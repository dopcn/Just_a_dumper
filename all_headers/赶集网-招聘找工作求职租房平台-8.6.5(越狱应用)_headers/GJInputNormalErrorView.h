//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIFont, UIImageView, UILabel;

@interface GJInputNormalErrorView : UIView
{
    _Bool _hasWarningIcon;
    NSString *_errorMessage;
    UIImageView *_errorIconView;
    UILabel *_errorMessageLabel;
    UIFont *_font;
}

@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) _Bool hasWarningIcon; // @synthesize hasWarningIcon=_hasWarningIcon;
@property(retain, nonatomic) UILabel *errorMessageLabel; // @synthesize errorMessageLabel=_errorMessageLabel;
@property(retain, nonatomic) UIImageView *errorIconView; // @synthesize errorIconView=_errorIconView;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
- (void).cxx_destruct;
- (void)shakeAnimation;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)sharedInit;
- (id)initWithErrorMessage:(id)arg1 font:(id)arg2 hasWarningIcon:(_Bool)arg3;
- (id)initWithErrorMessage:(id)arg1 font:(id)arg2;
- (id)initWithErrorMessage:(id)arg1;

@end

