//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVTableViewController.h"

#import "NVNavigatorDelegate-Protocol.h"
#import "NVTaskDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, NSString, NVTask, UIButton, UITextView, UIView;

@interface NVPrivateMsgDetailController : NVTableViewController <UIActionSheetDelegate, NVNavigatorDelegate, NVTaskDelegate, UITextFieldDelegate, UIAlertViewDelegate>
{
    NVTask *ntfTask;
    NVTask *sendTask;
    NSMutableArray *list;
    _Bool isEnd;
    long long recordCount;
    long long nextStartIndex;
    long long targetid;
    UIView *inputView;
    UITextView *inputBox;
    UIButton *sendBtn;
    struct CGRect inputViewOrgFrame;
    long long offset;
    long long offset2;
}

+ (_Bool)needsLogin:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadNext;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)taskDidFail:(id)arg1;
- (void)taskDidFinish:(id)arg1;
- (void)scrollToRowAtIndexPath;
- (_Bool)isNotificationEmpty;
- (void)resetNotifications;
- (void)sendMsg;
- (void)keyboardWillHidden:(id)arg1;
- (void)keyboardWillShown:(id)arg1;
- (void)unregisterForKeyboardNotifications;
- (void)registerForKeyboardNotifications;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)isGroupedTableView;
- (_Bool)handleWithURLAction:(id)arg1;
- (void)accountChanged:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

