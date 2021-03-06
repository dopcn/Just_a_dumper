//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"

@class NSMutableString, NSString, UIButton, UITableView;

@interface QQPimMobilePasswordSettingView : UIView <UITableViewDataSource>
{
    int _type;
    UITableView *_tableView;
    UIButton *_nextStepButton;
    NSMutableString *_password;
    NSMutableString *_ensurePassword;
}

@property(readonly, nonatomic) NSMutableString *ensurePassword; // @synthesize ensurePassword=_ensurePassword;
@property(readonly, nonatomic) NSMutableString *password; // @synthesize password=_password;
@property(readonly, nonatomic) UIButton *nextStepButton; // @synthesize nextStepButton=_nextStepButton;
- (void).cxx_destruct;
- (_Bool)resignFirstResponder;
- (void)refleshNextButtonState;
- (void)textFieldDidChangeNotification:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 withViewType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

