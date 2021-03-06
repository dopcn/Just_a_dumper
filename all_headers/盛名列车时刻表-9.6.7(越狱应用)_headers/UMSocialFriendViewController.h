//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UMImageViewDelegate-Protocol.h"
#import "UMSocialDataDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIButton, UISearchBar, UITableView, UMSocialControllerService, UMSocialMBProgressHUD;
@protocol UMSGridViewItemClickedDelegate;

@interface UMSocialFriendViewController : UIViewController <UMSocialDataDelegate, UMImageViewDelegate, UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate>
{
    UMSocialControllerService *_socialControllerService;
    NSDictionary *_friendDictionary;
    NSMutableDictionary *_filterFriendDictionary;
    NSMutableArray *_filterFriendArray;
    UITableView *_tableView;
    NSMutableArray *_searchFriendArray;
    _Bool _isSearch;
    UISearchBar *_searchBar;
    UMSocialMBProgressHUD *_hudView;
    UIButton *_refreshButton;
    id <UMSGridViewItemClickedDelegate> _umsDelegate;
}

@property(nonatomic) UMSocialControllerService *socialControllerService; // @synthesize socialControllerService=_socialControllerService;
@property(nonatomic) id <UMSGridViewItemClickedDelegate> umsDelegate; // @synthesize umsDelegate=_umsDelegate;
- (void)didFinishGetUMSocialDataResponse:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchFrinds:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)scaleToSize:(struct CGSize)arg1 fromImage:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)close;
- (void)refreshFriends;
- (void)filterFriendArray;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

