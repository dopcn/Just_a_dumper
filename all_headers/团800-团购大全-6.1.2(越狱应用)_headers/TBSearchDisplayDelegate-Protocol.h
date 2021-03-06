//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TBSearchDisplayController, UITableView;

@protocol TBSearchDisplayDelegate <NSObject>

@optional
- (BOOL)tbSearchDisplayController:(TBSearchDisplayController *)arg1 shouldReloadTableForSearchScope:(int)arg2;
- (BOOL)tbSearchDisplayController:(TBSearchDisplayController *)arg1 shouldReloadTableForSearchString:(NSString *)arg2;
- (void)tbSearchDisplayController:(TBSearchDisplayController *)arg1 didHideSearchResultsTableView:(UITableView *)arg2;
- (void)tbSearchDisplayController:(TBSearchDisplayController *)arg1 willHideSearchResultsTableView:(UITableView *)arg2;
- (void)tbSearchDisplayController:(TBSearchDisplayController *)arg1 didShowSearchResultsTableView:(UITableView *)arg2;
- (void)tbSearchDisplayController:(TBSearchDisplayController *)arg1 willShowSearchResultsTableView:(UITableView *)arg2;
- (void)tbSearchDisplayController:(TBSearchDisplayController *)arg1 willUnloadSearchResultsTableView:(UITableView *)arg2;
- (void)tbSearchDisplayController:(TBSearchDisplayController *)arg1 didLoadSearchResultsTableView:(UITableView *)arg2;
- (void)tbSearchDisplayControllerDidEndSearch:(TBSearchDisplayController *)arg1;
- (void)tbSearchDisplayControllerWillEndSearch:(TBSearchDisplayController *)arg1;
- (void)tbSearchDisplayControllerDidBeginSearch:(TBSearchDisplayController *)arg1;
- (void)tbSearchDisplayControllerWillBeginSearch:(TBSearchDisplayController *)arg1;
@end

