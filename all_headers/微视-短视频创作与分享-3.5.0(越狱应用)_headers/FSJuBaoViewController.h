//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FSTitleViewController.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, TTAlphaButton, UITableView;

@interface FSJuBaoViewController : FSTitleViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate>
{
    NSString *_personID;
    NSString *_feedID;
    NSString *_commentID;
    NSArray *_reasonArr;
    NSString *_reason;
    long long _checkedIndex;
    TTAlphaButton *_doneButton;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) TTAlphaButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) long long checkedIndex; // @synthesize checkedIndex=_checkedIndex;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSArray *reasonArr; // @synthesize reasonArr=_reasonArr;
@property(retain, nonatomic) NSString *commentID; // @synthesize commentID=_commentID;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(retain, nonatomic) NSString *personID; // @synthesize personID=_personID;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClickDoneBtn:(id)arg1;
- (void)goBack;
- (void)viewDidLoad;

// Remaining properties
@property(retain, nonatomic) TTAlphaButton *backButton;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

