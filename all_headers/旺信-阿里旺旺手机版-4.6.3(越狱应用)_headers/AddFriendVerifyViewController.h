//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"
#import "WXContactBizLogicDelegate-Protocol.h"

@class ContactFriendInfo, NSString, UIImageView, UILabel, UITextField, WXImageView;

__attribute__((visibility("hidden")))
@interface AddFriendVerifyViewController : UIViewController <WXContactBizLogicDelegate, UITextFieldDelegate>
{
    UITextField *addFriendMsg;
    UIImageView *inputAreaBK;
    NSString *personId;
    WXImageView *avatar;
    UIImageView *gender;
    UILabel *name;
    UILabel *desc;
    ContactFriendInfo *_contactInfo;
}

@property(retain, nonatomic) ContactFriendInfo *contactInfo; // @synthesize contactInfo=_contactInfo;
@property(retain, nonatomic) UILabel *desc; // @synthesize desc;
@property(retain, nonatomic) UILabel *name; // @synthesize name;
@property(retain, nonatomic) UIImageView *gender; // @synthesize gender;
@property(retain, nonatomic) WXImageView *avatar; // @synthesize avatar;
@property(retain, nonatomic) NSString *personId; // @synthesize personId;
@property(retain, nonatomic) UIImageView *inputAreaBK; // @synthesize inputAreaBK;
@property(retain, nonatomic) UITextField *addFriendMsg; // @synthesize addFriendMsg;
- (void).cxx_destruct;
- (void)save:(id)arg1;
- (void)cancel:(id)arg1;
- (void)contactBizLogic:(id)arg1 didAddContactWithInfo:(id)arg2 reqParams:(id)arg3 andError:(id)arg4;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithQuery:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

