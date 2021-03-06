//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTPCViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class CTPCTitleEditCell, NSArray, NSString, UIButton, UITableView, UITableViewCell, UIView;

@interface CTPCCardAddViewController : CTPCViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>
{
    _Bool _needExpand;
    _Bool _clickBack;
    NSString *_cardAddPlaceholder;
    CTPCTitleEditCell *_cardAddCell;
    UITableView *_tableView;
    NSArray *_cellArray;
    UIButton *_confirmButton;
    UIView *_contentView;
    UITableViewCell *_verifyCardCell;
}

@property(nonatomic) _Bool clickBack; // @synthesize clickBack=_clickBack;
@property(nonatomic) _Bool needExpand; // @synthesize needExpand=_needExpand;
@property(retain, nonatomic) UITableViewCell *verifyCardCell; // @synthesize verifyCardCell=_verifyCardCell;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(copy, nonatomic) NSArray *cellArray; // @synthesize cellArray=_cellArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CTPCTitleEditCell *cardAddCell; // @synthesize cardAddCell=_cardAddCell;
@property(copy, nonatomic) NSString *cardAddPlaceholder; // @synthesize cardAddPlaceholder=_cardAddPlaceholder;
- (void).cxx_destruct;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setStatusBarColor:(id)arg1;
- (void)KeyboardWillHide:(id)arg1;
- (void)KeyboardWillShow:(id)arg1;
- (void)removeKeyboardNotification;
- (void)registerKeyboardNotification;
- (void)showErrorMsg:(id)arg1;
- (void)stopAnimation;
- (void)beginAnimation;
- (void)goToNext:(id)arg1;
- (void)confirmClick;
- (void)backBarButtonClicked:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)tap:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

