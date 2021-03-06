//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLPayHistoryViewController.h"

#import "NLPayTransferDetailViewControllerDelegate-Protocol.h"

@class NSString;

@interface NLPayTransferRequestHistoryViewController : NLPayHistoryViewController <NLPayTransferDetailViewControllerDelegate>
{
}

+ (id)humanReadableTypeStringWithRequestInfo:(id)arg1;
- (void)transferDetailViewController:(id)arg1 didUpdatedTransferRequestInfo:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)textLabelStringWithRequestInfo:(id)arg1;
- (_Bool)isRequstTypeFrom:(long long)arg1;
- (void)loadDataWithSegmentedIndex:(long long)arg1 startNumber:(long long)arg2 animated:(_Bool)arg3;
- (id)typeString;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)historyHeaderViewShouldShowSegmentedControl:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

