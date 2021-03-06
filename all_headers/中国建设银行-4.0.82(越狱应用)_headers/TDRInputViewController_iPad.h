//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TDRViewController.h"

@class NSMutableString, TDRTextField, UIImageView, UILabel, UIView;

@interface TDRInputViewController_iPad : TDRViewController
{
    UIView *_containView;
    UIImageView *_titleImageView;
    UIImageView *_pinImageView;
    UIView *_middleView;
    UILabel *_titleLabel;
    TDRTextField *_pinTextField;
    NSMutableString *_errDescription;
    id _target;
    SEL _done;
    SEL _cancel;
    double _upYPos;
    struct CGRect _oldFrame;
}

@property(nonatomic) double upYPos; // @synthesize upYPos=_upYPos;
@property(nonatomic) struct CGRect oldFrame; // @synthesize oldFrame=_oldFrame;
- (_Bool)isValidNewPin:(id)arg1 repeatNewPin:(id)arg2;
- (_Bool)isValidOldPin:(id)arg1 newPin:(id)arg2 repeatNewPin:(id)arg3;
- (_Bool)isValidPin:(id)arg1;
- (_Bool)isValidLengthPin:(id)arg1;
- (void)devicePluginOut:(id)arg1;
- (void)cancel:(id)arg1;
- (void)done:(id)arg1;
- (id)plainPin;
- (id)encryptPin;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)unregisterForKeyboardNotifications;
- (void)registerForKeyboardNotifications;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

@end

