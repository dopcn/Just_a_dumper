//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UIImageView, UILabel;

@interface RCPublicServiceAuthorizationViewController : UIViewController
{
    CDUnknownBlockType _completion;
    NSString *_serviceName;
    NSString *_serviceProtialUrl;
    UIImageView *_protialView;
    UILabel *_tipLabel;
}

@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *protialView; // @synthesize protialView=_protialView;
@property(retain, nonatomic) NSString *serviceProtialUrl; // @synthesize serviceProtialUrl=_serviceProtialUrl;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)onCanceled:(id)arg1;
- (void)onConfirmed:(id)arg1;
- (void)viewDidLoad;
- (id)initWithServiceName:(id)arg1 serviceProtialUrl:(id)arg2 comletion:(CDUnknownBlockType)arg3;

@end

