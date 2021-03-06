//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQPimBaseViewController.h"

#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "QQPimLocalBackupDelegate-Protocol.h"
#import "QQPimLocalShareSelecterDelegate-Protocol.h"
#import "QQPimRouteLoaderProtocol-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSArray, NSString, QQPimLocalBackupView, UIAlertExView, UIButton, UIImageView;

@interface QQPimLocalBackupController : QQPimBaseViewController <QQPimRouteLoaderProtocol, UIAlertViewDelegate, MFMailComposeViewControllerDelegate, QQPimLocalBackupDelegate, QQPimLocalShareSelecterDelegate>
{
    _Bool _fromWeixin;
    _Bool _creating;
    _Bool _exiting;
    _Bool _headOn;
    long long _currentPackType;
    NSArray *_arrayOfGroupIDs;
    NSArray *_arrayOfIDs;
    NSString *_createFilePath;
    QQPimLocalBackupView *_mainView;
    UIAlertExView *_askRecoverAlertView;
    UIButton *_headSwitchButton;
    UIImageView *_headIcon;
}

+ (unsigned long long)qqpimRouteShowType;
+ (id)qqpimRouterUrl;
@property(retain, nonatomic) UIImageView *headIcon; // @synthesize headIcon=_headIcon;
@property(retain, nonatomic) UIButton *headSwitchButton; // @synthesize headSwitchButton=_headSwitchButton;
@property(retain, nonatomic) UIAlertExView *askRecoverAlertView; // @synthesize askRecoverAlertView=_askRecoverAlertView;
@property(retain, nonatomic) QQPimLocalBackupView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) NSString *createFilePath; // @synthesize createFilePath=_createFilePath;
@property(retain, nonatomic) NSArray *arrayOfIDs; // @synthesize arrayOfIDs=_arrayOfIDs;
@property(retain, nonatomic) NSArray *arrayOfGroupIDs; // @synthesize arrayOfGroupIDs=_arrayOfGroupIDs;
@property(nonatomic) long long currentPackType; // @synthesize currentPackType=_currentPackType;
@property(nonatomic) _Bool headOn; // @synthesize headOn=_headOn;
@property(nonatomic) _Bool exiting; // @synthesize exiting=_exiting;
@property(nonatomic) _Bool creating; // @synthesize creating=_creating;
@property(nonatomic) _Bool fromWeixin; // @synthesize fromWeixin=_fromWeixin;
- (void).cxx_destruct;
- (void)backButtonPressed:(id)arg1;
- (_Bool)popViewControllerUsingGestureShouldBegin;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)startCreating;
- (void)contactsSelected:(id)arg1 andGroupIds:(id)arg2;
- (void)notificationNewProgressOnMainThread:(id)arg1;
- (_Bool)operateObserverInNumberProgress:(int)arg1 andTotal:(long long)arg2 andTips:(id)arg3;
- (_Bool)operateObserverProgress:(int)arg1 andTips:(id)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)otherButtonPressed;
- (void)weixinButtonPressed;
- (void)emailButtonPressed;
- (void)cancelButtonPressed;
- (void)selectButtonPressed;
- (void)groupButtonPressed;
- (void)allPresonButtonPressed;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)init;
- (void)cleanProperty;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

