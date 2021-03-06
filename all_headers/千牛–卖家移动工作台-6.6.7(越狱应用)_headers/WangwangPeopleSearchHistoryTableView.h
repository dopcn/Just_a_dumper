//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol WangwangPeopleSearchHistoryTableViewProtocol;

@interface WangwangPeopleSearchHistoryTableView : UITableView <UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *_data;
    long long _tmpKeyboardHeight;
    id <WangwangPeopleSearchHistoryTableViewProtocol> _historySearchDelegate;
}

@property(nonatomic) __weak id <WangwangPeopleSearchHistoryTableViewProtocol> historySearchDelegate; // @synthesize historySearchDelegate=_historySearchDelegate;
- (void).cxx_destruct;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWillShown:(id)arg1;
- (void)unregisterForKeyboardNotifications;
- (void)registerForKeyboardNotifications;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

