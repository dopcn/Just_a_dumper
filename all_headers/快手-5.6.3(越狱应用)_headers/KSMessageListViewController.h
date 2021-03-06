//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSListViewController.h"

#import "KSMailListCellDelegate-Protocol.h"

@class NSString;

@interface KSMessageListViewController : KSListViewController <KSMailListCellDelegate>
{
    _Bool _uapLog;
}

- (id)ksuShowMetaData;
- (id)pageURL;
- (void)deleteWithCell:(id)arg1 indexPath:(id)arg2;
- (void)didLongPressMessageTableView:(id)arg1;
- (void)didOpenMenuWithCell:(id)arg1;
- (void)didTapBtnWithCell:(id)arg1 index:(long long)arg2;
- (void)didTapBodyWithCell:(id)arg1 item:(id)arg2;
- (void)didTapHeaderWithCell:(id)arg1 item:(id)arg2;
- (void)didSelectCell:(id)arg1 withListObject:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)cellWithListObject:(id)arg1 atIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)model:(id)arg1 DidFailLoadWithError:(id)arg2;
- (void)modelDidFinishLoad:(id)arg1;
- (id)createModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

