//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MNBViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class MNRNicknameEdit, MTBTextField, NSMutableArray, NSString;
@protocol MTDModifyNickNameVCDelegate;

@interface MNFModifyNickNameVC : MNBViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>
{
    id <MTDModifyNickNameVCDelegate> _delegate;
    NSMutableArray *_mArrayShow;
    MTBTextField *_textFieldNickName;
    MNRNicknameEdit *_requestNicknameEdit;
}

@property(retain, nonatomic) MNRNicknameEdit *requestNicknameEdit; // @synthesize requestNicknameEdit=_requestNicknameEdit;
@property(retain, nonatomic) MTBTextField *textFieldNickName; // @synthesize textFieldNickName=_textFieldNickName;
@property(retain, nonatomic) NSMutableArray *mArrayShow; // @synthesize mArrayShow=_mArrayShow;
@property(nonatomic) __weak id <MTDModifyNickNameVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)editNicknameFailed;
- (void)editNicknameSuccessfully:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)btnClickSave:(id)arg1;
- (void)btnClickBack:(id)arg1;
- (void)mt_cancelLoadData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)createMainViews;
- (void)createNavBarView;
- (void)mt_createViews;
- (void)mt_initFields;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

