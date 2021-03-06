//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMSearchController.h"

@class CALayer, FMBaseContactListMode, FMContact, FMContactDetailController, NSString, QMUILabel, RACCommand, UIView;

@interface FMContactSearchViewController : FMSearchController
{
    NSString *_searchWord;
    UIView *_footerView;
    QMUILabel *_contactCountLabel;
    CALayer *_footerViewLineLayer;
    FMBaseContactListMode *_contactListMode;
    RACCommand *_loadOtherContactCmd;
    FMContact *_matchContact;
    FMContactDetailController *_presentViewController;
}

@property(nonatomic) __weak FMContactDetailController *presentViewController; // @synthesize presentViewController=_presentViewController;
@property(retain, nonatomic) FMContact *matchContact; // @synthesize matchContact=_matchContact;
@property(retain, nonatomic) RACCommand *loadOtherContactCmd; // @synthesize loadOtherContactCmd=_loadOtherContactCmd;
@property(retain, nonatomic) FMBaseContactListMode *contactListMode; // @synthesize contactListMode=_contactListMode;
- (void).cxx_destruct;
- (void)popSelfViewController;
- (void)searchControllerWillPresent;
- (void)updateSearchResultsByType:(unsigned long long)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setCellUIWithCell:(id)arg1 indexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)layoutFooterView;
- (void)checkFooterView;
- (void)reload;

@end

