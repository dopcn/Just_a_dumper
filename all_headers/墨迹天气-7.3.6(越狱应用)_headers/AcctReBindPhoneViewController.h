//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AcctBaseViewController.h"

@class NSString;

@interface AcctReBindPhoneViewController : AcctBaseViewController
{
    NSString *_existPhoneStr;
}

@property(retain, nonatomic) NSString *existPhoneStr; // @synthesize existPhoneStr=_existPhoneStr;
- (void).cxx_destruct;
- (void)netForValidateCode:(id)arg1;
- (void)onClickSendVldCodeBtn:(id)arg1;
- (void)setupObserver;
- (void)setupPhoneView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;

@end

